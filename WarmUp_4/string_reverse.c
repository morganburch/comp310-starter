#include <stdio.h>
#include <stdlib.h>

//reverse string
int main(int argc, char** argv){ 
	char strArray[5] = "Hello"; 

    //declared outside of loop to minimize actions taken during each iteration
	char temp; 
    int i; 
    int j;

	for (i = 0, j = sizeof(strArray) - 1; i < j; i++, j--) {
        temp = strArray[i];
        strArray[i] = strArray[j];
        strArray[j] = temp;
    }

printf("Reversed string: %s\n", strArray);
return EXIT_SUCCESS;
}