#CXX = g++
CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES=recursionTest recursionArrayTest

all: ${BINARIES}

tests: ${BINARIES}
	./recursionTest

recursionTest: recursionTest.o linkedListFuncs.o tddFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

recursionArrayTest: recursionArrayTest.o 
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@
clean:
	/bin/rm -f ${BINARIES} *.o
