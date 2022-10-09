#ifndef _EXPR_COMMAND_FACTORY_H_
#define _EXPR_COMMAND_FACTORY_H_

#include <iostream>
#include "Number_Command.h"
#include "Add_Command.h"
#include "Subtract_Command.h"
#include "Division_Command.h"
#include "Modulus_Command.h"

class Expr_Command_Factory 
{
public:
    virtual ~Expr_Command_Factory(void) = 0;
    virtual Number_Command* create_number_command(int num) = 0;
    virtual Add_Command* create_add_command(void) = 0;
    virtual Subtract_Command* create_subtract_command(void) = 0;
    virtual Division_Command* create_division_command(void) = 0;
    virtual Modulus_Command* create_modulus_command(void) = 0;

private:
    Expr_Command_Factory(const Expr_Command_Factory &);
    const Expr_Command_Factory & operator = (const Expr_Command_Factory &)
};

#endif