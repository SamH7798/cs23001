//  Stack class test program
//
//  Tests: XXX
//

#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<int> test;
    stack<int> test2;
    
    // TEST
    test.push(7);
    
    test2 = test;

    // VERIFY
    assert(test.empty() == false);
    assert(test.top() == 7);

    assert(test2.empty() == false);
    assert(test2.top() == 7);
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<int> test;
    stack<int> test2;

    // TEST
    test.push(6464);
    test.push(435);
    
    test2 = test;

    // VERIFY
    assert(test.empty() == false);
    assert(test.top() == 435);

    assert(test2.empty() == false);
    assert(test2.top() == 435);
      }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<char> test;
    stack<char> test2;

    // TEST
    test.push('a');

    test2 = test;

    // VERIFY
    assert(test.empty() == false);
    assert(test.top() == 'a');

    assert(test2.empty() == false);
    assert(test2.top() == 'a');
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<char> test;
    stack<char> test2;

    // TEST
    test.push('w');
    test.push('q');

    test2 = test;

    // VERIFY
    assert(test.empty() == false);
    assert(test.top() == 'q');
    assert(test2.empty() == false);
    assert(test2.top() == 'q');
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<int> test;
    stack<int> test2;

    // TEST
    test.push(2432);
    test.push(3532);

    test2 = test;

    // VERIFY
    assert(test.empty() == false);
    assert(test.top() == 3532);

    assert(test2.empty() == false);
    assert(test2.top() == 3532);
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<char> test;
    stack<char> test2;

    // TEST
    test.push('x');
    test.push('s');
    
    test2 = test;

    // VERIFY
    assert(test.empty() == false);
    assert(test.top() == 's');

    assert(test2.empty() == false);
    assert(test2.top() == 's');
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<String> test;
    stack<String> test2;

    // TEST
    test.push("string");

    test2 = test;

    // VERIFY
    assert(test.empty() == false);
    assert(test.top() == "string");

    assert(test2.empty() == false);
    assert(test2.top() == "string");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<String> test;
    stack<String> test2;

    // TEST
    test.push("hello");
    test.push("world");

    test2 = test;

    // VERIFY
    assert(test.empty() == false);
    assert(test.top() == "world");

    assert(test2.empty() == false);
    assert(test2.top() == "world");
  }


  // ADD ADDITIONAL TESTS AS NECESSARY

  std::cout << "Done testing assign" << std::endl;
}
