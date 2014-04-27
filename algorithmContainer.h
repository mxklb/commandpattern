#ifndef ALGORITHMCONTAINER_H
#define ALGORITHMCONTAINER_H

#include "algorithmConvertBin.h"
#include "algorithmConvertDec.h"
#include "algorithmConvertOct.h"
#include "algorithmConvertHex.h"

// Container class handling algorithm instances
class algorithmContainer
{
public:
    std::map<std::string, algorithmInterface*> container;

    algorithmContainer(){
        container.insert( std::make_pair( "DEC", new dec_converter ) );
        container.insert( std::make_pair( "BIN", new bin_converter ) );
        container.insert( std::make_pair( "OCT", new oct_converter ) );
        container.insert( std::make_pair( "HEX", new hex_converter ) );
    }

    ~algorithmContainer() {
        while( container.begin() != container.end() ) {
            delete container.begin()->second;
            container.erase( container.begin() );
        }
    }
};

#endif // ALGORITHMCONTAINER_H
