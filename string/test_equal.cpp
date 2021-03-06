//  String class test program
//
//  Tests: XXX
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str1("hello");
	String  str2("hello");
        // TEST

        // VERIFY
        assert(str1 == str2);
      
    }

    {
        //------------------------------------------------------
      // SETUP FIXTURE
      String  str1("ohio");
      String  str2("ohio");
        // TEST

        // VERIFY
        assert(str1 == str2);

    }

    {
        //------------------------------------------------------
      // SETUP FIXTURE
      String  str1("COMPUTER");
      String  str2("COMPUTER");
        // TEST

        // VERIFY
        assert(str1 == str2);

    }

    {
        //------------------------------------------------------

      String  str1("JKL");
      String  str2("JKL");
        // TEST

        // VERIFY
        assert(str1 == str2);

    }
    

    {
        //------------------------------------------------------
      String  str1("TESTING");
      String  str2("TESTING");
        // TEST

        // VERIFY
        assert(str1 == str2);

    }

    

    // ADD ADDITIONAL TESTS AS NECESSARY

    std::cout << "Done testing equal." << std::endl;
}

