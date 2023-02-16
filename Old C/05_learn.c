// Function

// #include <stdio.h>
// void poem1();
// void poem2();

// int main()
// {
//     int num;
//     printf("enter your code");
//     scanf("%d", &num);

//     if (num == 1)
//     {
//         poem1();
//     }
//     else
//     {
//         poem2();
//     }

//     return 0;
// }

// void poem1()
// {
//     printf("hello whats up you chose code: 1");
// }
// void poem2()
// {
//     printf("hello whats up you chose code: 2");
// }

// For input and output value in function

// #include <stdio.h>
// int proto(int a, int b, int c);                      //function prototype

// int main()
// {
//     int a,b,c ;
//     printf("enter your num\n");
//     scanf("%d", &a);
//     printf("enter your num\n");
//     scanf("%d", &b);
//     printf("enter your num\n");
//     scanf("%d", &c);

//     printf("area of cube is: %d\n", proto(a,b,c));   //function call

//         return 0;
// }

// int proto(int a, int b,int c)                        //function defination
// {
//     int x;
//     x=a*b*c;
//     return x;
// }

//factorial using recursion
// #include <stdio.h>
// int proto(int num);
// int main()
// {
//     int num;
//     printf("enter your number\n");
//     scanf("%d", &num);

//     printf("%d factorial is:%d", num, proto(num));
//     return 0;
// }
// int proto(int num)
// {
//     if (num == 1 || num == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         int x;
//         x = num * proto(num - 1);
//         printf("your function comes to:%d\n",x);  //here does not show 4*proto(3) because its go to find the proto(4,3.2,1) value then if it find the value of proto(1) so its show the nearst multiplication and then to higher like 1or2or3or4 factorial
//         return x;
//     }
// }