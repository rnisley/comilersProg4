// program6.cpp
// Ric Nisley
// COSC 4785 Fall 
// Program 04
// 10/22/21
#include <iostream>
#include <fstream>
#include <string>
#include "nodes.hpp"
#include "program6.tab.hpp"
#include <FlexLexer.h>
#include "typeTable.hpp"

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
extern TypeTable myTypeTable;
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

    cout << endl << endl << "Symbol Table Dump Follows" << endl << endl;
    myTypeTable.print();
    cout << endl;
  

    return 0;
}