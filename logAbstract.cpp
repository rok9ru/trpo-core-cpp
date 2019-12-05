//
//  dfv.cpp
//  aaa
//
//  Created by Mac on 23/10/2019.
//  Copyright © 2019 Mac. All rights reserved.
//
#pragma once

#include <iostream>
#include <sstream>
#include <cmath>
#include <vector>
#include <stdlib.h>
#include <exception>
#include <string>
//#include "/Users/mac/Library/Autosave Information/aaa/core/logInterface.cpp"
//#include "/Users/mac/Library/Autosave Information/aaa/ryzhov/Log.cpp"
using namespace std;

namespace Core {
template<typename T>
class logAbstract {
protected: string str;
    vector <string> logs;
    logAbstract() {}
    logAbstract (const logAbstract&) = delete;
    logAbstract& operator = (logAbstract&) = delete;
public:
    //friend class ryzhov::Log;
    
    static T& getInstance() {
          static T* instance = new T();
        return *instance;
    }
    
    //virtual void _write() = 0;

};
}
// class Log : logAbstract<Log>

