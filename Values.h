//
// Created by monteth on 11/1/17.
//

#ifndef ZMPO_3_VALUES_H
#define ZMPO_3_VALUES_H

#include <string>

const std::string sEND = "end";
const std::string sHELP = "help";
const std::string sEnter = "enter";
const std::string sPRINT = "print";
const std::string sCOMP = "comp";
const std::string sEXIT = "exit";
const std::string sVARS = "vars";
const std::string sJOIN = "join";
const std::string sREQUEST_RESPONSE_LITTLE = "Too little arguments. Trying to fix it by filling in empty spaces with value \"1\".";
const std::string sREQUEST_RESPONSE_OK = "The expression is OK. Tree is ready.";
const std::string sREQUEST_RESPONSE_MUCH = "You entered too much arguments. Unnecessary expressions will be skipped.";
const std::string sTHIS_IS_YOUR_EXPRESSION = "Processed expression is: ";
const std::string sEXP_RESULT = "Result of expression is = ";

const std::string  HELP_TO_PRINT =
        "List of possible commands and it's parameters:\nenter <prefix expression> - request an expression\nprint - show prefix expression\nvars - show variables\ncomp <val0> <val1> ... <valn-1> - request to calculate an expression replacing each variable by corresponding values\nhelp - show list of commands\njoin <prefix expression> - join an expression to existing expression\nexit - shout down program\n";


#endif //ZMPO_3_VALUES_H
