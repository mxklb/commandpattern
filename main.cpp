#include <iostream>
#include "commandsDealer.h"

using namespace std;

int main()
{
    int num = 10;

    commandsDealer commands;
    //algorithmInterface* algorithm = command.getAlgorithm( "DEC" );

    cout << "Result (dec): " << commands.getAlgorithm( "DEC" )->execute( num ) << endl;
    cout << "Result (bin): " << commands.getAlgorithm( "BIN" )->execute( num ) << endl;
    cout << "Result (hex): " << commands.getAlgorithm( "HEX" )->execute( num ) << endl;
    cout << "Result (oct): " << commands.getAlgorithm( "OCT" )->execute( num ) << endl;
    cout << "Result (bad): " << commands.getAlgorithm( "BAD" )->execute( num ) << endl;
}
