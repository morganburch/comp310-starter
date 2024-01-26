#include <stdio.h>
#include <stdlib.h>

// get sum and average of array vals
int main(int argc, char** argv){ 
int numbers[5] = {1, 2, 3, 4, 5};
int sum = 0; 

//get sum
for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); ++i){ 
	sum += numbers[i];
	}
	
int average = sizeof(numbers)/sizeof(numbers[0]); 
printf("Sum: %d\n", sum); 
printf("Average: %d\n", average); 
return EXIT_SUCCESS;
}