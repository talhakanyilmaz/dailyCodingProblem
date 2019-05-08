// Daily Coding Problem
// Problem #1
// asked by Google.
// Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
// For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17. 
//

#include<stdio.h>
#include<stdbool.h>

bool addUpToK(int array[], int k){
	int i, j;
	for(i = 0; i < 3; i++){
		for(j = i + 1; j < 4; j++){
			if(array[i] + array[j] == k){
				return true;
			}
		}
	}
	return false;
}

int main(){
	int array[4] = {10, 15, 3, 7}, k = 18;
	if(addUpToK(array, k)) printf("1\n");
	else printf("0\n");
	return 0;
}

