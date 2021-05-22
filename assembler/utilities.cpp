#include "utilities.hpp"
#include "../string/string.hpp"
#include <iostream>
#include <fstream>

void toPostfix(std::ifstream& in, std::ostream& out) {
  stack<String> s;
  String left, right, op, currentToken;
  char token[300];

  while (!in.eof()) {
    in >> token;
    currentToken = String(token);

    if (in.eof()) {
      break;
    }

    if (currentToken == ";") {
 
      out << s.top();
      //      out << ";";
      out << std::endl;
      s = stack<String>();
    } 
    else if (currentToken == ")") {
      
      right = s.pop();
      op = s.pop();
      left = s.pop();
      s.push(left + right + op);
    }
    else 
      {
      if (currentToken != "(") {
	s.push(currentToken + ' ');
      }
    }
  }
}

void toAssembly(const String& expr){
  stack<String> result;
  std::vector<String> tokens = expr.split(' ');
  String left, right;
  unsigned int loc = 0;
  bool n[tokens.size()];

  for(unsigned int i = 0; i < tokens.size(); ++i)
    n[i] = false;

  while((tokens.at(loc) != " ")&&(tokens.at(loc) != "")&&(loc < tokens.size() - 1))
    {
      String t = tokens.at(loc);
      ++loc;
      if   ((t != "*") && (t != " *") && (t != "* ") 
	    && (t != "/") && (t != " /") && (t != "/ ") 
	    && (t != "+") && (t != " +") && (t != "+ ")
	    && (t != "-") && (t != " -") && (t != "- "))
	result.push(t);
      else{
	right = result.pop();
	left  = result.pop();
	result.push(evaluate(left, t, right, n));
      }
    }
}

String evaluate(const String& lhs, const String& oper, 
		const String& rhs, bool n[]){
  String result, operCmd, load, store;
  load = "LD";
  store = "ST";
  
  int i = 0;
  while(n[i]) // iterates through result to create temp strings
    ++i;
  
  n[i] = true;

  result = "TMP" + intToString(i + 1);

  if     ((oper == "+") || (oper == " +") || (oper == "+ "))
    operCmd = "AD";
  else if((oper == "-") || (oper == " -") || (oper == "- "))
    operCmd = "SB";
  else if((oper == "*") || (oper == " *") || (oper == "* "))
    operCmd = "MU";
  else if((oper == "/") || (oper == " /") || (oper == "/ "))
    operCmd = "DV";
  else
    operCmd = "UN";

  std::cout << std::getw(4) << load    << std::setw(10) << lhs    << '\n';
  std::cout << std::setw(4) << operCmd << std::setw(10) << rhs    << '\n';
  std::cout << std::setw(4) << store   << std::setw(10) << result << '\n';
  
  return result;
}



String intToString(int x){
  char ch = x + '0';
  return String(ch);
}

