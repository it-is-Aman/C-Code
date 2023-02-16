#include <stdio.h>
int main()
{
    int name;
    int code;
    printf("Welcometo our new program\n");
    scanf("%d", &name);

    if (name == 11)
    {
        printf("welcome beignear");
    }
    else if (name == 12)
    {
        printf("welcome intemidate");
    }
    else if (name == 786)
    {
        printf("welcome to our secret program\n");
        printf("enter your code\n");
        scanf("%d", &code);
        if (code == 7860)
        {
            printf("your username is unknown 1\n");
            printf("your work is to pet you pet\n");
        }
        else if (code == 1324)
        {
            printf("your username is unknown 2\n");
            printf("your work is to walk along with our pet 1\n");
        }
        else
        {
            printf("kindly enter your code");
        }
    }
    else
    {
        printf("sorry your number is not registered");
    }
    return 0;
}