#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("helloworld");

   

    // VERIFY
    
    assert(str.substr(0,4) == "hello");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("kentstate");



      // VERIFY

    assert(str.substr(1,3) == "ent");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("computer");



    // VERIFY

    assert(str.substr(3,5) == "put");
	       
  }






std::cout<< "Done testing substring" <<std::endl;

  }
