#ifndef _EXPR_COMMAND_H_
#define _EXPR_COMMAND_H_

#include "Stack.h"

class Expr_Command
{
public:
    virtual bool execute(Stack <int> & stack) = 0;
    virtual int precedence() = 0;
};

#endif