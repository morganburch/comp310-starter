#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//compute based on user input
int main(int argc, char** argv){ 
	if (argc < 4) {  //program itself is first arg
		printf("Type 3 arguments\n");
		return EXIT_FAILURE;
	}
	//convert user input to numbers to be conmputed
	int num1 = strtol(argv[1], NULL, 10); 
	int num2 = strtol(argv[2], NULL, 10); 

    //determine what computation to be performed, print output 
	if (strcmp(argv[3], "+") == 0){
		printf("Sum: %d + %d = %d\n", num1, num2, num1 + num2);
	} else if (strcmp(argv[3], "-") == 0){ 
		printf("Difference: %d - %d = %d\n", num1, num2, num1 - num2);
	}
	//only works if you type "*" instead o f * in when calling program
	else if (strcmp(argv[3], "*") == 0){ 
		printf("Product: %d * %d = %d\n", num1, num2, num1 * num2);
	}else if (strcmp(argv[3], "/") == 0){ 
		printf("Quotient: %d / %d = %d\n", num1, num2, num1 / num2);
	}else{  
        printf("Please choose one of the following operators: + - * /");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS; 
}