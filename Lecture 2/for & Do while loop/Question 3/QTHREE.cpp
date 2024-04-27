#include<stdio.h>

int main() {
	
	int N;
	
	printf("This is program to print even numbers from 1 to N using a do-while loop.\n\n");
	printf("Enter any positive number :- ");
	scanf("%d", &N);
	do {
		if(N % 2 == 0) {
			printf("%d\n", N);
		}
		N--;
	}while(N>=1);
	printf("Thank you.");
	
}