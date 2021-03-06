//  Stack class test program
//
//  Tests: XXX
//

#include "stack.hpp"
#include <cassert>
#include <iostream>
#include #include "../string/string.hpp"
//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    stack<int>  test;

    test.~stack();
    
    // VERIFY
    assert(test.empty() == true);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    stack<int>  test;

    test.push(2);

    test.~stack();

    // VERIFY
    assert(test.empty() == true);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    stack<int>  test;

    test.push(12);
    test.push(32);
    
    test.~stack();

    // VERIFY
    assert(test.empty() == true);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    stack<char>  test;

    test.push('a');
 
    test.~stack();

    // VERIFY
    assert(test.empty() == true);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    stack<char>  test;

    test.push('a');
    test.push('c');

    test.~stack();

    // VERIFY
    assert(test.empty() == true);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    stack<char>  test;

    test.push('x');
    test.push('y');
    test.push('z');

    test.~stack();

    // VERIFY
    assert(test.empty() == true);
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    stack<String>  test;

    test.push("abc");
    

    test.~stack();

    // VERIFY
    assert(test.empty() == true);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    stack<String>  test;

    test.push("abc");
    test.push("xyz");

    test.~stack();

    // VERIFY
    assert(test.empty() == true);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    stack<String>  test;

    test.push("jkls");
    test.push("asfs");
    test.push("gasa"

    test.~stack();

    // VERIFY
    assert(test.empty() == true);
  }












  // ADD ADDITIONAL TESTS AS NECESSARY

  std::cout << "Done testing Deconstructor." << std::endl;

}
