/*
 * nodes.ypp
 * COSC4785
 * Ric Nisley
 * 10/9/2021
 *
 * based on nodes.cpp by kbuckner
 *
 */

// Just the "node" class

#include"nodes.hpp"
#include<iostream>

Node::Node(Node *lf,Node *rt) :
  ival(0),dval(0.0),left(lf),right(rt), next(0)
{
  reset();
}

Node::~Node()
{
  if(left) delete left;
  if(right) delete right;
}

int Node::getcol() const
{
  return mycol;
}
int Node::getint() const
{
  return ival;
}
double Node::getdbl() const
{
  return dval;
}
string Node::getstring() const
{
  return sval;
}
void Node::setval(const char *v)
{
  sval=v;
}
void Node::setval(const string s)
{
  sval=s;
}
void Node::setid(const string s)
{
  firstid=s;
}
void Node::setval(int i)
{
  ival=i;
}
void Node::setval(double d)
{
  dval=d;
}

void Node::reset() 
{
  myline=mycol=1;
  sval.clear();
}

void Node::setleft(Node *p) 
{
  left=p;
  return;
}

void Node::setright(Node *p) 
{
  right=p;
  return;
}

void Node::setnext(Node *p) 
{
  if(next==0) next=p;
  else next->setnext(p);
  return;
}

Node* Node::getleft()
{
  return left;
}

Node* Node::getright()
{
  return right;
}

Node* Node::getnext()
{
  return next;
}

void Node::print(ostream *out)
{
  if(left) left->print(out);
  if(right) right->print(out);
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeClassDec::nodeClassDec(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeClassDec::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  *out << "<classDeclaration> -> CLASS ID <classBody>" << endl;
  for (int i = 0; i < mycol; i++)
  {
    *out << "  ";
  }
  *out << "ID -> " << sval << endl;

  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeClassBody::nodeClassBody(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeClassBody::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<classBody> -> { }" << endl;
    break;
  case 2:
    *out << "<classBody> -> { <vardec> <consdec> <methdec> }" << endl;
    break;
  case 3:
    *out << "<classBody> -> { <vardec> <consdec>  }" << endl;
    break;
  case 4:
    *out << "<classBody> -> { <consdec> <methdec> }" << endl;
    break;
  case 5:
    *out << "<classBody> -> { <vardec> <methdec> }" << endl;
    break;
  case 6:
    *out << "<classBody> -> { <vardec> }" << endl;
    break;
  case 7:
    *out << "<classBody> -> { <consdec> }" << endl;
    break;
  case 8:
    *out << "<classBody> -> { <methdec> }" << endl;
    break;
  
  default:
    break;
  }

  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeVardec::nodeVardec(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeVardec::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<vardec> -> <type> ID ;" << endl;
    break;
  case 2:
    *out << "<vardec> -> <vardec> <type> ID ;" << endl;
    break;
    
  default:
    break;
  }
  
  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }

  for (int i = 0; i < mycol; i++)
  {
    *out << "  ";
  }
  *out << "ID -> " << sval << endl;

  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeType::nodeType(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeType::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<type> -> <simpletype>" << endl;
    break;
  case 2:
    *out << "<type> -> <type> []" << endl;
    break;
  
  default:
    break;
  }
  
  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeSimpletype::nodeSimpletype(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeSimpletype::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<simpletype> -> INT" << endl;
    break;
  case 2:
    *out << "<simpletype> -> ID" << endl;
    for (int i = 0; i < mycol; i++)
    {
      *out << "  ";
    }
    *out << "ID -> " << ival;
    break;
  
  default:
    break;
  }
  
  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeConsdec::nodeConsdec(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeConsdec::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<consdec> -> ID ( <parlist> ) <block>" << endl;
  for (int i = 0; i < mycol; i++)
  {
    *out << "  ";
  }
  *out << "ID -> " << sval << endl;

  if(left) {
    left->print(out);
  }
    break;
  case 2:
    *out << "<consdec> -> <consdec> ID ( <parlist> ) <block>" << endl;
    if(left) {
      left->print(out);
    }
    for (int i = 0; i < mycol; i++)
    {
      *out << "  ";
    }
    *out << "ID -> " << sval << endl;
    break;
  
  default:
    break;
  }
  
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeMethdec::nodeMethdec(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeMethdec::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<methdec> -> <resType> ID ( <parList> ) <block>" << endl;
    break;
  case 2:
    *out << "<methdec> -> <methdec> <resType> ID ( <parList> ) <block>" << endl;
    break;
  
  default:
    break;
  }
 
  if(left) {
    left->print(out);
  }

  for (int i = 0; i < mycol; i++)
  {
    *out << "  ";
  }
  *out << "ID -> " << sval << endl;

  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeRestype::nodeRestype(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeRestype::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<resType> -> <type>" << endl;
    break;
  case 2:
    *out << "<resType> -> VOID" << endl;
    break;
  default:
    break;
  }
  
  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeParlist::nodeParlist(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeParlist::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<parList> -> %empty" << endl;
    break;
  case 2:
    *out << "<parList> -> <parameters>" << endl;
    break;
  default:
    break;
  }
  
  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeParameters::nodeParameters(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeParameters::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<parameters> -> <parameter>" << endl;
    break;
  case 2:
    *out << "<parameters> -> <parameters> , <parameter>" << endl;
    break;
  default:
    break;
  }
  
  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeParameter::nodeParameter(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeParameter::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  *out << "<parameter> -> <type> ID" << endl;
  
  for (int i = 0; i < mycol; i++)
  {
    *out << "  ";
  }
  *out << "ID -> " << sval << endl;

  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeBlock::nodeBlock(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeBlock::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<block> -> { <lVarDecs> <statements> }" << endl;
    break;
  case 2:
    *out << "<block> -> { <lVarDecs> }" << endl;
    break;
  case 3:
    *out << "<block> -> { <statements> }" << endl;
    break;
  case 4:
    *out << "<block> -> { }" << endl;
    break;
  
  default:
    break;
  }
  
  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeLVarDecs::nodeLVarDecs(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeLVarDecs::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<lVarDecs> -> <type> ID ;" << endl;
    break;
  case 2:
    *out << "<lVarDecs> -> <lVarDecs> <type> ID ;" << endl;
    break;
  default:
    break;
  }
  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  for (int i = 0; i < mycol; i++)
  {
    *out << "  ";
  }
  *out << "ID -> " << sval << endl;
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeStatements::nodeStatements(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeStatements::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<statements> -> <statement>" << endl;
    break;
  case 2:
    *out << "<statements> -> <statements> <statement>" << endl;
    break;
  default:
    break;
  }
  
  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeStatement::nodeStatement(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeStatement::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<statement> -> ;" << endl;
    break;
  case 2:
    *out << "<statement> -> <name> = <exp> ;" << endl;
    break;
  case 3:
    *out << "<statement> -> ID = <exp> ;" << endl;
    for (int i = 0; i < mycol; i++)
    {
      *out << "  ";
    }
    *out << "ID -> " << sval;
    break;
  case 4:
    *out << "<statement> -> <name> ( <arglist> ) ;" << endl;
    break;
  case 5:
    *out << "<statement> -> ID ( <arglist> ) ;" << endl;
    for (int i = 0; i < mycol; i++)
    {
      *out << "  ";
    }
    *out << "ID -> " << sval;
    break;
  case 6:
    *out << "<statement> -> PRINT ( <arglist> ) ;" << endl;
    break;
  case 7:
    *out << "<statement> -> <conStatement>" << endl;
    break;
  case 8:
    *out << "<statement> -> WHILE ( <exp> ) <statement>" << endl;
    break;
  case 9:
    *out << "<statement> -> RETURN ;" << endl;
    break;
  case 10:
    *out << "<statement> -> RETURN <exp> ;" << endl;
    break;
  case 11:
    *out << "<statement> -> <block>" << endl;
    break;
  default:
    break;
  }
  
  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeName::nodeName(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeName::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<name> -> THIS" << endl;
    if(left) {
      left->print(out);
    }
    if(right) {
      right->print(out);
    }
    break;
  case 2:
    *out << "<name> -> ID" << endl;
    for (int i = 0; i < mycol; i++)
    {
      *out << "  ";
    }
    *out << "ID -> " << sval << endl;
    if(left) {
      left->print(out);
    }
    if(right) {
      right->print(out);
    }
    break;
  case 3:
    *out << "<name> -> THIS . ID ;" << endl;
    if(left) {
      left->print(out);
    }
    if(right) {
      right->print(out);
    }
    for (int i = 0; i < mycol; i++)
    {
      *out << "  ";
    }
    *out << "ID -> " << sval << endl;
    break;
  case 4:
    *out << "<name> -> ID . ID ;" << endl;
    if(left) {
      left->print(out);
    }
    if(right) {
      right->print(out);
    }
    for (int i = 0; i < mycol; i++)
    {
      *out << "  ";
    }
    *out << "ID -> " << firstid << endl;
    for (int i = 0; i < mycol; i++)
    {
      *out << "  ";
    }
    *out << "ID -> " << sval << endl;
    break;
  case 5:
    *out << "<name> -> <name> <bracketexp>" << endl;
    if(left) {
      left->print(out);
    }
    if(right) {
      right->print(out);
    }
    break;
  default:
    break;
  }

  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeArglist::nodeArglist(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeArglist::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<arglist> -> %empty" << endl;
    break;
  case 2:
    *out << "<arglist> -> <exps>" << endl;
    break;
  default:
    break;
  }
  
  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeConStatement::nodeConStatement(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeConStatement::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<conStatement> -> IF ( <exp> ) <statement>" << endl;
    break;
  case 2:
    *out << "<conStatement> -> IF ( <exp> ) <statement> ELSE <statement>" << endl;
    break;
  default:
    break;
  }
  
  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeExps::nodeExps(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeExps::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<exps> -> <exp>" << endl;
    break;
  case 2:
    *out << "<exps> -> <exp> , <exps>" << endl;
    break;
  default:
    break;
  }
  
  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeExp::nodeExp(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeExp::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<exp> -> <name>" << endl;
    break;
  case 2:
    *out << "<exp> -> NUM" << endl;
    for (int i = 0; i < mycol; i++)
    {
      *out << "  ";
    }
    *out << "NUM -> " << ival << endl;
    break;
  case 3:
    *out << "<exp> -> NULLT" << endl;
    break;
  case 4:
    *out << "<exp> -> <name> ( <arglist> )" << endl;
    break;
  case 5:
    *out << "<exp> -> READ ( )" << endl;
    break;
  case 6:
    *out << "<exp> -> <newexp>" << endl;
    break;
  case 7:
    *out << "<exp> -> <exp> + <exp>" << endl;
    break;
  case 8:
    *out << "<exp> -> <exp> - <exp>" << endl;
    break;
  case 9:
    *out << "<exp> -> <exp> || <exp>" << endl;
    break;
  case 10:
    *out << "<exp> -> <exp> * <exp>" << endl;
    break;
  case 11:
    *out << "<exp> -> <exp> / <exp>" << endl;
    break;
  case 12:
    *out << "<exp> -> <exp> % <exp>" << endl;
    break;
  case 13:
    *out << "<exp> -> <exp> && <exp>" << endl;
    break;
  case 14:
    *out << "<exp> -> <exp> == <exp>" << endl;
    break;
  case 15:
    *out << "<exp> -> <exp> != <exp>" << endl;
    break;
  case 16:
    *out << "<exp> -> <exp> >= <exp>" << endl;
    break;
  case 17:
    *out << "<exp> -> <exp> <= <exp>" << endl;
    break;
  case 18:
    *out << "<exp> -> <exp> > <exp>" << endl;
    break;
  case 19:
    *out << "<exp> -> <exp> < <exp>" << endl;
    break;
  case 20:
    *out << "<exp> -> - <exp>" << endl;
    break;
  case 21:
    *out << "<exp> -> + <exp>" << endl;
    break;
  case 22:
    *out << "<exp> -> ( <exp> )" << endl;
    break;
  case 23:
    *out << "<exp> -> ! <exp>" << endl;
    break;
  default:
    break;
  }
  
  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeNewexp::nodeNewexp(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeNewexp::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<newexp> -> NEW ID ( <arglist> )" << endl;
    for (int i = 1; i < mycol; i++)
    {
      *out << "  ";
    }
    *out << "ID -> " << sval << endl;
    break;
  case 2:
    *out << "<newexp> -> NEW <simpletype>" << endl;
    break;
  case 3:
    *out << "<newexp> -> NEW <simpletype> <bracketexps>" << endl;
    break;
  case 4:
    *out << "<newexp> -> NEW <simpletype> <multibrackets>" << endl;
    break;
  case 5:
    *out << "<newexp> -> NEW <simpletype> <bracketexps> <multibrackets>" << endl;
    break;
  default:
    break;
  }
  
  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeBracketExps::nodeBracketExps(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeBracketExps::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<bracketexps> -> <bracketexp>" << endl;
    break;
  case 2:
    *out << "<bracketexps> -> <bracketexps> <bracketexp>" << endl;
    break;
  default:
    break;
  }
  
  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeBracketExp::nodeBracketExp(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeBracketExp::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  *out << "<bracketexp> -> [ <exp> ]" << endl;
  
  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}


nodeMultibrackets::nodeMultibrackets(int col, int option, Node *lf,Node *rt):
  Node(lf,rt)
{
  mycol = col;
  choice = option;
}

void nodeMultibrackets::print(ostream *out)
{
  for (int i = 1; i < mycol; i++)
  {
    *out << "  ";
  }
  switch (choice)
  {
  case 1:
    *out << "<multibrackets> -> [ ]" << endl;
    break;
  case 2:
    *out << "<multibrackets> -> <multibrackets> [ ]" << endl;
    break;
  default:
    break;
  }
  
  if(left) {
    left->print(out);
  }
  if(right) {
    right->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}