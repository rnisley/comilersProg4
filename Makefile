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
SRC=program5.cpp program5.tab.cpp program5_lex.cpp nodes.cpp typeTable.cpp symbolTable.cpp
HDRS=program5.tab.hpp nodes.hpp typeTable.hpp symbolTable.hpp 

.PHONY: clean tarball

program5: $(SRC) $(HDRS)
	$(CXX) $(CXXFLAGS) $(SRC) -o program5

program5.tab.cpp : program5.ypp nodes.hpp
	$(YACC) $(YFLAGS) program5.ypp

program5_lex.cpp: program5.lpp nodes.hpp
	$(LEX) $(LFLAGS) program5.lpp

tidy:
	/bin/rm -f a.out core.* program5.tab.* program5.output \
	  program5_lex.cpp

# the tidy rule cleans up but leaves the executable. The clean, uses tidy
# then it removes the executable. 
clean: tidy
	/bin/rm -f program5 

tarball:
	tar cf program5.tar Makefile nodes.hpp nodes.cpp program5.lpp program5.ypp\
	  program5.cpp program5.odt typeTable.cpp typeTable.hpp symbolTable.cpp \
	  symbolTable.hpp entry.cpp entry.hpp
