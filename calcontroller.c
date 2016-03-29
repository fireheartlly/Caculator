#include <stdio.h>
#include "calculator.h"
#include "inout.h"
#include "calcontroller.h"

void doDiff(){
	readInput();
	result = diff(a,b);
	displayOutput();
}
void doMult(){
	readInput();
	result = mul(a,b);
	displayOutput();
}
void doDiv(){
	readInput();
	result = div(a,b);
	displayOutput();
}
void doExit(){
	printf("stupid ap,byebye\n");
}
void doSum(){
	readInput();
	result = sum(a,b);
	displayOutput();
}