#ifndef ALGORITHMBINCONVERT_H
#define ALGORITHMBINCONVERT_H

#include "algorithmInterface.h"

#include <iostream>
#include <limits.h>
#include <bitset>
#include <sstream>

class bin_converter : public algorithmInterface
{
public:
    std::string execute(int i) {
        std::bitset< sizeof(i) * CHAR_BIT > bits(i);
        std::stringstream ss;
        ss << bits;
        return ss.str();
    }
    ~bin_converter(){std::cout << "bin_dtor" << std::endl;}
};

#endif // ALGORITHMBINCONVERT_H
