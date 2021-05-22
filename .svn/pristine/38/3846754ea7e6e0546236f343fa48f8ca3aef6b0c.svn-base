
#ifndef CS23001_STRING_INTERFACE_HPP
#define CS23001_STRING_INTERFACE_HPP

#include<iostream>

const int STRING_SIZE = 256;

class String{

public:
  String();
  String(char);
  String(const char[]);
  int length()const;
  int  capacity () const; 
  bool operator== (const String&) const;
  bool operator<(const String&)  const;
  String operator+(const String&) const; 
  String operator += (const String&);
  char&   operator[] (int);       
  char    operator[](int)const;  


  String substr(int,int) const;                                   
  int findstr(int, const String&) const;                              
  int findch(int,char) const;

  friend  std::istream& operator>>(std::istream&, String&);
  friend  std::ostream& operator<<(std::ostream&, const String&);

private:
  char str[STRING_SIZE];


};

String  operator+       (const char[],  const String&);
String  operator+       (char,          const String&);
bool    operator==      (const char[],  const String&);
bool    operator==      (char,          const String&);
bool    operator<       (const char[],  const String&);
bool    operator<       (char,          const String&);
bool    operator<=      (const String&, const String&);
bool    operator!=      (const String&, const String&);
bool    operator>=      (const String&, const String&);
bool    operator>       (const String&, const String&);



#endif
