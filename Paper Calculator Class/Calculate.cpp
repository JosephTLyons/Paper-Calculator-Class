//
//  Calculate.cpp
//  Paper Calculator Class
//
//  Created by Joseph Lyons on 2/27/17.
//  Copyright © 2017 Joseph Lyons. All rights reserved.
//

#include "Calculate.hpp"

Calculate::Calculate()
{
    total          = 0;
    storageA       = 0;
    storageB       = 0;
    operandOne     = 0;
    operandTwo     = 0;
    
    operatorChosen = 0;
}

/**************************************************/

void Calculate::clear()
{
    total = 0;
}

void Calculate::performCalculation()
{
    switch (operatorChosen)
    {
        case 1:
            total = operandOne + operandTwo;
            break;
        case 2:
            total = operandOne - operandTwo;
            break;
        case 3:
            total = operandOne * operandTwo;
            break;
        case 4:
            total = operandOne / operandTwo;
            break;
            // Do nothing
        default:
            break;
    }
}

/**************************************************/

void Calculate::add(const double &input)
{
    total += input;
}

void Calculate::subtract(const double &input)
{
    total -= input;
}

void Calculate::multiply(const double &input)
{
    total *= input;
}

void Calculate::divide(const double &input)
{
    total /= input;
}

/**************************************************/

void Calculate::setStorageA(const double &input)
{
    storageA = input;
}

void Calculate::setStorageB(const double &input)
{
    storageB = input;
}

void Calculate::setOperationChosen(const int &input)
{
    operatorChosen = input;
}
