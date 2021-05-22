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

    // TEST
    stack<int> test;
    test.push(123);
    
    stack<int> copy(test);

    // VERIFY
    assert(test.top() == copy.top());
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    stack<int> test;
    test.push(123);
    test.push(456);
    
    stack<int> copy(test);

    // VERIFY
    assert(test.top() == copy.top());
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    stack<char> test;
    test.push('q');

    stack<char> copy(test);

    // VERIFY
    assert(test.top() == copy.top());
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    stack<char> test;
    test.push('a');
    test.push('b');
    
    stack<char> copy(test);

    // VERIFY
    assert(test.top() == copy.top());
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    stack<char> test;
    test.push('h');
    test.push('w');
    test.push('!');

    stack<char> copy(test);

    // VERIFY
    assert(test.top() == copy.top());
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    stack<int> test;
    test.push(253253);
    test.push(4352);
    test.push(532152);
    test.push(4324);

    stack<int> copy(test);

    // VERIFY
    assert(test.top() == copy.top());
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    stack<int> test;
    test.push(123);
    test.push(35252);
    test.push(674532);
    test.push(3);
    
    stack<int> copy(test);

    // VERIFY
    assert(test.top() == copy.top());
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    stack<String> test;
    test.push("hello");
    test.push("world");

    stack<String> copy(test);

    // VERIFY
    assert(test.top() == copy.top());
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    stack<String> test;
    test.push("qwad");
    test.push("hjlkas");
    test.push("hfjkls");
    

    stack<String> copy(test);

    // VERIFY
    assert(test.top() == copy.top());
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    stack<String> test;
    test.push("hjkls");
    test.push("jkls");
    test.push("yuioe");
    test.push("nhgfr");

    stack<String> copy(test);

    // VERIFY
    assert(test.top() == copy.top());
  }

  // ADD ADDITIONAL TESTS AS NECESSARY

  std::cout << "Done testing Copy Constructor" << std::endl;

}
