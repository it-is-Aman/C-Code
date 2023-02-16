#include <stdio.h>
int main()
{
    int a, b, c,n;
    float total;
    printf("this is your report card\n");
    printf("enter your marks of a;\n");
    scanf("%d", &a);

    printf("enter your marks of b;\n");
    scanf("%d", &b);

    printf("enter your marks of c;\n");
    scanf("%d", &c);
    total = (a + b + c)/3;

    if (total <= 5 || (a <= 3) || b <=3 || c <= 3)
    {
        printf("you are fail %f\n", total);
    }
    else
        printf("you are pass %f\n", total);

    if(total <= 5 && a<= 4 && b<=4 && !(c<=6))
    printf("you are an average",total);

    else
    printf("good start",total);

    (total < 5)? printf("marks is less then 5") : printf("marks is more then 5");

    printf("rate our app ");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
        printf("not like app");
        break;
        case 2:
        printf("not bad app");
        break;
        case 3:
        printf("good app");
        break;
        case 4:
        printf("perfect app");
        break;
        case 5:
        printf("awesome app");
        break;
    }

    return 0;
}