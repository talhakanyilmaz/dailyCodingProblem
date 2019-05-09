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

