// #include <stdio.h>
// int proto(int *a);

// int main()
// {
//     int a = 2;
//     int *x = &a;
//     printf("value of a is %d\n", a);
//     proto(&a);
//     printf("value of a will be %d\n", a);
//     return 0;
// }

// checking address in main and function
// #include <stdio.h>
// void proto(int a);

// int main()
// {
//     int a = 2;
//     printf("address is %u\n", &a);
//     proto(a);

//     return 0;
// }

// void proto(int a)
// {
//     printf("address will be %u\n", &a);
// }

// int proto(int *a)
// {
//     *a = 10;
// }

// using void function to change main value
// #include <stdio.h>
// void proto(int a, int b, float *x, float *y)
// {
//     *x = a + b;
//     *y = *x / 2;
// }
// int main()
// {
//     int a = 2, b = 4;
//     float sum, avg;
//     proto(a, b, &sum, &avg);
//     printf("sum and avg is %f and %f", sum, avg);

//     return 0;
// }