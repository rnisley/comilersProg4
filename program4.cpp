// program4.cpp
// Ric Nisley
// COSC 4785 Fall 2021
// Program 04
// 10/22/21
#include <iostream>
#include <fstream>
#include <string>
#include "nodes.hpp"
#include "program4.tab.hpp"
#include <FlexLexer.h>

using std::cerr;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

/*
 * These will be made available to the parser via externs
 * Need the scanner here in main so that I can change the input
 * file stream if needed.
 *
 * The "tree" so that I can print it.
 */

yyFlexLexer scanner;
Node *tree;

string id;
string prevId;
string value;
string token;
int firstColumn = 1;
int nextColumn = 1;
int type;
int errorCount = 0;

int main()
{
   
    tree = 0;

    yyparse();

    cout << endl << endl;
    tree->print(&cout);
    cout << endl;
    //}

    return 0;
}