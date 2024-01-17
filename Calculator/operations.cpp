//
//  operations.cpp
//  Calculator
//
//  Created by AJ Sappenfield on 1/16/24.
//

#include "operations.hpp"


double operations::Calculate(double x, char oper, double y)
{
    
    switch(oper)
    {
        case'+':
            return x + y;
        case'-':
            return x - y;
        case'*':
            return x * y;
        case'/':
            return x / y;
        default:
            return 0.0;
    }
}

