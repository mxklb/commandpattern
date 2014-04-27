#ifndef ALGORITHMOCTCONVERT_H
#define ALGORITHMOCTCONVERT_H

#include "algorithmInterface.h"

#include <iostream>
#include <sstream>

class oct_converter : public algorithmInterface
{
public:
    std::string execute(int i) {
        std::stringstream ss;
        ss << std::oct << i;
        return ss.str();
    }
    ~oct_converter(){std::cout << "oct_dtor" << std::endl;}
};

#endif // ALGORITHMOCTCONVERT_H
