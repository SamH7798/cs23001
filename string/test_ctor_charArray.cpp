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
    String  str("hello");
    
    // VERIFY
    assert(str == "hello");
    
  }
  
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str("world");

    // VERIFY
    assert(str == "world");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str("mississippi");

    // VERIFY
    assert(str == "mississippi");
  }
  
  std::cout<< "Done testing Character Array constructor" <<std::endl;

}
