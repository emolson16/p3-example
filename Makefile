StudentClass.o: StudentClass.h StudentClass.cpp GradeClass.h
	g++ -g -Wall -c StudentClass.cpp -o StudentClass.o
GradeClass.o: GradeClass.h GradeClass.cpp
	g++ -g -Wall -c GradeClass.cpp -o GradeClass.o
exampleProject.o: exampleProject.cpp StudentClass.h GradeClass.h
	g++ -g -Wall -c exampleProject.cpp -o exampleProject.o

exampleProject.exe: exampleProject.o StudentClass.o GradeClass.o
	g++ -g -Wall exampleProject.o StudentClass.o GradeClass.o -o exampleProject.exe

clean:
	rm -rf *.o proj3.exe
