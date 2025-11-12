@@ -0,0 +1,13 @@
#include<stdio.h>
int main(){

    int n,fact=1,i;
    printf("Enter a number-> ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        fact=fact*(n-i);
    }
    printf("fact=%d",fact);
    return 0;
}
