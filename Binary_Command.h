#ifndef _BINARY_COMMAND_H_
#define _BINARY_COMMAND_H_

class Binary_Command : public Expr_Command
{
public:
    virtual bool execute(Stack<int>& stack);
    virtual int eval (int x, int y) = 0;
};

#endif