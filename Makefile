ifndef GCPP
GCPP=g++
endif
CPPFLAGS=-std=c++11
driver: gpr.o
	${GCPP} -o $@ $^

%.o : %.cpp
	${GCPP} -o $@ ${CPPFLAGS} -c $< 

clean: 
	rm -f *.o 
.PHONY: clean 
