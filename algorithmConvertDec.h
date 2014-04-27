#ifndef ALGORITHMDECCONVERT_H
#define ALGORITHMDECCONVERT_H

#include "algorithmInterface.h"

#include <iostream>
#include <sstream>

class dec_converter : public algorithmInterface
{
public:
    std::string execute(int i) {
        std::stringstream ss;
        ss << std::dec << i;
        return ss.str();
    }
    ~dec_converter(){std::cout << "dec_dtor" << std::endl;}
};

#endif // ALGORITHMDECCONVERT_H
