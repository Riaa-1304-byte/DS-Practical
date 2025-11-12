@@ -0,0 +1,10 @@
#include<stdio.h>
int main(){
    int r;
    float area;
    printf("Enter the radious of the circle->");
    scanf("%d",&r);
    area=3.14*r*r;
    printf("Area for radious %d circle is->%f",r,area);
    return 0;
}
