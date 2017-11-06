//
// Created by monteth on 11/1/17.
//

#ifndef ZMPO_3_TREE_H
#define ZMPO_3_TREE_H


#include "Node.h"

class Tree {
public:
/*    Tree();

    Tree(Tree &otherTree);*/
    void requestTree(const std::string *inputArray, int maxIndex);
    std::string getVariables();
    std::string getPrefix();
    double getResult(int *varValues);
    void join(const std::string *inputArray);

    /*Tree operator =(const Tree &other);*/

    void del();

private:
    void updateVariables();
    std::string **variables;
    int varLength;
    Node *root;
};


#endif //ZMPO_3_TREE_H
