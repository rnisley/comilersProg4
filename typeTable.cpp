/*
 * typeTable.cpp
 * COSC4785
 * Ric Nisley
 * 10/9/2021
 *
 */

#include "typeTable.hpp"
#include <iostream>

TypeTable::TypeTable()
{
  table.insert({"void", nullptr});
  table.insert({"int", nullptr});
}

TypeTable::~TypeTable(){};

int TypeTable::insert(string type, Entry *pointer)
{
  if (table.find(type) == table.end())
  {
    table.insert({type, pointer});
    return 0;
  }
  else
  {
    return -1;
  }
}

Entry *TypeTable::lookup(string type)
{
  if (table.find(type) == table.end())
  {
    return nullptr;
  }
  else
  {
    return table[type];
  }
}

void TypeTable::print()
{
  for (auto st : table)
  {
    if (st.second != nullptr)
    {
      
      st.second->print(0);
    }
  }
}