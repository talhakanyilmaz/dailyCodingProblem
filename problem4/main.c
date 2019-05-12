#include<stdio.h>
#include<stdlib.h>

int bubble_sort(int *array, int a){
	int temp, j, i;
	for(j = 0; j < a; j++){
		i = 0;
		for(i = 0; i < a - 1; i++){
			if(array[i] > array[i + 1]){
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
	return array[a - 1];
}

int findMissing(int value, int *array){
	if(*array == value)
		return value + 1;
	else if(*(array + 1) != *array + 1 && *array > 0)
		findMissing(*array, array);
	
	else
		findMissing(value, ++array);
}

int main(){
	int array[10] = {-12, 4, 1, 5, 6, 3, 7, 2, 0, -2};
	int i, num = bubble_sort(array, 10);
	printf("%d\n", findMissing(num, array));
	return 0;
}
