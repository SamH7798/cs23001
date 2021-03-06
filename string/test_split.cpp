#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("abc def");
    //std::vector<String>str2 {"abd", "def"};
    String str2 = "abc";
    String str3 = "def";

    // TEST
    std::vector<String> result = str.split(' ');
    
    // VERIFY
    assert(str == "abc def");
    assert(str2 == result[0]);
    assert(str3 == result[1]);
    
  }

     
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("asf-erw-e");
    //std::vector<String>str2 {"abd", "def"};
    String str2 = "asf";
    String str3 = "erw";
    String str4 = 'e';
    // TEST
    std::vector<String> result = str.split('-');

    // VERIFY
    assert(str == "asf-erw-e");
    assert(str2 == result[0]);
    assert(str3 == result[1]);
    assert(str4 == result[2]);
    
    
  }

	  





      std::cout<< "Done testing split" <<std::endl;
}
