@@ -0,0 +1,17 @@
#include<stdio.h>
int main(){

    int a,b,largest;
    printf("Enter 1st number->");
    scanf("%d",&a);
    printf("Enter 2nd number->");
    scanf("%d",&b);
    if(a>b){
        printf("%d is largest",a);

    }
    else{
       printf("%d is largest",b); 
    }
    return 0;
}
