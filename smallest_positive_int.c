#include <stdio.h>



void smallest(){
    int arr[6] = {-1,2,4,5,6,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; i++){
	if (arr[i] < 0){
	    continue;
	}
    }
}


int main(){
    smallest();
}
