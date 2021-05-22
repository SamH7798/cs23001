#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String str1("qwerty");

    int result1 = str1.length();
    int result2 = str1.capacity();
    // TEST

    // VERIFY
    assert(result1 == 6);
    assert(result2 == 6);
  }


  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String str1("fdert3");

      int result1 = str1.length();
    int result2 = str1.capacity();
    // TEST

    // VERIFY
    assert(result1 == 6);
    assert(result2 == 6);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String str1("helloworld");

      int result1 = str1.length();
    int result2 = str1.capacity();
    // TEST

    // VERIFY
    assert(result1 == 10);
    assert(result2 == 10);
  }

  std::cout<< "Done testing length capacity" <<std::endl;

}
