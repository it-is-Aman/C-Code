#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int proto(char guess, char comp)
{
    if (guess == comp)
    {
        return 0;
    }
    else if (guess == 'r' && comp == 'p')
    {
        return 1;
    }
    else if (guess == 'p' && comp == 'r')
    {
        return -1;
    }
    else if (guess == 'r' && comp == 's')
    {
        return 1;
    }
    else if (guess == 's' && comp == 'r')
    {
        return -1;
    }
    else if (guess == 's' && comp == 'p')
    {
        return 1;
    }
    else if (guess == 'p' && comp == 's')
    {
        return -1;
    }
}
int main()
{
    int num;
    char guess, com;
    srand(time(0));
    num = rand() % 100 + 1;
    if (num < 33)
    {
        com = 'r';
    }
    else if (num > 33 && num < 66)
    {
        com = 'p';
    }
    else
    {
        com = 's';
    }

    printf("Welcome, choose 'r' for rock and 'p' for paper and 's' for seccor \n");
    scanf("%c", &guess);
    int value = proto(guess, com);
    if (value > 0)
    {
        printf("you won \n");
    }
    else if (value < 0)
    {
        printf("you lose \n");
    }
    else
    {
        printf("draw \n");
    }
    printf("your %c and computer %c \n", guess, com);
    return 0;
}