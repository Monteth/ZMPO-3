//
// Created by monteth on 11/5/17.
//

#ifndef ZMPO_3_INTERFACE_H
#define ZMPO_3_INTERFACE_H
#include "Values.h"
#include <iostream>
#include "Tree/Tree.h"
#include "Tree/Tools.h"

class Interface {
public:
    void start();

private:

    std::string *split(std::string str, char separator, int *length);

    void push(std::string *&array, int length, std::string newWord);

    void printHelp();


};


#endif //ZMPO_3_INTERFACE_H
