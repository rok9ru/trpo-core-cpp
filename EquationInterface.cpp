//
//  EquationInterface.cpp
//  aaa
//
//  Created by Mac on 23/10/2019.
//  Copyright © 2019 Mac. All rights reserved.
//


#include <iostream>
#include <sstream>
#include <cmath>
#include <vector>
#include <stdlib.h>
#include <exception>
#include <string>


using namespace std;
namespace Core {
    class EquationInterface {
public:
    vector <float> xcv;
        virtual vector<float> solve (float a, float b, float c) = 0;
    
};
}
