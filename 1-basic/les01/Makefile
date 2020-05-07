CFLAGS = -g -Wall

.PHONY:all
out = hello.out data.out variable.out random.out array.out\
string.out pointer.out quote.out time.out io.out struct.out
all:$(out)
hello.out:hello.cpp
	g++ $(CFLAGS) $^ -o $@
data.out:data.cpp
	g++ $(CFLAGS) $^ -o $@
variable.out:variable.cpp
	g++ $(CFLAGS) $^  -o $@
random.out:random.cpp
	g++ $(CFLAGS) $^  -o $@
array.out:array.cpp
	g++ $(CFLAGS) $^  -o $@
string.out:string.cpp
	g++ $(CFLAGS) $^  -o $@
pointer.out:pointer.cpp
	g++ $(CFLAGS) $^  -o $@
quote.out:quote.cpp
	g++ $(CFLAGS) $^  -o $@
time.out:time.cpp
	g++ $(CFLAGS) $^  -o $@
io.out:io.cpp
	g++ $(CFLAGS) $^  -o $@
struct.out:struct.cpp
	g++ $(CFLAGS) $^  -o $@
.PHONY:clean
clean:
	rm *.out