#include <stdio.h>
int main()
{
    // multipilation of n loop
    // int num;
    // int i = 10;
    // printf("your table num\n");
    // scanf("%d", &num);

    // while (i > 0)
    // {
    //     printf("%d X %d = %d\n", i, num, i * num);
    //     i--;
    // }

    // sum of first 10 number
    // int i = 0, sum = 0, num = 10;

    // while (i <= num)
    // {
    //     sum += i;
    //     i++;
    // }
    // printf("sum is %d\n", sum);

    // sum of multiplication of 10
    // int i = 1, num = 10, sum;
    // while (i <= num)
    // {
    //     sum = i * num;
    //     i++;
    // }
    // printf("sum is %d", sum);

    // table of 8
    // int i, num;
    // for (i = 1; i <= 10; i++)

    // {
    //     printf("8X%d = %d\n", i, 8 * i);
    // }

    // sum of first 20 num
    // int i, sum = 0;
    // for (i = 1; i <= 20; i++)
    // {
    //     sum += i;
    // }
    // printf("sum of first 20 num is %d", sum);

    // factorial of 10
    // int i, sum = 1;
    // for (i = 1; i <= 10; i++)
    // {
    //     sum *= i;
    // }
    // printf("factorial of 10 is %d", sum);

    // sum of table 10
    // int i, sum, num = 10;
    // for (i = 1; i <= 10; i++)
    // {
    //     sum = 10 * i;
    // }
    // printf("sum of table of 10 is%d", sum);

    // check prime number
    int i, num,prime=1;
    printf("enter your number\n");
    scanf("%d", &num);

    for (i = 2; i < num; i++)
    {

        if (num % i == 0)
        {
            prime=0;
            break;
        }
    }
    if (prime==0)
    {
        printf("%d is not a prime number", num);
    }
    else
        printf("%d is a prime number", num);

    return 0;
}
