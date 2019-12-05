//
//  LogInterface.cpp
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

namespace Core {
class logInterface {
public:
    virtual void log(std::string str)=0;
    virtual void write()=0;
    virtual void clear()=0;
};
}
