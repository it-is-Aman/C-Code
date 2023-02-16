// pointer

// #include <stdio.h>
// int main(){
// int a=12,b=45;
// int *x;
// x=&a;
// int *y=&b;
// int **p=&x;
// printf("the value of a is %d\n",**p);
// printf("the value of a and b is:%d and %d\n",a,b);
// printf("the value of a and b is:%d and %d\n",*x,*y);
// printf("the address of a and b is:%u and %u\n",&a,&b);
// printf("the address of a and b is:%u and %u\n",x,y);
// printf("the value of p is:%d,%d\n",*p,*(&x));
// printf("the address of p is:%u\n",&p);
// printf("what p store:%d\n",p);
// printf("the address of x is:%u\n",&x);
// printf("what x store:%d\n",x);

// return 0;
// }

// function call by value and reference
// #include <stdio.h>
// void proto(int a, int b);
// void proto2(int *a, int *b);

// int main()
// {
//     int a, b;
//     a = 2, b = 4;
//     printf("before swap %d,%d\n", a, b);
//     proto(a, b);
//     printf("after swap %d,%d\n", a, b);
//     proto2(&a, &b);
//     printf("after swap %d,%d\n", a, b);

//     return 0;
// }
// void proto(int a, int b)
// {
//     int space;
//     space = a;
//     a = b;
//     b = space;
// }
// void proto2(int *a, int *b)
// {
//     int space;
//     space = *a;
//     *a = *b;
//     *b = space;
// }