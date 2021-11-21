#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"


void efficient(const int source[], int val[], int pos[], int size){

	for(int i = 0, k = 0; i < size; i++){ //loop through the source array
	    if (source[i] != 0){ // if the number at i does not equal 0
	        val[k] = source[i]; //set the next value at i in the val array equal to that number
	        pos[k] = i; //set the position of the value to the same position the number is in the val array to the pos array
	        k++; // increase k by 1 to move to the next position in array val and pos
	    }
	}

}

void reconstruct(int source[], int m, const int val[], const int pos[], int n){

	for(int i = 0; i < m; i++){ // loop through m times where m is the length of the source array
	    for (int k = 0; k < n; k++){ // loop through n time where n is the length of the val and pos array
	         if (pos[k] == i){ //check if the position of the value is equal i
	             source[i] = val[k]; // set source at i equal to val at k
	         }
	    }
	}
	

}
