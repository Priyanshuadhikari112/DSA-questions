// WAP to find the 2nd minimum and maximum element in an array without sorting.

#include<stdio.h>

int main(){
    int size;
    printf("Enter the size of Array : ");
    scanf("%d",&size);

    int array[size];

    for(int i=0;i<size;i++){
        printf("Enter the element %d ",i+1);
        scanf("%d",&array[i]);
    }

    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }

    printf("\n");

    int min,max;
    max=array[0];
    min=array[0];

    int sec_min, sec_max;

    for(int i=0;i<size;i++){

        if(array[i]>max)
            max=array[i];

        if(array[i]<min)
            min=array[i];
    }

    sec_max = min;   
    sec_min = max;   

    for (int i = 0; i < 10; i++) {
        if (array[i] > sec_max) {
            sec_max = array[i];
        }
        if (array[i] < sec_min) {
            sec_min = array[i];
        }
    }

    printf("2nd Maximim =%d \n",sec_max);
    printf("2nd Minimum = %d\n ",sec_min);
}