#ifndef ALGORITHMINTERFACE_H
#define ALGORITHMINTERFACE_H

// Interface (Base) class
class algorithmInterface
{
public:
    virtual std::string execute(int) = 0;
    virtual ~algorithmInterface() {}
};

#endif // ALGORITHMINTERFACE_H
