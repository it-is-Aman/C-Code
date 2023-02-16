#include<stdio.h>

int main()
{
    // so this is our first c program
    int radius,height;
    float pi = 3.14;
    printf("what's the radius: \n");
    scanf("%d" , &radius); 
    printf("what's the height: \n");
    scanf("%d", &height);
    printf("the CSA of cylinder is: %f", 2*pi*radius*height);
    return 0;
}