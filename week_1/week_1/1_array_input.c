#include<stdio.h>
int main(){

    int size=1,arr[size],i;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("\nEnter number%d-> ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array is->");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
