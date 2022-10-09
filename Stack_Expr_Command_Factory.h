#ifndef _STACK_EXPR_COMMAND_FACTORY_H_
#define _STACK_EXPR_COMMAND_FACTORY_H_

class Stack_Expr_Command_Factory : public Expr_Command_Factory
{
public:
    Stack_Expr_Command_Factory(Stack <int> & stack);
    virtual Number_Command* create_number_command(int num);
    virtual Add_Command* create_add_command(void);
    virtual Subtract_Command* create_subtract_command(void);
    virtual Division_Command* create_division_command(void);
    virtual Modulus_Command* create_modulus_command(void);
    
private:
    Stack <int> & stack;
};

#endif