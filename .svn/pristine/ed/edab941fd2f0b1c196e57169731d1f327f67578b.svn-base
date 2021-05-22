//==============================================================================
// Basics for openning a file for milestone 2 of Project 1.
//
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in("data1-1.txt");    // Define stream for input
    if(!in) {                           // Make sure it opened correctly.
        std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
        exit(1);
    }


    bigint b1;
    bigint b2;

    while(in >> b1 && in >> b2){
      std::cout << "First bigint!: " << b1 << std::endl;
      std::cout << "Second bigint!: " << b2 << std::endl;

      bigint sum = b1 + b2;
      
      std::cout<< "Sum of bigints!:  "<< sum << std::endl;
      
    }
    
    //Until end of file
       //Read two bigints
       //Print them out
       //Add them together
       //Print out results
 
    in.close();
    return 0;
}

