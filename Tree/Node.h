//
// Created by monteth on 11/1/17.
//

#ifndef ZMPO_3_NODE_H
#define ZMPO_3_NODE_H


#include <string>

class Node {
public:
    Node(Node &otherNode);
    Node(const std::string *inputArray, int &actualIndex, int maxIndex);
    void updateVariables(std::string **variables, int &varLength);
    std::string getPrefix();
    double getResult(int *varValues, std::string *varNames, int arrayLength);
private:
    std::string value;
    Node **children;
    int reqChildQuant;

    friend class Tree;
};


#endif //ZMPO_3_NODE_H