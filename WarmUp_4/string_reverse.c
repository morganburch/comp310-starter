#include <stdio.h>
#include <stdlib.h>

//reverse string
int main(int argc, char** argv){ 
	char strArray[5] = "Hello"; 
	char temp; //declared outside of loop to minimize actions taken during each iteration
    int i;
    int j; //got an error when initializing this in the loop like java
	for (i = 0, j = sizeof(strArray)/sizeof(strArray[1]) - 1; i < j; i++, j--) {
        temp = strArray[i];
        strArray[i] = strArray[j];
        strArray[j] = temp;
    }
printf("Reversed string: %s", strArray);
return EXIT_SUCCESS;
}