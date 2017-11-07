#include <iostream>
#include "Tree/Tree.h"
#include "Tree/Node.h"
#include "Tree/Tools.h"
#include <cmath>


int main() {
    int index = 1;
    auto *array2 = new std::string[4];
    array2[0] = "enter";
    array2[1] = "+";
    array2[2] = "2";
    array2[3] = "3";
    Node node1(array2, index, 4);
    Node node2 = node1;
    Node node3;
    node3 = node1 + node2;
    std::cout << node3.value << std::endl;
    std::cout <<"node3 prefix:" << node3.getPrefix() << std::endl;
    std::cout << "(node1 + node2) prefix:" <<(node1+node2).getPrefix() << std::endl;
    //std::cout << node3.getPrefix() << std::endl;

    /*Node *node = new Node(array2, index, 2);
    Node *node_copy = new Node[1];
    *node_copy = new Node((*node));
    node->value = "XD";*/
    /*std::cout << node1.value << " << val1     val  >>" << node2.value << std::endl;*/
/*    Tree tree;
    std::string *array = new std::string[6];
    array[0] = "enter";
    array[1] = "+";
    array[2] = "2";
    array[3] = "*";
    array[4] = "a";
    array[5] = "b";
    tree.requestTree(array, 6);
    std::cout << tree.getPrefix() << std::endl;

    std::string *arrayJoin = new std::string[4];
    arrayJoin[0] = "join";
    arrayJoin[1] = "+";
    arrayJoin[2] = "1";
    arrayJoin[3] = "1";
    tree.join(arrayJoin);

    std::cout << tree.getPrefix() << std::endl;

    std::cout << tree.getVariables() << std::endl;
    int *array2 = new int[2];
    array2[0] = 2;
    array2[1] = 7;
    std::cout << "Result of expression is = " << tree.getResult(array2) << std::endl;*/

    return 0;
}