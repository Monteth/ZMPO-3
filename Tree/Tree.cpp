#include <iostream>
#include "Tree.h"



Tree::Tree() {
    this->varLength=0;
    this->root= nullptr;
    this->variables = new std::string*[0];
}

Tree::~Tree() {
    for (int i = 0; i < varLength; ++i) {
        delete variables[i];
    }
    delete[] variables;
    delete root;
}

int Tree::requestTree(const std::string *inputArray, int maxIndex) {
    int actualIndex = 1;
    this->root = new Node(inputArray, actualIndex, maxIndex);
    this->variables = new std::string*[0];
    this->varLength = 0;
    int result = 0;
    if (actualIndex < maxIndex) result = 1;
    if (actualIndex > maxIndex) result = -1;
    return result;
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

double Tree::getResult(int *varValues) {
    updateVariables();
    return root->getResult(varValues, (*variables), varLength);
}

void Tree::updateVariables() {
    this->root->updateVariables(variables,varLength);
}

int Tree::join(const std::string *inputArray, int arrayLength) {
    int actualIndex = 1;
    root->join(inputArray, actualIndex, arrayLength);
    int result = 0;
    if (actualIndex < arrayLength) result = 1;
    if (actualIndex > arrayLength) result = -1;
    return result;

}

int Tree::getQuantOfVal() {
    updateVariables();
    return varLength;
}
