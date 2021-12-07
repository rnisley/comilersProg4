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

SymbolTable::SymbolTable(SymbolTable *parent, string name)
{
    myParent = parent;
    myName = name;
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

SymbolTable *SymbolTable::getParent()
{
    return myParent;
}

void Entry::print(int spacing)
{
    if(id[0] != '@')
    {
        for (int i = 0; i < spacing; i++)
        {
            cout << "  ";
        }
        if (id != "")
        {
            cout << id << " ";
        }
        cout << myType << " ";
        if (printerStuff != "")
        {
            cout << printerStuff << " <-";
            if (myTypeST->paramList != "")
            {
                cout << myTypeST->paramList;
            }
            else
            {
                cout << " void";
            }
        }
        cout << endl;
    }
    if (myTypeST != nullptr)
    {
        for (auto symbol : myTypeST->table)
        {
            symbol.second->print(spacing + 1);
        }
    }
}

Entry::Entry(string ident, string type, SymbolTable *typeST, string ps, int isP)
{
    id = ident;
    myType = type;
    myTypeST = typeST;
    printerStuff = ps;
    isParameter = isP;
};

Entry::~Entry()
{
    delete myTypeST;
};