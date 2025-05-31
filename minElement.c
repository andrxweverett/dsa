#include <stdio.h>



void minElement(){


    int arr[8];
    int res;
    printf("Please insert your array 8 elements");
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++){
       printf("please insert %d more ", i+1);
       scanf("%d",&arr[i]);
    }

    int curr = arr[0];
    int temp; 
    for (int i = 0; i < size; i++){
       for (int j = i + 1; j < size; j++){
            if (arr[i] > arr[j]){
                temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	    }
       }
       printf("%d\n",arr[i]);
    }
    printf("%d\n",arr[0]);
}



int main(){
   minElement();
}
