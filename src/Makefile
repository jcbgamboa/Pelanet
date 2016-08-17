CXXFLAGS=-I../boost/

TARGET=pelanet.a
OBJS=Layer.o

$(TARGET): $(OBJS)
	ar rcs -o $@ $^

.PHONY: clean
clean:
	rm *.o  pelanet.a


.PHONY: tests
tests:
	$(MAKE) -C ./tests

