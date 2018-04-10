FILES  = $(wildcard *.cpp)
OBJECS = $(subst .cpp,.o,$(FILES))
TARGETS= $(subst .cpp,,$(FILES))



CPP = g++
CPPLIBS = -lboost_system -lpthread
CPPFLAGS = -g -ggdb -W -Wall -std=c++0x


all: $(TARGETS)


$(TARGETS) :
	$(CPP) $(CPPFLAGS) -o $@ $@.cpp $(CPPLIBS) 


clean:
	rm -rf $(OBJECS) $(TARGETS)
