@@ -0,0 +1,16 @@
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 1st number->");
    scanf("%d",&a);

    printf("Enter 1st number->");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    

    printf("Swap is->%d %d",a,b);
    return 0;
}
