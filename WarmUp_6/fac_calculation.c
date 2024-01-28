#include <stdio.h>
#include <stdlib.h>

int factorial(int n){ 
	if (n <= 0){ 
		return 1; 
	}else { 
		return n * factorial(n-1); 
	}
}

int main(int argc, char** argv){
	int num = 5; 
	int facNum = factorial(num);
	printf("Factorial of %d is: %d\n", num, facNum);
}