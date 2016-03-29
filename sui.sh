rm calculator.o inout.o calcontroller.o
rm sum
gcc -c calculator.c -o calculator.o
gcc -c inout.c -o inout.o
gcc -c calcontroller.c -o calcontroller.o
gcc calculator.o inout.o calcontroller.o cal.c -o sum
./sum
