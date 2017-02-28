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
    total     = 0;
    storageA  = 0;
    storageB  = 0;
}

void Calculate::clear()
{
    total = 0;
}

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

void Calculate::setStorageA(const double &input)
{
    storageA = input;
}

void Calculate::setStorageB(const double &input)
{
    storageB = input;
}
