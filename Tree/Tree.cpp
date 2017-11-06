//

#include <iostream>
#include "Tree.h"

// Created by monteth on 11/1/17.
//

/*
Tree::Tree() {

}

Tree::Tree(Tree &otherTree) {
    root = Node(otherTree.root);
    updateVariables();
}*/

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

double Tree::getResult(int *varValues) {
    updateVariables();
    return root->getResult(varValues, (*variables), varLength);
}



void Tree::updateVariables() {
    this->root->updateVariables(variables,varLength);
}

void Tree::join(const std::string *inputArray) {
    int actualIndex = 1;
    root->join(inputArray, actualIndex, static_cast<int>(inputArray->length()));
}

void Tree::del() {
    delete []variables;
    root->del();
}

/*
Tree Tree::operator=(const Tree &other) {
    Tree tree;
    std::string *prefix = other.getPrefix();
    tree.requestTree(other.getVariables(), )
    return tree;
}

*/
