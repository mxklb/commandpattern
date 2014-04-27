#ifndef ALGORITHMHEXCONVERT_H
#define ALGORITHMHEXCONVERT_H

#include "algorithmInterface.h"

#include <iostream>
#include <sstream>

class hex_converter : public algorithmInterface
{
public:
    std::string execute(int i) {
        std::stringstream ss;
        ss << std::hex << i;
        return ss.str();
    }
    ~hex_converter(){std::cout << "hex_dtor" << std::endl;}
};

#endif // ALGORITHMHEXCONVERT_H
