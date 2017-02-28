//
//  Calculate.hpp
//  Paper Calculator Class
//
//  Created by Joseph Lyons on 2/27/17.
//  Copyright © 2017 Joseph Lyons. All rights reserved.
//

#ifndef Calculate_hpp
#define Calculate_hpp

#include <stdio.h>

class Calculate
{
private:
    
    double total;
    double storageA;
    double storageB;
    
public:
    
    Calculate();
    
    void clear();
    
    void add(const double &input);
    void subtract(const double &input);
    void multiply(const double &input);
    void divide(const double &input);
    
    void setStorageA(const double &input);
    void setStorageB(const double &input);
};

#endif /* Calculate_hpp */
