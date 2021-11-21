#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"

void string_copy(const char source[], char destination[], int n){

	for(int i = 0; i < n; i++){ //loop through n times where n-1 is the number of characters to return to the destination array
		destination[i] = source[i]; //set the character from the source array at the same position i in the destination array
	}
	destination[n-1] = '\0'; //make sure the nth character is null

    
}
