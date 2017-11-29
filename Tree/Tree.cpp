#include <iostream>
#include <queue>
#include "Tree.h"
#include "../Values.h"


Tree::Tree() {
    this->varLength=0;
    this->root= nullptr;
    this->variables = new std::string*[0];
}

Tree::~Tree() {
    del();
}

void Tree::del() {
    for (int i = 0; i < varLength; ++i) {
        delete variables[i];
    }
    delete[] variables;
    delete root;
}

int Tree::requestTree(const std::string *inputArray, int maxIndex, bool &isInvalidWord) {
    del();
    int actualIndex = 1;
    this->root = new Node(inputArray, actualIndex, maxIndex, isInvalidWord);
    this->variables = new std::string*[0];
    this->varLength = 0;
    int result = 0;
    if (actualIndex < maxIndex) result = 1;
    if (actualIndex > maxIndex) result = -1;
    return result;
}

std::string Tree::getVariables() {
    updateVariables();
    std::string result = sVARS_PREP;
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
    delete []variables;
    varLength = 0;
    variables = new std::string*[0];
    this->root->updateVariables(variables,varLength);
}

int Tree::join(const std::string *inputArray, int arrayLength, bool &isInvalidWord) {
    int actualIndex = 1;
    Node *smallRoot = new Node(inputArray, actualIndex, arrayLength, isInvalidWord);
    (*root) = (*root) + (*smallRoot);
    int result = 0;
    if (actualIndex < arrayLength) result = 1;
    if (actualIndex > arrayLength) result = -1;
    return result;

}

int Tree::getQuantOfVal() {
    updateVariables();
    return varLength;
}

std::string Tree::getLevels() {

    int depth = 0;
    this->root->countDepth(depth, 0);
    std::string result = "";
    for (int j = 0; j <= depth; ++j) {
        result += root->getLevel(j) + "\n";
    }
    return result;
}
