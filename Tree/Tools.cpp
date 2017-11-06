//
// Created by monteth on 11/1/17.
//

#include "Tools.h"

bool Tools::isInt(std::string inputString) {
    if (inputString[0] != '-' && (inputString[0] < '0' || inputString[0] > '9')) return false;
    for (int i = 1; i < inputString.length(); i++) {
        if (inputString[i] < '0' || inputString[i] > '9') return false;
    }
    return true;
}

bool Tools::isOperator(std::string inputString) {
    bool result = false;
    if (inputString == "+" ||
        inputString == "-" ||
        inputString == "*" ||
        inputString == "/" ||
        inputString == "sin" ||
        inputString == "cos"){
        result = true;
    }
    return result;
}

int Tools::getQuantOfChildren(std::string inputString) {
    int result;
    if (isOperator(inputString)){
        if (inputString == "+"
            || inputString == "-"
            || inputString == "*"
            || inputString == "/"){
            result = 2;
        }else if (inputString == "sin"
                  || inputString == "cos"){
            result = 1;
        }
    } else result = 0;

    return result;
}

bool Tools::isVariable(std::string inputString) {
    bool isVar = true;
    if (!Tools::isInt(inputString) && !Tools::isOperator(inputString)) {
        for (char checkingChar : inputString) {
            if (!isCapitalLetter(checkingChar) && !isSmallLetter(checkingChar) && !isDigit(checkingChar)) {
                isVar = false;
            }
        }
    }else isVar = false;
    return isVar;
}

bool Tools::isCapitalLetter(char checkingSign) {
    return checkingSign >= 'A' && checkingSign <= 'Z';
}

bool Tools::isSmallLetter(char checkingSign) {
    return checkingSign >= 'a' && checkingSign <= 'z';
}

bool Tools::isDigit(char checkingSign) {
    return checkingSign >= '0' && checkingSign <= '9';
}
