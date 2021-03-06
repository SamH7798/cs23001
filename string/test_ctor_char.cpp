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
    String  str('X');

    // VERIFY
    assert(str == 'X');
  }

  
    //------------------------------------------------------
        // SETUP FIXTURE
{
    // TEST
    String  str('d');

    // VERIFY
    assert(str == 'd');
  }
    
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str('E');

    // VERIFY
    assert(str == 'E');
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str('R');

    // VERIFY
    assert(str == 'R');
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str('T');

    // VERIFY
    assert(str == 'T');
  }
  
  std::cout<< "Done testing character constructor!" <<std::endl;

}
