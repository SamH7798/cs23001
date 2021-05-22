// bigint Test Program
//
// Tests:  multiply, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(1);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 1);
        assert(right  == 0);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(1);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 1);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(123);
        bigint right(56);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  123);
        assert(right  ==   56);
        assert(result == 6888);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(65);
        bigint right(321);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==    65);
        assert(right  ==   321);
        assert(result == 20865);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(9999);
        bigint right(2);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  9999);
        assert(right  ==     2);
        assert(result == 19998);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(2);
        bigint right(999999);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==       2);
        assert(right  ==  999999);
        assert(result == 1999998);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(99);
        bigint right(99);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   ==  99);
        assert(right  ==  99);
        assert(result ==  9801);
    }


    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("2222");
        bigint right("888888888888888888888888888888888888");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "2222");
        assert(right  == "888888888888888888888888888888888888");
        assert(result == "1975111111111111111111111111111111109136");
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("777777777777777777777777777777777777777777777");
        bigint right("333333");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "777777777777777777777777777777777777777777777");
        assert(right  == "333333");
        assert(result == "259258999999999999999999999999999999999999999740741");
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("111111111111111111111111111111111111111111");
        bigint right("999999999999999999999999999999999999999999");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "111111111111111111111111111111111111111111");
        assert(right  == "999999999999999999999999999999999999999999");
        assert(result == "111111111111111111111111111111111111111110888888888888888888888888888888888888888889");
    }
    
    //Add test cases as needed.
    //Add 12 additonal test cases
 
    {
      //1).
      // Setup fixture
      bigint left("88");
      bigint right("9999999");
      bigint result;

      // Test
      result = left * right;

      // Verify
      assert(left   == "88");
      assert(right  == "9999999");
      assert(result == "879999912");




    }
    //-----------------------------------------------------------    
    {
      // 2).
      // Setup fixture
      bigint left("89345672");
      bigint right("56");
      bigint result;

      // Test
      result = left * right;

      // Verify
      assert(left   == "89345672");
      assert(right  == "56");
      assert(result == "5003357632");




    }
    //-----------------------------------------------------------
    {
      // 3).
      // Setup fixture
      bigint left("1287349");
      bigint right("789");
      bigint result;

      // Test
      result = left * right;

      // Verify
      assert(left   == "1287349");
      assert(right  == "789");
      assert(result == "1015718361");


    }
    //-----------------------------------------------------------
    {    
      // 4).
      // Setup fixture
      bigint left("65247");
      bigint right("98173");
      bigint result;

      // Test
      result = left * right;

      // Verify
      assert(left   == "65247");
      assert(right  == "98173");
      assert(result == "6405493731");
    }
    //-----------------------------------------------------------
    {
      // 5).
      // Setup fixture
      bigint left("23879");
      bigint right("6783");
      bigint result;

      // Test
      result = left * right;

      // Verify
      assert(left   == "23879");
      assert(right  == "6783");
      assert(result == "161971257");

    }
    //-----------------------------------------------------------
    {
      // 6).
      // Setup fixture
      bigint left("89");
      bigint right("99998989");
      bigint result;

      // Test
      result = left * right;

      // Verify
      assert(left   == "89");
      assert(right  == "99998989");
      assert(result == "8899910021");

    }
    //-----------------------------------------------------------
    {
      // 7).
      // Setup fixture
      bigint left("47890");
      bigint right("55254");
      bigint result;

      // Test
      result = left * right;

      // Verify
      assert(left   == "47890");
      assert(right  == "55254");
      assert(result == "2646114060");
    }
    //-----------------------------------------------------------
    {
      // 8).
      // Setup fixture
      bigint left("189231");
      bigint right("789");
      bigint result;

      // Test
      result = left * right;

      // Verify
      assert(left   == "189231");
      assert(right  == "789");
      assert(result == "149303259");
    }
    //-----------------------------------------------------------
    {
      // 9).
      // Setup fixture
      bigint left("778324");
      bigint right("2345");
      bigint result;

      // Test
      result = left * right;

      // Verify
      assert(left   == "778324");
      assert(right  == "2345");
      assert(result == "1825169780");

    }
    //-----------------------------------------------------------
    {
      // 10).
      // Setup fixture
      bigint left("89274");
      bigint right("31425");
      bigint result;

      // Test
      result = left * right;

      // Verify
      assert(left   == "89274");
      assert(right  == "31425");
      assert(result == "2805435450");
    }
    //-----------------------------------------------------------
    {
      // 11).
      // Setup fixture
      bigint left("36789");
      bigint right("98379");
      bigint result;

      // Test
      result = left * right;

      // Verify
      assert(left   == "36789");
      assert(right  == "98379");
      assert(result == "3619265031");
    }
    //-----------------------------------------------------------
    {
      // 12).
      // Setup fixture
      bigint left("9999");
      bigint right("99999");
      bigint result;

      // Test
      result = left * right;

      // Verify
      assert(left   == "9999");
      assert(right  == "99999");
      assert(result == "999890001");

    }

   std::cout << "Done testing multiply" << std::endl;
}
