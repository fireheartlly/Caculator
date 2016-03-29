#include <stdio.h>
#include "calculator.h"
#include "inout.h"
#include "calcontroller.h"

int main(){
	int option;
	printHeader();
	while(1){
		scanf("%d",&option);
		if(option==1){
			doSum();
		}
		else if(option==2){
			doDiff();
		}
		else if(option==3){
			doMult();
		}
		else if(option==4){
			doDiv();
		}
		else if(option==5){
			doExit();
			break;
		}
		else{
			printError();
		}
	}

}

