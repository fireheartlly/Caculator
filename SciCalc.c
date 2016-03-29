#include <stdio.h>
#include "calculator.h"

int log(int a);
int main(){
 	int sum1,diff1,mul1,div1;
 	sum1=sum(2,3);
 	diff1=diff(5,1);
 	mul1=mul(2,3);
 	div1=div(5,6);
 	printf("%d,%d,%d,%d \n",sum1,diff1,mul1,div1);
 }
 