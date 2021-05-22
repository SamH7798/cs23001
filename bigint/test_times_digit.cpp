// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);  //Will FAIL, fix and add test cases.
    }


    //Add test cases as needed.
    //-------------------------------------------------------   
    {
      // 1).
      // Setup fixture
      bigint bi(4);

      // Test
      bi = bi.timesDigit(3);

      // Verify
      assert(bi == 12);

    } 
    //-------------------------------------------------------
    {
      // 2).
      // Setup fixture
      bigint bi(5);

      // Test
      bi = bi.timesDigit(2);

      // Verify
      assert(bi == 10);

    }
    //-------------------------------------------------------
    {
      // 3).
      // Setup fixture
      bigint bi(9);

      // Test
      bi = bi.timesDigit(3);

      // Verify
      assert(bi == 27);

    }
    //-------------------------------------------------------
    {
      // 4).
      // Setup fixture
      bigint bi(2);

      // Test
      bi = bi.timesDigit(4);

      // Verify
      assert(bi == 8);

    }
    //-------------------------------------------------------
    {
      // 5).
      // Setup fixture
      bigint bi(1);

      // Test
      bi = bi.timesDigit(9);

      // Verify
      assert(bi == 9);

    }
    //-------------------------------------------------------
    {
      // 6).
      // Setup fixture
      bigint bi(8);

      // Test
      bi = bi.timesDigit(5);

      // Verify
      assert(bi == 40);

    }
    //-------------------------------------------------------
    {
      // 7).
      // Setup fixture
      bigint bi(6);

      // Test
      bi = bi.timesDigit(4);

      // Verify
      assert(bi == 24);

    }

    //-------------------------------------------------------
    {
      // 8).
      // Setup fixture
      bigint bi(7);

      // Test
      bi = bi.timesDigit(4);

      // Verify
      assert(bi == 28);

    }
    //-------------------------------------------------------
    {
      // 9).
      // Setup fixture
      bigint bi(6);

      // Test
      bi = bi.timesDigit(8);

      // Verify
      assert(bi == 48);

    }
    //-------------------------------------------------------
    {
      // 10).
      // Setup fixture
      bigint bi(4);

      // Test
      bi = bi.timesDigit(4);

      // Verify
      assert(bi == 16);

    }
    //-------------------------------------------------------
    {
      // 11).
      // Setup fixture
      bigint bi(5);

      // Test
      bi = bi.timesDigit(3);

      // Verify
      assert(bi == 15);

    }
    //-------------------------------------------------------
    {
      // 12).
      // Setup fixture
      bigint bi(9);

      // Test
      bi = bi.timesDigit(9);

      // Verify
      assert(bi == 81);

    }

   std::cout << "Done testing bigint * digit! " << std::endl;

}
