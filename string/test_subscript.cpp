#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("qwerty");
    
    // TEST
    char result = str[0];

    // VERIFY
    assert(str    == "qwerty");
    assert(result == 'q');
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("q12345");

    // TEST
    char result = str[3];

    // VERIFY
    assert(str    == "q12345");
    assert(result == '3');
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("hello");

    // TEST
    char result = str[2];

    // VERIFY
    assert(str    == "hello");
    assert(result == 'l');
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("ohio");

    // TEST
    char result = str[3];

    // VERIFY
    assert(str    == "ohio");
    assert(result == 'o');
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("yuiop");

    // TEST
    char result = str[1];

    // VERIFY
    assert(str    == "yuiop");
    assert(result == 'u');
  }





  std::cout<< "Done testing Subscript" <<std::endl;

}
