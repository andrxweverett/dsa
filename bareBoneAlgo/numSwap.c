#include <stdio.h>


void foo(){
    int arr[] = {64,25,12,22,11};
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; i++){
	int minIndex = i; 
       for (int j = i + 1; j < size; j++){
           if (arr[j] < arr[minIndex]){
		   minIndex = j; 
	   }
       }
    if (minIndex != i){
        int temp = arr[i];
	arr[i] = arr[minIndex];
	arr[minIndex] = temp; 
    }
    int counter = 0;
    for (int k = 0; k < size; k++){
        printf("%d",arr[k]);
	counter++; 
    }
    printf("%d\n counter", counter);
 }
}


int main(){
    foo();
}
