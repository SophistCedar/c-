CFALGS = -g -Wall
.PHONY:all
out = inherit.out inherits.out
all:$(out)
inherit.out:inherit.cpp
	g++ $(CFALGS) $^ -o $@
inherits.out:inherits.cpp
	g++ $(CFALGS) $^ -o $@
.PHONY:clean
clean:
	rm *.out