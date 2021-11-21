#include <stdio.h>
#include <stdlib.h>

#include "Questions.h"

void diag_scan(int mat [][N3], int arr []){

	for(int i = 0; i < N3*N3; i+=0){ //loop through i times where i is the number of digits in the array
		for(int r = 0; r < N3; r++){ //loop though each row
	       for(int c = 0; c < N3; c++){ //loop through each column
	    	   if(c == 0 || r == (N3-1)){ // at this number, check if it a digit on the "L" of the array (col = first row or row = last row)
	    		   int x = r; // set x equal to r so we can manipulate x (not r) to add the numbers in the diagonal of the reference point at r,c
	               int y = c; // set y equal to c so we can manipulate y (not c) to add the numbers in the diagonal of the reference point at r,c
	               while(x != -1 && y != N3){ // set the bounds of the diagonal to eliminate errors
	            	   arr[i] = mat[x--][y++]; // continue to add whatever digit there is left in the diagonal row at reference point r,c
	                   i++; //increase i here and not at the beginning of the loop
	               }
	           }
	       }
	    }
	}

}
