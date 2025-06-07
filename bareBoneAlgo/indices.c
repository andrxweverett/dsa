#include <stdio.h>


void foo(){
    int arr[4] = {3,1,2,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp; 
    for (int i = 0; i < size - 1; i++){
       temp = arr[i];
       arr[i] = arr[i-1];
       arr[i-1] = temp;
    }
    printf("%d\n",arr);
}


int main(){
    foo();
}
