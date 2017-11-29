//
// Created by monteth on 11/1/17.
//

#ifndef ZMPO_3_NODE_H
#define ZMPO_3_NODE_H

class Node {
public:
    Node();
    Node(Node &otherNode);
    Node(const std::string *inputArray, int &actualIndex, int maxIndex, bool &isInvalidWord);
    ~Node();
    void join(const std::string *inputArray, int &actualIndex, int maxIndex, bool &isInvalidWord);
    void join(Node &node);
    void updateVariables(std::string **variables, int &varLength);
    std::string getPrefix();
    double getResult(int *varValues, std::string *varNames, int arrayLength);

    void operator =(Node &otherNode);
    Node & operator +(Node &otherNode);

    std::string getLevel(int lvl);


private:
    std::string value;
    Node **children;
    int reqChildQuant;
    friend class Tree;
    int lvl;

    int countDepth(int &depth, int i);
};



#endif //ZMPO_3_NODE_H