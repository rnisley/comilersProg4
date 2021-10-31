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
SRC=program4.cpp program4.tab.cpp program4_lex.cpp nodes.cpp
HDRS=program4.tab.hpp nodes.hpp

.PHONY: clean tarball

program4: $(SRC) $(HDRS)
	$(CXX) $(CXXFLAGS) $(SRC) -o program4

program4.tab.cpp : program4.ypp nodes.hpp
	$(YACC) $(YFLAGS) program4.ypp

program4_lex.cpp: program4.lpp nodes.hpp
	$(LEX) $(LFLAGS) program4.lpp

tidy:
	/bin/rm -f a.out core.* program4.tab.* program4.output \
	  program4_lex.cpp

# the tidy rule cleans up but leaves the executable. The clean, uses tidy
# then it removes the executable. 
clean: tidy
	/bin/rm -f program4 

tarball:
	tar cf program4.tar Makefile nodes.hpp nodes.cpp program4.lpp program4.ypp\
	  program4.cpp program4.odt
