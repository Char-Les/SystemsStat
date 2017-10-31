all: stat.c
	gcc stat.c -o stat.exe

run: all
	./stat.exe

clean:
	rm foo
	rm *.out
	rm *~
