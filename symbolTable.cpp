/*
 * symbolTable.cpp
 * COSC4785
 * Ric Nisley
 * 10/9/2021
 *
 */

#include "symbolTable.hpp"
#include <iostream>

using std::cout;
using std::endl;

SymbolTable::SymbolTable(SymbolTable *parent)
{
    myParent = parent;
}

SymbolTable::~SymbolTable(){};

int SymbolTable::insert(string id, Entry *type)
{
    if (table.find(id) == table.end())
    {
        table.insert({id, type});
        return 0;
    }
    else
    {
        return -1;
    }
}

string SymbolTable::lookup(string id)
{
    //lookup stuff before first "." then get back symbol table for that class

    /*
    size_t start = 0, end = 0;
    string substring;
    start = end;
    end = id.find('.');
    substring = "";
    int j = 0;
    for (int i = start; i < end; i++)
    {
        substring[j] = id[i];
        j++;
    }
    */
    //then lookup stuff until next "." and get back symbol table for that class
    //repeat until there are no more "."s and you have the last element
    if (table.find(id) == table.end())
    {
        if (myParent != nullptr)
        {
            return myParent->lookup(id);
        }
        else
        {
            return "not found";
        }
    }
    else
    {
        return (table[id]->myType); //lookup final element and return string containing the type
    }
}

SymbolTable* SymbolTable::getParent()
{
    return myParent;
}

void SymbolTable::print()
{
    for(auto symbol : table)
    {
        string id = symbol.first;
        string type = symbol.second->myType;
        cout << id << " " << type << endl;
    }
}

Entry::Entry(string ident, string type, SymbolTable* typeST, int isP)
{
    id = ident;
    myType = type;
    myTypeST = typeST;
    isParameter = isP;
};

Entry::~Entry()
{
    delete myTypeST;
};