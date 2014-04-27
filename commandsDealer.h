#ifndef COMMANDSDEALER_H
#define COMMANDSDEALER_H

#include <map>
#include <iostream>

#include "algorithmInterface.h"
#include "algorithmContainer.h"

class commandsDealer
{
public:
    commandsDealer() {
        algorithms = new algorithmContainer();
    }

    ~commandsDealer() {
        delete algorithms;
    }

    // Return algorithm of choise or the default algorithm
    algorithmInterface* getAlgorithm(std::string algorithID) {
        std::map<std::string, algorithmInterface*>::const_iterator iter;
        iter = algorithms->container.find( algorithID );
        if( iter != algorithms->container.end() )
            return iter->second;
        else{
            std::cout << "Warning: Algorithm identifier " << algorithID << " is invalid!" << std::endl;
            iter = algorithms->container.find( commandsDealer::defaultAlgorithmID );
            return iter->second;
        }
    }

private:
    algorithmContainer* algorithms;
    static const std::string defaultAlgorithmID;
};

const std::string commandsDealer::defaultAlgorithmID = "DEC";

#endif // COMMANDSDEALER_H
