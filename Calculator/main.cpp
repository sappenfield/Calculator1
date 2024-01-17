//
//  main.cpp
//  Calculator
//
//  Created by AJ Sappenfield on 1/16/24.
//

#include <iostream>
#include "operations.hpp"


int main(){
    
    double x = 0.0;
    double y = 0.0;
    double results = 0.0;
    char oper = '+';
    
    std::cout << "Calculator Console Application" << std::endl << std::endl;
    std::cout << " Please enter the operation to preform. Format: a+b | a-b | a*b | a/b " << std::endl;
    
    operations c;
    while(true) {
        std::cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            std::cout << "Attempted to divide by zero." << std::endl;
            continue;
        }
        else
        {
            results  = c.Calculate(x, oper, y);
        }
        std::cout << "Results " << "of " << x << oper << y << "is: " << results << std::endl;
    }


    return 0;
}
