#include <stdio.h>
#include <stdlib.h>

#include "Questions.h"
#include "math.h"


int is_diag_dom(int mat[][N2]){

    //this is the flag that is returned to tell whether the mat is diagonally
	int isDiag = 0;
	
	//write your code below
	//Return 1 if the matrix is diagonally dominant and 0 otherwise
	
	for(int r = 0; r < N2; r++){ //loop through each row
		int rowSum = 0; //initialize the row sum and set equal to 0
		int diagValue = mat[r][r]; // set a variable equal to the diagonal value for that row
		for (int c = 0; c < N2; c++){ //loop through each column in that row
			mat[r][r] = 0; // set the diagonal value equal to 0 so it is not part of the sum of the row
			rowSum += fabs(mat[r][c]); //add all the numbers in that row where the number at r,r is 0
		}

		//check if the absolute value of the diagonal value at this row is greater than the sum for ALL rows
		if (fabs(diagValue) > rowSum){
			isDiag = 1; // if true, set isDiag equal to 1 and continue to loop to check the remaining rows
		} else{
			isDiag = 0; // if false, break the loop and the matrix is not diagonally dominant and isDiag is equal to 0.
			break;
		}

	}
	


    return isDiag;
}
