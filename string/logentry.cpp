//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class implementation for a log entry.
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 
#include "logentry.hpp"

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
LogEntry::LogEntry(String s) {
    // ...
    std::vector<String> vec = s.split(' ');
    
    if(vec.size()!= 10){

      host ="";
      request ="";
      status ="";
      number_of_bytes = 0;
}
    else{
      host = vec[0];
      time.setTime(date.setDate(vec[3]));
      request = vec[5] + vec[6] + vec[7];
      status = vec[8];
      if(vec[9] =='-'){
	  number_of_bytes=0;
	}
      else{
	  number_of_bytes = StringtoInt(vec[9]);
	}
    }
    
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
std::vector<LogEntry> parse(std::istream& in) {
  std::vector<LogEntry> result;
  String letter;
  char temp[512];
  while(!in.eof()){
    in.getline(temp, 512);
    if(in.eof())break;
    letter = temp;
    result.push_back(letter);
  }
  return result;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void output_all(std::ostream& out, const std::vector<LogEntry> &given) {
  
  for(unsigned int i = 0; i < given.size(); ++i)

    out<<given.at(i);

    
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void by_host(std::ostream& out, const std::vector<LogEntry> &given) {
  int i = 0;
  while (i < int( given.size())) {
    out << given[i].getHost() << std::endl;
    i++;
  }
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
int byte_count(const std::vector<LogEntry> &log) {
    
   
  int count = 0;

  for (unsigned int i = 0; i < log.size(); ++i) {

    count += log[i].getBytes();

  }

  return count;
}


 std::vector<String> Date::setDate(String given) {
  
   std::vector<String> date = given.split('/');
   date[0] = (date[0].split('['))[1];
  
   std::vector<String> timevector = date[2].split(':');
   day = date[0];
   month = date[1];
   year = StringtoInt(timevector[0]);
   
   return timevector;
 }
 
void Time::setTime(std::vector<String> given) {

   hour = StringtoInt(given[1]);
   minute = StringtoInt(given[2]);
   second = StringtoInt(given[3]);
 }

 int StringtoInt(String given) {
   int stringint = 0, i = 0;
   while (i < given.length()) {
     stringint = stringint * 10 + (given[i] - '0');
     i++;
   }
   return stringint;
 }



 void LogEntry::printContents(std::ostream& out) const{
   out << host << " ";
   date.printDate(out);
   out<< " ";
   
   time.printTime(out);
   out<< " "<< request<< " " << status<< " " << number_of_bytes;
   

}

 void Date::printDate(std::ostream& out) const{
   out<< day <<" " << month <<" " << year;
}

 void Time::printTime(std::ostream& out) const{
   out<< hour<< " "<< minute<< " "<< second;


}


 std::ostream& operator<<(std::ostream& out, const LogEntry& given) {
   out << given;
   return out;
 }
