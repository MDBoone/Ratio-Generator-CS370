#include <stdlib.h>
#include <stdio.h>

int generator(int rand, int lower, int upper){
	return ((rand % (upper - lower) + lower));
}

int get_iteration_no(int rand){
	int result = generator(rand, 50, 100);
	return result;
}

int get_arr_size(int rand){
	int result = generator(rand, 100, 150);
	return result;
}

char get_arr_val(int rand){
	int num = generator(rand, 65, 91);
	char character = (char)num;
	return character;
}

float ratio(char *arr, int size, int *maxCountPointer){
	int consts = 0;
	int vows = 0;
	for(int i = 0; i < size; i++){
		if(arr[i] == "A" || arr[i] == "E" || arr[i] == "I" || arr[i] == "O" || arr[i] == "U"){
			vows++;
		}
		else{
			consts++;
		}
	}
	if(&maxCountPointer < vows){
		maxCountPointer = vows;
	}

	return vows/consts;
}

double get_running_ratio(){
	int maxCount = 0;
	int maxIterations = 0;
	maxIterations = get_iteration_no(rand());
		while (maxIterations > 0){
		int sizeOfArr = get_arr_size(rand());
		int *ptr = (int*)malloc(sizeOfArr * sizeof(int));
		for(int i = 0; i < sizeOfArr; i++){
			ptr[i] = get_arr_val(rand());
		} 
		int *maxCount = &maxCount;
		ratio(ptr, sizeOfArr, *maxCount);
		maxIterations--;
	}
	printf("Number of iterations: d\n", maxIterations);
}

