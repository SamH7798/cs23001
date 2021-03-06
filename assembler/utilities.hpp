
#ifndef CS2_UTILITIES_HPP_
#define CS2_UTILITIES_HPP_

#include<iostream>
#include <fstream>
#include "../string/string.hpp"
#include "stack.hpp"





void toPostfix(std::ifstream& in, std::ostream& out); 
 
void toAssembly(const String&);
String evaluate(const String&, const String&, const String&, bool[]);
String intToString(int);






#endif
