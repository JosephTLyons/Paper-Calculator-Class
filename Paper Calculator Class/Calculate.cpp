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
    advancedClear();
}

/**************************************************/

void Calculate::basicClear()
{
    total          = 0;
    operandOne     = 0;
    operandTwo     = 0;
}

// Used by constructor and when holding down the clear button for 3+ seconds
void Calculate::advancedClear()
{
    basicClear();
    
    storageA       = 0;
    storageB       = 0;
    operatorChosen = 0;
}

void Calculate::performCalculation()
{
    switch (operatorChosen)
    {
        case addition:
            total = operandOne + operandTwo;
            break;
        case subtraction:
            total = operandOne - operandTwo;
            break;
        case multiplication:
            total = operandOne * operandTwo;
            break;
        case division:
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

void Calculate::setOperandOne(const double &input)
{
    operandOne = input;
}

void Calculate::setOperandTwo(const double &input)
{
    operandTwo = input;
}

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
