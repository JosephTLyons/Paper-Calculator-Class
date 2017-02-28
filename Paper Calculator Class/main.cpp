#include <iostream>
#include "Calculate.hpp"

int main()
{
    Calculate calculate;
    
    calculate.add(15);
    calculate.multiply(10);
    calculate.subtract(1);
    calculate.divide(3);
    
    calculate.setStorageA(1938.53);
    calculate.setStorageA(214);
    calculate.clear();
    
    calculate.setOperationChosen(4);
    calculate.setOperandOne(9);
    calculate.setOperandTwo(4);
    calculate.performCalculation();
}
