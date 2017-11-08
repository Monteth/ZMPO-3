//

#include <iostream>
#include <cmath>
#include "Node.h"
#include "Tools.h"

Node::Node(Node &otherNode) {
    this->value = otherNode.value;
    reqChildQuant = otherNode.reqChildQuant;
    children = new Node*[reqChildQuant];
    for (int i = 0; i < reqChildQuant; ++i) {
        children[i] = new Node((*otherNode.children[i]));
    }
    visited = false;
}

Node::Node() {
    children = new Node*[0];
    value = "";
    reqChildQuant = 0;
    visited = false;
}

Node::Node(const std::string *inputArray, int &actualIndex, int maxIndex, bool &isInvalidWord) {
    if (actualIndex >= maxIndex){
        this->value = "1";
        reqChildQuant = 0;
        actualIndex++;
    } else{
        while (!(Tools::isInt(inputArray[actualIndex]) || Tools::isVariable(inputArray[actualIndex]) || Tools::isOperator(inputArray[actualIndex])) &&  (actualIndex < maxIndex)){
            actualIndex++;
            isInvalidWord = true;
        }
        this->value = inputArray[actualIndex];
        reqChildQuant = Tools::getQuantOfChildren(value);
        children = new Node*[reqChildQuant];
        actualIndex++;
        for (int i = 0; i < reqChildQuant; ++i) {
            children[i] = new Node(inputArray, actualIndex, maxIndex, isInvalidWord);
        }
    }
    visited = false;
}

Node::~Node() {
    for (int i = 0; i < reqChildQuant; ++i) {
        delete children[i];
    }
    delete []children;

}

void Node::updateVariables(std::string **variables, int &varLength) {
    if (Tools::isVariable(this->value)){
        bool alreadyExists = false;
        for (int i = 0; i < varLength && !alreadyExists; ++i) {
            if ((*variables)[i] == this->value){
                alreadyExists = true;
            }
        }
        if (!alreadyExists){
            std::string *resized = new std::string[varLength+1];
            for (int i = 0; i < varLength; ++i) {
                resized[i] = (*variables)[i];
            }
            resized[varLength] = this->value;
            varLength++;
            delete []*variables;
            *variables = resized;
        }
    }

    for (int i = 0; i < reqChildQuant; ++i) {
        children[i]->updateVariables(variables, varLength);
    }
}

std::string Node::getPrefix(){
    std::string result = "";
    result+= this->value + " ";
    for (int i = 0; i < reqChildQuant; ++i) {
        result+=children[i]->getPrefix();
    }
    return result;
}

double Node::getResult(int *varValues, std::string *varNames, int arrayLength) {
    double result = 0;
    if (Tools::isInt(this->value)){
        result = stof(this->value);
    } else if(Tools::isVariable(this->value)){
        bool found = false;
        for (int i = 0; i < arrayLength && !found; ++i) {
            if (varNames[i] == this->value){
                result = varValues[i];
                found = true;
            }
        }
    } else if(Tools::isOperator(this->value)){
        if (this->value == "+"){
            result = children[0]->getResult(varValues, varNames, arrayLength) + children[1]->getResult(varValues, varNames, arrayLength);
        }else if (this->value == "-"){
            result = children[0]->getResult(varValues, varNames, arrayLength) - children[1]->getResult(varValues, varNames, arrayLength);
        }else if (this->value == "*"){
            result = children[0]->getResult(varValues, varNames, arrayLength) * children[1]->getResult(varValues, varNames, arrayLength);
        }else if (this->value == "/"){
            result = children[0]->getResult(varValues, varNames, arrayLength) / children[1]->getResult(varValues, varNames, arrayLength);
        }else if (this->value == "sin"){
            result = sin(children[0]->getResult(varValues, varNames, arrayLength));
        }else if (this->value == "cos"){
            result = cos(children[0]->getResult(varValues, varNames, arrayLength));
        }
    }
    return result;
}

void Node::join(const std::string *inputArray, int &actualIndex, int maxIndex, bool &isInvalidWord) {
    if (Tools::isVariable(this->value) || Tools::isInt(this->value)){
        this->value = inputArray[actualIndex];
        reqChildQuant = Tools::getQuantOfChildren(value);
        children = new Node*[reqChildQuant];
        actualIndex++;
        for (int i = 0; i < reqChildQuant; ++i) {
            children[i] = new Node(inputArray, actualIndex, maxIndex, isInvalidWord);
        }
    } else {
            children[0]->join(inputArray, actualIndex, maxIndex, isInvalidWord);
    }
}

void Node::join(Node &node) {
    if (this->reqChildQuant > 0){
        if (Tools::isVariable(children[0]->value) || Tools::isInt(children[0]->value)){
            delete children[0];
            children[0] = new Node(node);
        } else{
            children[0]->join(node);
        }
    }
}

Node& Node::operator+(Node &otherNode) {
    Node *resultNode = new Node(*this);
    (*resultNode).join(otherNode);
    return *resultNode;
}

void Node::operator =(Node &otherNode) {
    this->value = otherNode.value;
    reqChildQuant = otherNode.reqChildQuant;
    children = new Node*[reqChildQuant];
    for (int i = 0; i < reqChildQuant; ++i) {
        children[i] = new Node((*otherNode.children[i]));
    }
}

std::string Node::getLevel(int lvl){
    std::string result = "";
    if (lvl == 0){
        result = this->value;
    } else {
        for (int i = 0; i < this->reqChildQuant; ++i) {
            result += children[i]->getLevel(lvl-1);
        }
    }
    return result;
}

int Node::countDepth(int &depth, int lvl){
    this->lvl = lvl;
    for (int i = 0; i < this->reqChildQuant; ++i) {
        children[i]->countDepth(depth, lvl + 1);
    }
    if (this->lvl > depth) depth = this->lvl;
}