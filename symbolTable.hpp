/*
 * This defines the "symbol table" class in C++. 
 *
 * symbolTable.hpp
 * COSC4785
 * Ric Nisley
 * 11/13/2021
 *
 */

#ifndef SYMBOLTABLE_HPP
#define SYMBOLTABLE_HPP

#include <unordered_map>
#include <string>
using namespace std;

class Entry;

class SymbolTable
{
    public:
    SymbolTable(SymbolTable *parent = nullptr);
    ~SymbolTable();

    SymbolTable* getParent();
    string lookup(string id);
    int insert(string type, Entry *id);

    string paramList = "";
    unordered_map<string, Entry*> table;
    
    private:
    SymbolTable *myParent;
};

class Entry
{
    public:
    Entry(string ident, string type, SymbolTable* typeST = nullptr, string ps = "", int isP = 0);
    ~Entry();

    void print(int spacing);
    string id;
    string myType;
    SymbolTable * myTypeST;
    string printerStuff;
    int isParameter;
    
};
#endif