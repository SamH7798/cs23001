
 #ifndef BIGINT_H
 #define BIGINT_H

#include<iostream>
#include<array>
         
const int CAPACITY = 400; 


class bigint{

public:
  
  bigint();

  bigint(int);

  bigint(const char[]);

  bigint timesDigit(int);

  bigint times10(int)const;
  
  void debugprint(std::ostream&) const;
 
  friend  std::ostream& operator<<(std::ostream&, bigint);

  friend std::istream& operator>>(std::istream&, bigint& );
  
  bool operator==(bigint);

  bigint operator+(const bigint&);

  bigint operator*(bigint);

  int operator[](int);
private:

  int digits[CAPACITY];


};













    #endif
