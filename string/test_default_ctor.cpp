#include"string.hpp"
#include <cassert>
#include<iostream>
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str;

    // VERIFY
    assert(str == '\0');
  }

  std::cout<< "Done testing default constructor" <<std::endl;

}
