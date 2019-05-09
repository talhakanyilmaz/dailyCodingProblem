#include<stdio.h>
#include<stdlib.h>

int *createProductsByDivision(int array[]){
	int i, prod = 1;
	static int new_array[5];
	for(i = 0; i < 5; i++){
		prod = prod * array[i];
	}
	for(i = 0; i < 5; i++){
		new_array[i] = prod / array[i];
	}
	return new_array;
}

int *createProductsByMultiplication(int array[]){
	int i, j;
	static int new_array[5] = {1, 1, 1, 1, 1};
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(i != j) new_array[i] = new_array[i] * array[j];
		}
	}
	return new_array;
}

int main(){
	int array[5] = {1, 2, 3, 4, 5}, i;
	int *new = createProductsByMultiplication(array);
	for(i = 0; i < 5; i++){
		printf("%d\t", new[i]);
	}		
	printf("\n");
	return 0;
}
