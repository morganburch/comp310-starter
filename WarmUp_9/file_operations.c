#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	//FILE* is pointer to element of type FILE
	FILE* file; 
	char filename[] = "example.txt";
	
	//"w" specifies write mode 
	file = fopen(filename, "w"); 
	if(file == NULL) { 
		perror("Error opening file"); 
		return EXIT_FAILURE;
	}
	fprintf(file, "Hello, World!"); 
	fclose(file);
	
	//"r" specifies reading mode
	file = fopen(filename, "r"); 
	if(file == NULL) { 
		perror("Error opening file"); 
		return EXIT_FAILURE;
	}
	char line[100]; // max line length of 100 characters
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
		printf("\n");
    }
	fclose(file);
	return EXIT_SUCCESS;
}