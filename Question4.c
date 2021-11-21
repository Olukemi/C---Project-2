#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Questions.h"

void letter_freq(const char word[], int freq[]){

	for(int i = 0; word[i] != '\0'; i++){ //loop through as long as the character doesn't equal null
		for (int l = 0; l < 26; l++){ //loop through each letter in the alphabet to compare to the letters in the word
			if (word[i] == 'a'+l || word[i] == 'A'+l){ // check if the letter at i from the word is equal the letter (upper or lower) at 'l'
				freq[l] += 1; // increase the frequency for that letter by 1
			}
		}
	}
   
}
