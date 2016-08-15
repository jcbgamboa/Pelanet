CXXFLAGS=-I../boost/

TARGET=net
OBJS=Layer.o

$(TARGET): $(OBJS)
	g++ -o $@ main.cpp $(OBJS)

.PHONY: clean
clean:
	rm *.o 


.PHONY: tests
tests:
	$(MAKE) -C ./tests

