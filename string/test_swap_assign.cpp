#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String str1("hello");
    String str2("world");
    
    str1.swap(str2);


    // VERIFY
    assert(str1 == "world");
    assert(str2 == "hello");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String str1("kent");
    String str2("state");

    str1.swap(str2);


    // VERIFY
    assert(str1 == "state");
    assert(str2 == "kent");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String str1("abcd");
    String str2("zxcv");

    str1.swap(str2);


    // VERIFY
    assert(str1 == "zxcv");
    assert(str2 == "abcd");
  }

  std::cout<< "Done testing swap assign" <<std::endl;




}
