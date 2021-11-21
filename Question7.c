#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"


void addEff(int val1[], int val2[], int val3[], int pos1[], int pos2[], int pos3[], int k1, int k2){

	//add the elements in val1 and pos1 to array val3 and pos3 respectively
	for(int i = 0, a = 0; i < k1; i++){
		val3[a] = val1[i];
		pos3[a] = pos1[i];
		a++;
	}

	//add the elements in val2 and pos2 to the rest of array val3 and pos3 respectively
	for(int i = 0, a = k1; i < k2; i++){
		val3[a] = val2[i];
		pos3[a] = pos2[i];
		a++;
	}

	//order the pos3 array from least to greatest and order val3 array in the same way respectively
	for(int i = 0; i < (k1*2)-1; i++){
	    for(int j = 0; j < (k1*2)-i-1; j++){
	        if(pos3[j] > pos3[j+1]){
	        	//order array pos3 from least to greatest
	           	int temp = pos3[j];
	           	pos3[j] = pos3[j+1];
	           	pos3[j+1] = temp;

	           	//order array val3 to match their respective positions in array pos3
	           	int temp1 = val3[j];
	           	val3[j] = val3[j+1];
	           	val3[j+1] = temp1;
			}
	    }
	 }

	// merge numbers in pos3 that are duplicated and add the numbers in val3 with the same position
	 for(int i = 0, d = (k1*2); i < (k1*2)-1; i++){
	     if(pos3[i] == pos3[i+1]){
	        val3[i] = val3[i] + val3[i+1]; //add the values that have the same position together
	        for(int k = i + 1;k < (k1*2)-1;k++){ //bump all the numbers following it down the array
	            pos3[k]=pos3[k+1];
	            val3[k]=val3[k+1];
	        }
	        //after every merge add a 0 to the end of the array;
	        pos3[d-1]=0;
	        val3[d-1]=0;
	     }
	 }
}
