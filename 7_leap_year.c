@@ -0,0 +1,14 @@
#include<stdio.h>
int main(){
    int year;
    printf("Enter the current year-> ");
    scanf("%d",&year);
    if(year%4==0){
        printf("%d is leap year",year);
    }
    else{
        printf("%d is not leap year",year);

    }
    return 0;
}
