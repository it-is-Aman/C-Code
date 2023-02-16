#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int num, guess, turn = 1;
    srand(time(0));
    num = rand() % 100 + 1;

    do
    {
        printf("enter your number\n");
        scanf("%d", &guess);
        if (guess > num)
        {
            printf("choose smaller number\n");
        }
        else if (guess < num)
        {
            printf("choose larger number\n");
        }
        else
        {
            printf("you choose the right one\n");
            printf("in %d turns\n", turn);
        }
        turn++;
    } while (guess != num);
    return 0;
}
