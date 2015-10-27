/*
 * main.c
 *
 * students:
 * Uri Goodman and Alexander Ar-Staelin
 *
 */
#include <stdio.h>

int main(int argc, char** argv){
	//variables:
	char op;
	int arg1, arg2;
	int res;

	//read operation:
	printf("Please choose an operation (+/-/$):\n");
	scanf("%c", &op);

	//assert legal operation:
	if((op != '+') && (op != '-') && (op != '$')){
		printf("Invalid Operation\n");
		return 1;
	}

	//read first operand:
	printf("Please enter the first operand:\n");
	scanf("%d", &arg1);

	//TODO exit if illegal argument

	//read second operand:
	printf("Please enter the second operand:\n");
	scanf("%d", &arg2);

	//TODO exit if illegal argument

	//calculate the operation on the arguments:
	switch(op){
		case '+':
			res = arg1 + arg2;
			break;
		case '-':
			res = arg1 - arg2;
			break;
		case '$':
			if(arg2<arg1){
				printf("The Result is: Not Valid\n");
				return 1;
			}
			//short calculation of sum of the linear series
			res = ((arg2-arg1+1)*(arg2+arg1))/2;
			break;
		default:
			printf("unknown operation error\n");
			return 1;

	}

	//print result:
	printf("The Result is: %d\n", res);
}

