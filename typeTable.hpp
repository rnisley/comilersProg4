/*
 * This defines the "type table" class in C++. 
 *
 * typeTable.h
 * COSC4785
 * Ric Nisley
 * 11/13/2021
 *
 */

#ifndef TYPETABLE_HPP
#define TYPETABLE_HPP

#include "symbolTable.hpp"
#include <unordered_map>
#include <string>
using namespace std;

class TypeTable
{
    public:
    TypeTable();
    ~TypeTable();
    Entry* lookup(string type);
    int insert(string type, Entry *pointer = nullptr);
    void print();

    private:
    unordered_map<string, Entry*> table;
};
#endif