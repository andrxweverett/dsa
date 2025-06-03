#include <stdio.h>


void secondMinElement(){
    printf("Please enter your arr size");
    int a;
    while (scanf("%d",&a)!=1){
         printf("please enter a number");
	 scanf("%*s");
    }
    int arr[a];
    printf("please enter the array numbers");
    for (int i = 0; i < a; i++){
	scanf("%d",&arr[i]);
    }
    int temp = arr[0];
    int second_temp;
    for (int i = 0; i < a; i++){
	if (arr[i] < temp){
	    second_temp = arr[i];
	    temp = arr[i];
	}
	else if (arr[i] > temp && arr[i] < second_temp){
             second_temp = arr[i];
	}
    }
    printf("The second minimum element is %d\n",second_temp);
}



int main(){
    secondMinElement();
}
