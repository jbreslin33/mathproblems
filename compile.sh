rm *.o

gcc -c MathProblems.cpp

gcc -c Main.cpp

g++ -o Main Main.o MathProblems.o 
