all: all.out 
all.out: Actual.o Expected.o completedata.o comparision.o test_f.o
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread

test_f.o: test_f.cpp Actual.h Expected.h completedata.h comparision.h 
	g++ $< -c

comparision.o: comparision.cpp comparision.h Actual.h Expected.h completedata.h
	g++ $< -c
completedata.o: completedata.cpp completedata.h Actual.h Expected.h
	g++ $< -c
Actual.o: Actual.cpp Actual.h
	g++ $< -c
Expected.o: Expected.cpp Expected.h
	g++ $< -c
valgrind: ./all.out
	valgrind ./all.out
cppcheck: *.cpp
	cppcheck *.cpp
clean:
	rm -rf *.o *.out *.gch
