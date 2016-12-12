/* 
 * get_string.c
 * Rishi Dutta 912790628
 * This program takes an input from the user which will be a string. 
 * The intial buffer size is 16, so the string will hold only 16 elements.
 * If the string is too large the buffer size will double. Then it will print out the string and how many times it had to increase the buffer.
 */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define INITIAL_BUFFER_SIZE 16
char* IncreaseBuffer(char* buffer, int* buffer_size);

int main() {
	char* input;
	input = (char*) malloc(INITIAL_BUFFER_SIZE * sizeof(char));
	char A;
	int increases = 0, i = 0;
	int buff = INITIAL_BUFFER_SIZE;  
	int* buffer_size = &buff;
	printf("Enter a string: ");
	A = getchar();
	while (A != '\n' && A != EOF) {
		if (i == *buffer_size - 1){
			input = IncreaseBuffer(input, buffer_size);
			increases++;
		}
		input[i] = A;
		i++;
		A = getchar();
	}
	input[i] = '\0';
	int check;
	for(check = 0; input[check] != '\0'; check++){
		}
	printf("String size: %d\n", check);
	printf("Buffer increases: %d\n", increases);
	printf("You entered: %s\n", input);
	return 0;
}

char* IncreaseBuffer(char* buffer, int* buffer_size){
	*buffer_size = *buffer_size + *buffer_size;
	int buff = *buffer_size;
	char* new = (char*) malloc(sizeof(char) * *buffer_size);
	new = buffer;
	return new;
	free(buffer);
}
