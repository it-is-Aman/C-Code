// average of 3 num
// #include <stdio.h>
// float proto(int a,int b,int c);

// int main(){

// float a,b,c;
// printf("enter value of a\n");
// scanf("%f",&a);
// printf("enter value of b\n");
// scanf("%f",&b);
// printf("enter value of c\n");
// scanf("%f",&c);

// printf("your average is:%.2f",proto(a,b,c));
//     return 0;
// }

// float proto(int a,int b,int c){
//     float z;
//     z=(float)(a+b+c)/3;
//     return z;

// for temp
// #include <stdio.h>
// int proto(int num);
// int main()
// {
//     int num;
//     printf("enter C");
//     scanf("%d", &num);
//     printf("your %dC changes to %dF", num, proto(num));
//     return 0;
// }
// int proto(int num)
// {
//     int f;
//     f = (num * 9/5) + 32 ;
//     return f;
// }

// for mass
// #include <stdio.h>
// float proto(float num);
// int main()
// {
//     int num;
//     printf("enter mass");
//     scanf("%d", &num);
//     printf("your force is:%.2f", proto(num));
//     return 0;
// }
// float proto(float num)
// {
//     int f;
//     f = num*9.8 ;
//     return f;
// }

// sum of n using fubionacci series
// #include <stdio.h>
// int proto(int num);
// int main()
// {
//     int num;
//     printf("enter number");
//     scanf("%d", &num);
//     printf("your fubionacci series sum is:%d", proto(num));
//     return 0;
// }
// int proto(int num)
// {
//     int sum;
//     if (num == 0)
//     {
//         return 0;
//     }
//     else if (num == 1)
//     {
//         return 1;
//     }
//     else
//         sum = proto(num - 1) + proto(num - 2);
//     return sum;
// }

// sum of recursion n number
// #include <stdio.h>
// int proto(int num);
// int main()
// {
//     int num;
//     printf("enter your num\n");
//     scanf("%d", &num);
//     printf("sum of %d is :%d", num, proto(num));

//     return 0;
// }
// int proto(int num)
// {
//     int sum;
//     if (num == 0 || num == 1)
//     {
//         return 1;
//     }
//     else
//         sum = num + proto(num - 1);
//     return sum;
// }

// to print (*) in add up form
// #include <stdio.h>
// void proto(int num);
// int main()
// {
//     int num;
//     printf("enter your number for how many lines of * you want to print\n");
//     scanf("%d", &num);
//     proto(num);
//     return 0;
// }
// void proto(int num)
// {
//     if (num == 1)
//     {
//         printf("*\n");
//         return;
//     }

//     else
//     proto(num - 1);
//     for (int i = 0; i < (2 * num - 1); i++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }
