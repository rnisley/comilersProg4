/*
 * This defines the "node" class in C++. And SOME subclasses.
 * Really to separate the subclasses into "types" of files, like binary
 * operators or math operators and logical operators, and so on. 
 * The commented out portions are for debugging.
 *
 *
 * nodes.hpp
 * COSC4785
 * Ric Nisley
 * 10/9/2021
 *
 * based on nodes.hpp by kbuckner
 *
 *
 */

#ifndef NODES_HPP
#define NODES_HPP
#include<iostream>
#include<string>

using std::string;
using std::endl;
using std::ostream;


class Node
{
  public:
    // set the pointers to 0 C++ is trying to get away from NULL
    Node(Node *lf=0,Node *rt=0) ;
    virtual ~Node();
    int getint() const;
    int getcol() const;
    double getdbl() const;
    string getstring() const;
    void setval(const char *v);
    void setval(const string s);
    void setid(const string s);
    void setval(int i);
    void setval(double d);
    void reset();
    void setleft(Node *p);
    void setright(Node *p);
    void setnext(Node *p);
    Node* getleft();
    Node* getright();
    Node* getnext();
    virtual void print(ostream *out = 0);

  protected:
    int choice;
    int myline;
    int mycol;
    int ival;
    double dval;
    string sval;
    string firstid;
    Node *left,*right;
    Node *next;
};

class nodeClassDec : public Node
{
  public:
    nodeClassDec(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeClassBody : public Node
{
  public:
    nodeClassBody(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeVardec : public Node
{
  public:
    nodeVardec(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeType : public Node
{
  public:
    nodeType(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeSimpletype : public Node
{
  public:
    nodeSimpletype(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeConsdec : public Node
{
  public:
    nodeConsdec(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeMethdec : public Node
{
  public:
    nodeMethdec(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeRestype : public Node
{
  public:
    nodeRestype(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeParlist : public Node
{
  public:
    nodeParlist(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeParameters : public Node
{
  public:
    nodeParameters(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeParameter : public Node
{
  public:
    nodeParameter(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeBlock : public Node
{
  public:
    nodeBlock(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeLVarDecs : public Node
{
  public:
    nodeLVarDecs(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeStatements : public Node
{
  public:
    nodeStatements(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeStatement : public Node
{
  public:
    nodeStatement(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeName : public Node
{
  public:
    nodeName(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeArglist : public Node
{
  public:
    nodeArglist(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeConStatement : public Node
{
  public:
    nodeConStatement(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeExps : public Node
{
  public:
    nodeExps(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeExp : public Node
{
  public:
    nodeExp(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeNewexp : public Node
{
  public:
    nodeNewexp(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeBracketExps : public Node
{
  public:
    nodeBracketExps(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeBracketExp : public Node
{
  public:
    nodeBracketExp(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeMultibrackets : public Node
{
  public:
    nodeMultibrackets(int col, int choice, Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

#endif
