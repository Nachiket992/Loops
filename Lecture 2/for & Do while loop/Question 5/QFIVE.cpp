#include<stdio.h>

int main() {
	
	int i, a;
	int count = 0;
	
	printf("This is a program to find the 'Prime' number using for loop.\n\n");
	printf("Enter a number :- ");
	scanf("%d", &a);
	for(i = 1; i <= a; i++) {
		if(a % i == 0) {
			count++;
		}
	}
	if(count == 2) {
		printf("\nPrime number.\n\n");
	}else {
		printf("\nNot Prime number.\n\n");
	}
	printf("Thank you.");
}