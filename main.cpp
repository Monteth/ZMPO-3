#include <iostream>
#include "Tree/Tree.h"
#include "Tree/Tools.h"
#include <cmath>


int main() {
    Tree tree;
    std::string *array = new std::string[6];
    array[0] = "enter";
    array[1] = "+";
    array[2] = "2";
    array[3] = "*";
    array[4] = "b";
    array[5] = "b";
    std::string *array3 = new std::string[3];
    array3[0] = "enter";
    array3[1] = "sin";
    array3[2] = "x";
    tree.requestTree(array3, 3);
    std::cout << tree.getPrefix() << std::endl;

    std::cout << tree.getVariables() << std::endl;
    int *array2 = new int[1];
    array2[0] = 1;
    std::cout << "Result of expression is = " << tree.getResult(array2, 1) << std::endl;
    std::cout << "Result of expression 2 is = " << sin(1) << std::endl;

    /*std::string string;
    if(Tools::isVariable("xD2346!")){
        string = "true";
    } else{
        string =  "false";
    }
    std::cout << string << std::endl;*/
    return 0;
}