#include "calculator.h"
#include <stdexcept>
double calculate(double x,double y,unsigned char op)
{
    double result;
    if (op == DIV && y == 0)
    {
        throw std::invalid_argument("Cannot divide by zero!"); // Standard C++ exception
    }
    switch(op)
    {
    case ADD:
        {
            result = x+y;
        }
        break;
    case SUB:
        {
            result = x-y;
        }
        break;
    case MUL:
        {
            result = x*y;
        }
        break;
    case DIV:
        {
            result= x/y;
        }
        break;
    }
    return result;
}
