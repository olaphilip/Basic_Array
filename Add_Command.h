#ifndef _ADD_COMMAND_H_
#define _ADD_COMMAND_H_

#include "Stack.h"
#include "Expr_Command.h"
#include "Binary_Command.h"

class Add_Command{
public:
    int eval(int x, int y);
};

#endif