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
        bi = bi.times10(2);

        // Verify
        assert(bi == 300);  //Wrong. Will FAIL, fix and add tests cases
    }
    
    //Add test cases as needed.
    //-----------------------------------------------------------------------
    {
      // 1).
      // Setup fixture
      bigint bi(6);

      // Test
      bi = bi.times10(5);

      // Verify
      assert(bi == "600000"); 

    }
    //-----------------------------------------------------------------------
    {
      // 2).
      // Setup fixture
      bigint bi(4);

      // Test
      bi = bi.times10(7);

      // Verify
      assert(bi == "40000000");

    }
    //-----------------------------------------------------------------------
    {
      // 3).
      // Setup fixture
      bigint bi(1);

      // Test
      bi = bi.times10(3);

      // Verify
      assert(bi == 1000);

    }
    //-----------------------------------------------------------------------
    {
      // 4).
      // Setup fixture
      bigint bi(2);

      // Test
      bi = bi.times10(9);

      // Verify
      assert(bi == "2000000000");

    }
    //-----------------------------------------------------------------------
    {
      // 5).
      // Setup fixture
      bigint bi(7);

      // Test
      bi = bi.times10(6);

      // Verify
      assert(bi == "7000000");

    }
    //-----------------------------------------------------------------------
    {
      // 6).
      // Setup fixture
      bigint bi(4);

      // Test
      bi = bi.times10(5);

      // Verify
      assert(bi == "400000");

    }
    //-----------------------------------------------------------------------
    {
      // 7).
      // Setup fixture
      bigint bi(9);

      // Test
      bi = bi.times10(8);

      // Verify
      assert(bi == "900000000");

    }
    //-----------------------------------------------------------------------
    {
      // 8).
      // Setup fixture
      bigint bi(34);

      // Test
      bi = bi.times10(6);

      // Verify
      assert(bi == "34000000");

    }
    //-----------------------------------------------------------------------
    {
      // 9).
      // Setup fixture
      bigint bi(57);

      // Test
      bi = bi.times10(4);

      // Verify
      assert(bi == "570000");
    }      //-----------------------------------------------------------------------
      {
	// 10).
	// Setup fixture
	bigint bi(82);

	// Test
	bi = bi.times10(7);

	// Verify
	assert(bi == "820000000");

      }
      //-----------------------------------------------------------------------
      {
	// 11).
	// Setup fixture
	bigint bi(62);

	// Test
	bi = bi.times10(2);

	// Verify
	assert(bi == 6200);

      }
      //-----------------------------------------------------------------------
      {
	// 12).
	// Setup fixture
	bigint bi(33);

	// Test
	bi = bi.times10(7);

	// Verify
	assert(bi == "330000000");

      }

    std::cout << "Done testing times_10" << std::endl;
}

