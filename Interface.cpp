//
// Created by monteth on 11/5/17.
//
#include "Interface.h"

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

        } else if (line == sHELP) {
            printHelp();

        } else if (line == sVARS) {
            std::cout << tree.getVariables() << std::endl;

        } else if (command == sJOIN) {
            bool isInvalidWord = false;
            int score = tree.join(commandsArray, commandsLength, isInvalidWord);
            std::string response;
            switch (score){
                case -1: response = sREQUEST_RESPONSE_LITTLE;
                    break;
                case 0: response = sREQUEST_RESPONSE_OK;
                    break;
                case 1: response = sREQUEST_RESPONSE_MUCH;
                    break;
                default:break;
            }
            std::cout << response << std::endl << sTHIS_IS_YOUR_EXPRESSION << tree.getPrefix() << std::endl;
        } else if (command == sEnter) {
            bool isInvalidWord = false;
            int score = tree.requestTree(commandsArray, commandsLength, isInvalidWord);
            std::string response;
            switch (score){
                case -1: response = sREQUEST_RESPONSE_LITTLE;
                    break;
                case 0: response = sREQUEST_RESPONSE_OK;
                    break;
                case 1: response = sREQUEST_RESPONSE_MUCH;
                    break;
                default:break;
            }
            if (isInvalidWord){
                std::cout << sINVALID_WORD << std::endl;
            }
            std::cout << response << std::endl << sTHIS_IS_YOUR_EXPRESSION << tree.getPrefix() << std::endl;
        } else if (line == sPRINT) {
            std::cout << tree.getPrefix() << std::endl;
        } else if (command == sCOMP) {
            if (commandsLength == tree.getQuantOfVal() + 1) {
                if (tree.getQuantOfVal() == 0){
                    std::cout << sEXP_RESULT <<  tree.getResult(new int[0]) << std::endl;
                }else
                if (Tools::tabIsInt(commandsArray, 1, commandsLength)) {
                    int *variables = Tools::strToIntArray(commandsArray, 1, commandsLength);
                    std::cout << sEXP_RESULT << tree.getResult(variables) << std::endl;
                }
            }else {
                std::cout << sVARS_PREP2 << tree.getQuantOfVal() << sVARS_PREP3 << std::endl;
            }
        } else if (line == sEXIT){
            end = true;
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
    std::cout << HELP_TO_PRINT << std::endl;
}

