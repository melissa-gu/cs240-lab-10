tester: Person.o Student.o tester.o
	g++ -Wall -Wno-deprecated -g Person.cpp Student.cpp tester.cpp -o tester
Person.o: Person.cpp
	g++ -Wall -Wno-deprecated -g -c Person.cpp
Student.o: Student.cpp Person.cpp
	g++ -Wall -Wno-deprecated -g -c Student.cpp
clean: 
	/bin/rm -f *.o tester