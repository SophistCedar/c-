CFALGS = -g -Wall
.PHONY:all
all:1-thread.out 2-thread.out 3-thread.out 4-thread.out 
1-thread.out:1-thread.cpp
	g++ $(CFALGS) $^ -o $@ -lpthread
2-thread.out:2-thread.cpp
	g++ $(CFALGS) $^ -o $@ -lpthread
3-thread.out:3-thread.cpp
	g++ $(CFALGS) $^ -o $@ -lpthread
4-thread.out:4-thread.cpp
	g++ $(CFALGS) $^ -o $@ -lpthread
.PHONY:clean
clean:
	rm *.out