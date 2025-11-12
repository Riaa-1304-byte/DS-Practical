#include<stdio.h>
int main(){

    int a=0,b=1,n,sum=0,i;
    printf("Enter the nth term of the fibonacci series->");
    scanf("%d",&n);
    printf("The fibonacci series is->");
    printf("\n%d \n%d",a,b);

    for(i=2;i<n;i++){
        sum=a+b;
        printf("\n%d",sum);
        a=b;
        b=sum;
    }

    return 0;
