#include <iostream>
#include <string_view>

class Base
{
public:
    VirtualTable* __vptr;
    virtual void function1() {};
    virtual void function2() {};
};

class D1: public Base
{
public:
    void function1() override {};
};

class D2: public Base
{
public:
    void function2() override {};
};

int main()
{
    Base b {};
    Base* bPtr = &b;
    bPtr->function1();

    return 0;
}
