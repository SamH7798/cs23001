#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str1("abcdefg");

    // TEST
    int result = str1.findstr(0,"cde");

    // VERIFY
    
    assert(result == 2);
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str1("helloworld");

    // TEST
    int result = str1.findstr(0,"world");

    // VERIFY

    assert(result == 5);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str1("computerscience");

    // TEST
    int result = str1.findstr(0,"science");

    // VERIFY

    assert(result == 8);
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str1("homework");

    // TEST
    int result = str1.findstr(0,"work");

    // VERIFY

    assert(result == 4);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str1("NGSOHE");

    // TEST
    int result = str1.findstr(0,"SO");

    // VERIFY

    assert(result == 2);
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str1("QWERTY");

    // TEST
    int result = str1.findstr(0,"W");

    // VERIFY

    assert(result == 1);
  }

  std::cout<< "Done testing find string" <<std::endl;




}
