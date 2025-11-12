#include<stdio.h>
int main(){
    int n,reverse=0,r;
    printf("Enter a number->");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }
    printf("Reverse is->%d",reverse);
    
    return 0;
}
