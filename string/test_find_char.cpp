#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str1("abcde");
     
   
    // VERIFY
    
    assert(str1.findch(0, 'b') == 1);
  }
   
     

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str1("hello");


    // VERIFY

    assert(str1.findch(0, 'h') == 0);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str1("world");


    // VERIFY

    assert(str1.findch(0, 'r') == 2);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str1("jfkalasdf");


    // VERIFY

    assert(str1.findch(0, 'l') == 4);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str1("vkdsassez");


    // VERIFY

    assert(str1.findch(0, 'e') == 7);
  }



  


  std::cout<< "Done testing find character" <<std::endl;

    
}
