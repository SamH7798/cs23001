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
  
    // TEST
    test.push(3);

    // VERIFY
    assert(test.empty() == false);
    assert(test.top() == 3);
  
  }
  {
  //------------------------------------------------------
  // SETUP FIXTURE
  stack<int> test;

  // TEST
  test.push(3);
  test.pop();
  
  // VERIFY
  assert(test.empty() == true);

  }
  {
//------------------------------------------------------
// SETUP FIXTURE
stack<char> test;

// TEST
test.push('a');
test.pop();

// VERIFY
assert(test.empty() == true);

  }
  {
//------------------------------------------------------
// SETUP FIXTURE
stack<int> test;

// TEST
test.push(33);
test.push(42);
test.push(5);

// VERIFY
assert(test.empty() == false);
assert(test.top() == 5);
  }
  {
//------------------------------------------------------
// SETUP FIXTURE
stack<char> test;

// TEST
 test.push('a');
 test.push('b');
 test.push('c');

// VERIFY
assert(test.empty() == false);
assert(test.top() == 'c');
  }
  {
//------------------------------------------------------
// SETUP FIXTURE
stack<String> test;

// TEST
test.push("hello");
 test.pop();
// VERIFY
assert(test.empty() == true);

  }
  {
  //------------------------------------------------------
  // SETUP FIXTURE
  stack<String> test;

  // TEST
  test.push("hkla");
  test.pop();
  // VERIFY
  assert(test.empty() == true);
  
  }
  {
  //------------------------------------------------------
  // SETUP FIXTURE
  stack<String> test;

  // TEST
  test.push("abcd");
  test.push("jklfsf");

  test.pop();
  // VERIFY
  assert(test.empty() != true);
  
  }



  // ADD ADDITIONAL TESTS AS NECESSARY

  std::cout << "Done testing push_pop" << std::endl;
}

