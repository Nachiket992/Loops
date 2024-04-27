#include<stdio.h>

int main() {
	
	int n = 1, N;
	
	printf("This is a program to print 1 to N using a while loo,\n\n");
	printf("Enter N (Only enter positive number) :- ");
	scanf("%d", &N);
	while(n <= N) {
		printf("%d\n", n);
		n++;
	}
	printf("Thank you.");
	
}