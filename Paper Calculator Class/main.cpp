#include <iostream>
#include "Calculate.hpp"

int main()
{
    Calculate calculate;
    
//    calculate.add(15);
//    calculate.multiply(10);
//    calculate.subtract(1);
//    calculate.divide(3);
//    
//    calculate.setStorageA(1938.53);
//    calculate.setStorageB(214);
//    calculate.advancedClear();
//    
//    calculate.setOperationChosen(4);
//    calculate.setOperandOne(9);
//    calculate.setOperandTwo(4);
//    calculate.performCalculation();
    
    calculate.calculateNumberInput(5);
    calculate.calculateNumberInput(5);
    calculate.setDecimalPointFlag(true);
    calculate.calculateNumberInput(3);
}
