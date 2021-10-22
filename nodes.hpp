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
    int myline;
    int mycol;
    int ival;
    double dval;
    string sval;
    string firstid;
    Node *left,*right;
    Node *next;
};

class nodeMinus : public Node
{
  public:
    nodeMinus(Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodePlus : public Node
{
  public:
    nodePlus(Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeNot : public Node
{
  public:
    nodeNot(Node *lf=0,Node *rt=0);

    virtual void print(ostream *out = 0);
};

class nodeNum : public Node
{
  public:
    nodeNum(int i);
    virtual void print(ostream *out = 0);
};

class nodeParExp : public Node
{
  public:
    nodeParExp(Node *lf=0,Node *rt=0);
    virtual void print(ostream *out = 0);
};

class nodeBrackExp : public Node
{
  public:
    nodeBrackExp(Node *lf=0,Node *rt=0);
    virtual void print(ostream *out = 0);
};

class nodeExpExp : public Node
{
  public:
    nodeExpExp(Node *lf=0,Node *rt=0);
    virtual void print(ostream *out = 0);
};

class nodeSem : public Node
{
  public:
    nodeSem(Node *lf=0,Node *rt=0);
    virtual void print(ostream *out = 0);
};

class nodeIdMulIdSem : public Node
{
  public:
    nodeIdMulIdSem(Node *lf=0,Node *rt=0);
    virtual void print(ostream *out = 0);
};


class nodeRead : public Node
{
  public:
    nodeRead();
    virtual void print(ostream *out = 0);
};

class nodePar : public Node
{
  public:
    nodePar(Node *lf=0,Node *rt=0);
    virtual void print(ostream *out = 0);
};

class nodeNew : public Node
{
  public:
    nodeNew(Node *lf=0,Node *rt=0);
    virtual void print(ostream *out = 0);
};

class nodeNewPar : public Node
{
  public:
    nodeNewPar();
    virtual void print(ostream *out = 0);
};

#endif
