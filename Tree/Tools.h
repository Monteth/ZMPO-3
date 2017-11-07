//
// Created by monteth on 11/1/17.
//

#ifndef ZMPO_3_TOOLS_H
#define ZMPO_3_TOOLS_H


#include <string>

class Tools {
public:
    static bool isOperator(std::string inputString);
    static bool isVariable(std::string inputString);
    static bool isInt(std::string inputString);
    static int getQuantOfChildren(std::string inputString);
    static bool tabIsInt(std::string *array, int offset, int arrayLength);
    static int *strToIntArray(std::string *commandsArray, int startOffset, int arrayLength);

private:
    static bool isDigit(char checkingSign);
    static bool isSmallLetter(char checkingSign);
    static bool isCapitalLetter(char checkingSign);
};


#endif //ZMPO_3_TOOLS_H
