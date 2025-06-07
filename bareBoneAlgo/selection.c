#include <stdio.h>

void foo(){
    int arr[] = {-5,-6,0,-2,8,-1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp;
    for (int i = 0; i < size; i++){
	    int minIndex = i;
	for (int j = i + 1; j < size; j++){
		if (arr[j] < arr[minIndex]){
			minIndex = j;
		}
	}
	if (minIndex != i){
	   temp = arr[i];
	   arr[i] = arr[minIndex];
	   arr[minIndex] = temp;
	}
    }
    for (int k = 0; k < size; k++){
	printf("%d\n",arr[k]);
    }
}


int main(){
    foo();
}
