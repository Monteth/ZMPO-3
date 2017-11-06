//

#include <iostream>
#include <cmath>
#include <string.h>
#include "Node.h"
#include "Tools.h"

/*Node::Node() {}

Node::Node(Node &otherNode) {
    this->value = otherNode.value;
    this->reqChildQuant = otherNode.reqChildQuant;
    children = new Node*[reqChildQuant];
    for (int i = 0; i < reqChildQuant; ++i) {
        (*children)[i] = Node(reinterpret_cast<Node &>(otherNode.children[i]));
    }
}*/

void Node::del() {
    for (int i = 0; i < reqChildQuant; ++i) {
        children[i]->del();
    }
    delete []children;
}

Node::Node(Node &otherNode) {
    this->value = otherNode.value;
    reqChildQuant = otherNode.reqChildQuant;
    children = new Node*[reqChildQuant];
    for (int i = 0; i < reqChildQuant; ++i) {
        (*children) = new Node((*otherNode.children[i]));
    }
    std::cout << "Created copy node: " << value << std::endl;
}

Node::Node() {
    children = new Node*[0];
    value = "";
    reqChildQuant = 0;
    std::cout << "Created def node" << value << std::endl;
}

Node::Node(const std::string *inputArray, int &actualIndex, int maxIndex) {
    this->value = inputArray[actualIndex];
    reqChildQuant = Tools::getQuantOfChildren(value);
    children = new Node*[reqChildQuant];
    actualIndex++;
    std::cout << "Created node: " << value << std::endl;
    for (int i = 0; i < reqChildQuant; ++i) {
        children[i] = new Node(inputArray, actualIndex, maxIndex);
    }
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
    std::cout << this->value << "result :"<<result<< std::endl;
    return result;
}

void Node::join(const std::string *inputArray, int &actualIndex, int maxIndex) {
    if (Tools::isVariable(this->value) || Tools::isInt(this->value)){
        this->value = inputArray[actualIndex];
        reqChildQuant = Tools::getQuantOfChildren(value);
        children = new Node*[reqChildQuant];
        actualIndex++;
        std::cout << "Created node: " << value << std::endl;
        for (int i = 0; i < reqChildQuant; ++i) {
            children[i] = new Node(inputArray, actualIndex, maxIndex);
        }
    } else {
            children[0]->join(inputArray, actualIndex, maxIndex);
    }
}

Node Node::operator=(Node &otherNode) {
    return Node(otherNode);
}