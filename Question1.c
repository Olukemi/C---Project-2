#include <stdio.h>
#include <stdlib.h>

#include<math.h>
#include "Questions.h"



void add_vectors(double vector1[],double vector2[],double vector3[],int size)
{
    /*vector3 should store the sum of vector1 and vector2. 
	You may assume that all three arrays have the size equal to n
	*/
	//write your code below

	for (int i = 0; i < size; i++){ // loop through each element in the array where the # of loops is size-1 since arrays start from '0'
		vector3[i] = vector1[i] + vector2[i]; // sum the elements at 'i' from each vector and set it equal to vector3 at 'i'
	}
	
}

double scalar_prod(double vector1[],double vector2[],int size)
{
	// this is the variable holding the scalar product of the two vectors
    double prod=0;

	//write your code below to calculate the prod value
	
    for (int i = 0; i < size; i++){ // loop through each element in the array where the # of loops is size-1
    	prod += vector1[i] * vector2[i]; // multiply the elements at 'i' from each vector and add it to scalar product
    }

	
	// return the result
    return prod;
}

double norm2(double vector1[], int size)
{
	//this is the variable holding the L2 norm of the passed vector
    double L2;
	
    
	//write your code here
	// you should call function scalar_prod().

    // call the scalar_prod function to get the scalar product of the given vector, then find the square root of the returned value to get norm
    L2 = sqrt(scalar_prod(vector1, vector1, size)); // set L2 equal to norm



	//finally, return the L2 norm 
    return L2;
}
