main: obj/Main.o
	mkdir -p obj bin
	g++ obj/Main.o -o bin/main
obj/Main.o: src/Main.cpp
	mkdir -p obj
	g++ -c src/Main.cpp -o obj/Main.o
run: bin/main
	./bin/main
clear:
	rm -rf /bin/main obj/Main.o