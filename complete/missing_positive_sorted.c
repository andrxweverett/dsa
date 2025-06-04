#include <stdio.h>


void missing(){
    int arr[6] = {2,4,1,6,7,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp; 



    for (int i = 0; i < size; i++){
	    if (arr[i] <= 0){ //handle 0's and negative numbers
		continue;
	    }
	for (int j = 0; j < size; j++){
            if (arr[i] < arr[j]){
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	    }
	}
    }

    for (int i = 0; i < size ; i++){
	    if (arr[i] == i + 1){
                continue; 
	    }
	    else if (arr[i] != i + 1){
              printf("Answer: %d\n",i+1); 
	      break;
	    }
    }
}



int main(){
    missing();
}
