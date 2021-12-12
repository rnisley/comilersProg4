# Makefile
# COSC 4785
# Ric Nisley
# 10/9/2021
#
CXX=g++
CXXFLAGS=-ggdb -Wall -Wno-sign-compare
YACC=bison
YFLAGS=--report=state -W -d
LEX=flex
LEX=flex++
LFLAGS=--warn
SRC=program6.cpp program6.tab.cpp program6_lex.cpp nodes.cpp typeTable.cpp symbolTable.cpp
HDRS=program6.tab.hpp nodes.hpp typeTable.hpp symbolTable.hpp 

.PHONY: clean tarball

program6: $(SRC) $(HDRS)
	$(CXX) $(CXXFLAGS) $(SRC) -o program6

program6.tab.cpp : program6.ypp nodes.hpp
	$(YACC) $(YFLAGS) program6.ypp

program6_lex.cpp: program6.lpp nodes.hpp
	$(LEX) $(LFLAGS) program6.lpp

tidy:
	/bin/rm -f a.out core.* program6.tab.* program6.output \
	  program6_lex.cpp

# the tidy rule cleans up but leaves the executable. The clean, uses tidy
# then it removes the executable. 
clean: tidy
	/bin/rm -f program6 

tarball:
	tar cf program6.tar Makefile nodes.hpp nodes.cpp program6.lpp program6.ypp\
	  program6.cpp program6.odt typeTable.cpp typeTable.hpp symbolTable.cpp \
	  symbolTable.hpp 
