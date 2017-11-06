//
// Created by monteth on 11/5/17.
//

#include <string>
#include <iostream>
#include "Interface.h"
#include "Values.h"
#include "Tree/Tree.h"
#include "Tree/Tools.h"

using namespace std;

void Interface::start() {
    std::string line;

    Tree tree;
    bool end = false;
    int commandsLength = 0;
    std::string *commandsArray;
    string command;
    printHelp();
    do {
        commandsLength = 0;
        getline(std::cin, line);
        commandsArray = split(line, ' ', &commandsLength);
        command = commandsArray[0];

        if (line == sEND) {
            end = true;
            tree.del();

        } else if (line == sHELP) {
            printHelp();

        } else if (command == sEnter) {
            tree.requestTree(commandsArray + 1, commandsArray->length());
        } else if (line == sPRINT) {
            std::cout << tree.getPrefix() << std::endl;
        } else if (command == sCOMP) {
            if (commandsLength == tree.getVariables().length() + 1) {
                if (tabIsInt(commandsArray, 1)) {
                    int *variables = strToIntArray(commandsArray, 1);
                    tree.getResult(variables);
                }
            }
        }
    } while (!end);
}

std::string *Interface::split(string str, char separator, int *length) {
    string *arrayOfWords;
    arrayOfWords = new string[1];
    string word;

    for (int i = 0; i <= str.length(); i++) {
        if ((i == str.length() || str[i] == separator) && word.length() > 0) {
            push(arrayOfWords, *length, word);
            (*length)++;
            word = "";
        } else if (str[i] != separator) {
            word += str[i];
        }
    }
    return arrayOfWords;
}

void Interface::push(string *&array, int length, string newWord) {
    string *newArray;
    newArray = new string[length + 1];

    for (int i = 0; i < length; i++) {
        newArray[i] = array[i];
    }

    newArray[length] = move(newWord);
    delete[] array;
    array = newArray;
}

void Interface::printHelp() {

}

bool Interface::tabIsInt(string *array, int offset) {
    bool areInts = true;
    for (int i = offset; i < (array->length() + offset) && areInts; ++i) {
        if (!Tools::isInt(array[i])) areInts = false;
    }
    return areInts;
}

int *Interface::strToIntArray(string *commandsArray, int startOffset) {
    auto result = new int[commandsArray->length()];
    int offset = startOffset;
    for (int i = 0; i < commandsArray->length(); ++i, offset++) {
        result[i] = stoi(commandsArray[offset]);
    }
    return result;
}