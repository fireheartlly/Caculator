#include <stdio.h>
#include "inout.h"
void readInput(){
 	printf("please enter a and b\n");
 	scanf("%d",&a);
 	scanf("%d",&b);
 }

 void displayOutput(){
 	printf("%d\n",result);
 }
 
 void printHeader(){
	printf("please enter option\n");
	printf("1. sum\n");
	printf("2. diff\n");
	printf("3. mul\n");
	printf("4. div\n");
	printf("5. exit\n");
}

void printError(){
	printf("please enter correct values");
}