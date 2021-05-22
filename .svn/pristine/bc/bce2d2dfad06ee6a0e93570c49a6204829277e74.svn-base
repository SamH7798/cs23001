#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str1("abc");
    String  str2("123");
    // TEST
    String result = str1 + str2;

    // VERIFY
  
    assert(result == "abc123");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str1("qwerty");
    String  str2("555");
    // TEST
    String result = str1 + str2;

    // VERIFY

    assert(result == "qwerty555");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str1("hello");
    String  str2("world");
    // TEST
    String result = str1 + str2;

    // VERIFY

    assert(result == "helloworld");
  }

  std::cout<< "Done testing concat" << std::endl;

  
}
