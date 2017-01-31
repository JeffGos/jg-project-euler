CC=gcc
CXX=g++
CXXFLAGS=-std=c++11

LDFLAGS=-Wall
SRCS=$(shell find . -name '*.cc')
OBJS=$(patsubst %.cc, %.o, $(SRCS))

APP=jg-project-euler

all: $(APP)

$(APP): $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) $(LDLIBS) -o $(APP)

depend: .depend

.depend: $(SRCS)
	rm -f ./.depend
	$(CXX) $(CXXFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)

dist-clean: clean
	$(RM) *~ .depend

include .depend
