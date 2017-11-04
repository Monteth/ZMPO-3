//
// Created by monteth on 11/1/17.
//

#include "Tree.h"

void Tree::requestTree(const std::string *inputArray, int maxIndex) {
    int actualIndex = 1;
    this->root = new Node(inputArray, actualIndex, maxIndex);
    this->variables = new std::string*[0];
    this->varLength = 0;
}

std::string Tree::getVariables() {
    updateVariables();
    std::string result = "Variables: ";
    for (int i = 0; i < varLength; ++i) {
        result += (*variables)[i];
        if (i != varLength-1){
            result+=", ";
        }
    }
    return result;
}

std::string Tree::getPrefix() {
    return root->getPrefix();
}

double Tree::getResult(int *varValues, int arrayLength) {
    updateVariables();
    return root->getResult(varValues, (*variables), arrayLength);
}

void Tree::updateVariables() {
    this->root->updateVariables(variables,varLength);
}
