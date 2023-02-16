#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// factorial
//  int main()
//  {

//     int num, b;
//     printf("enter your number\n");
//     scanf("%d", &num);
//     b = fac(num);
//     printf("%d", b);
//     return 0;
// }
// int fac(int a)
// {
//     int f = 1;
//     for (int i = 1; i <= a; i++)
//     {
//         f *= i;
//     }
//     return f;
// }

// factorial using recursion
// int main()
// {
//     int num, b;
//     printf("enter your number\n");
//     scanf("%d", &num);
//     b = fac(num);
//     printf("%d", b);
//     return 0;
// }
// int fac(int a)
// {
//     int f;
//     if (a == 1 || a == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         f = a * fac(a - 1);
//     }
//     return f;
// }

// power of number
//  int main()
//  {

//     int num, b, a;
//     printf("enter your number and power\n");
//     scanf("%d%d", &num, &a);
//     b = deg(num, a);
//     printf("%d", b);
//     return 0;
// }
// int deg(int a, int b)
// {
//     int c = pow(a, b);
//     return c;
// }

// decimal to roman
//  int main()
//  {
//      int num,a,b,c,d;
//      printf("enter your year");
//      scanf("%d",&num);
//      a=num%10;
//      num/=10;
//      b=num%10;
//      num/=10;
//      c=num%10;
//      num/=10;
//      d=num;
//      rom(a,b,c,d);

//     return 0;
// }
// void rom(int a,int b,int c,int d)
// {
//     while(d>0){
//         printf("m");
//         d--;
//     }
//     while(c>=5){
//         printf("d");
//         c-=5;
//     }
//     while(c>=1){
//         printf("c");
//         c--;
//     }
//     while(b>=5){
//         printf("l");
//         b-=5;
//     }
//     while(b>=1){
//         printf("x");
//         b--;
//     }
//     while(a>=5){
//         printf("v");
//         a-=5;
//     }
//     while(a>=1){
//         printf("i");
//         a--;
//     }
// }

// leap year
// int main()
// {
//     int num;
//     printf("enter your year");
//     scanf("%d", &num);
//     leap(num);
//     return 0;
// }
// void leap(int a)
// {
//     if ((a%100==0&&a%400==0)||(a%100!=0&&a%4==0))
//     {
//         printf("leap year");
//     }
//     else
//         printf("not a leap year");
// }

// prime factor
// int main()
// {
//     int num;
//     printf("enter your number");
//     scanf("%d", &num);
//     prime(num);
//     return 0;
// }
// void prime(int a)
// {
//     for (int i = 2; i <= a;)
//     {
//         if (a % i == 0)
//         {
//             printf("%d ", i);
//             a /= i;
//         }
//         else{
//             i++;
//         }
//     }
// }

// find values in function and print to main
//  int main(){
//      int n1,n2,n3;
//      printf("enter your value\n");
//      scanf("%d%d%d",&n1,&n2,&n3);
//      printf("sum is %d\n",sum(n1,n2,n3));
//      printf("avg is %d\n",avg(n1,n2,n3));
//      return 0;
//  }
//  int sum(int a,int b,int c){
//      int s=a+b+c;
//      return s;
//  }
//  int avg(int a,int b,int c){
//      int s=(a+b+c)/3;
//      return s;
//  }

// recursion in digit
// int main()
// {
//     int num;
//     printf("enter your number");
//     scanf("%d", &num);
//     printf("sum is %d", sum(num));

//     return 0;
// }
// int sum(int a)
// {
//     int r, s = 0;
//     if (a > 0)
//     {
//         r = a % 10;
//         s = r + sum(a / 10);
//     }
//     return s;
// }

// prime factor using recurrsion
// int main()
// {
//     int num;
//     printf("enter your number");
//     scanf("%d", &num);
//     pri(num,2);
//     return 0;
// }
// int pri(int a,int i)
// {

//     if (i <= a)
//     {
//         if (a % i == 0)
//         {
//             printf("%d", i);
//             a /= i;
//         }
//         else
//         {
//             i++;
//         }
//         pri(a,i);
//     }
//     return 0 ;
// }

// fibonacci using recursion
// int main()
// {
//     int num;
//     printf("etner your terms\n");
//     scanf("%d", &num);
//     printf("sum is %d\n", fib(num));
//     return 0;
// }
// int fib(int a)
// {
//     int s;
//     if (a == 0)
//     {
//         return 0;
//     }
//     else if (a == 1 || a == 2)
//     {
//         return 1;
//     }
//     else
//     {
//         s = fib(a - 2) + fib(a - 1);
//     }
//     return s;
// }

// number to binery
//  int main(){
//      int num;
//      printf("enter your number");
//      scanf("%d",&num);
//      bin(num);
//      return 0;
//  }
//  void bin(int a){
//      int r;
//      while(a>0){
//          r=a%2;
//          printf("%d",r);
//          a/=2;
//      }
//  }

// sum of 25 number using recursion
//  int main(){
//      int num;
//      printf("sum of 25 number %d",sum(25));
//      return 0;
//  }
//  int sum(int a){
//      int s;
//      if(a==1){
//          return 1;
//      }
//      else{
//      s=a+sum(a-1);
//      }
//      return s;
//  }

// int main(){
//     int x,y,z;
//     printf("enter your variables\n");
//     scanf("%d%d%d",&x,&y,&z);
//     printf("before circuler shift x=%d y=%d z=%d \n",x,y,z);
//     shift(&x,&y,&z);
//     printf("after circuler shift x=%d y=%d z=%d \n",x,y,z);
//     shift(&x,&y,&z);
//     printf("after again circuler shift x=%d y=%d z=%d \n",x,y,z);
//     return 0;
// }
// void shift(int *a,int *b,int *c)
// {
//     int l;
//     l=*a;
//     *a=*b;
//     *b=*c;
//     *c=l;
// }

// are of triangle
// int main()
// {
//     float a, b, c,are,s;
//     printf("enter triangle sides\n");
//     scanf("%f%f%f", &a, &b, &c);
//     s = (a + b + c) / 2;
//     are=sqrt(s * (s - a) * (s - b) * (s - c));
//     printf("area is %f", are);
//     return 0;
// }

//area,distance,point lie inside of a triangle or not
// int distance(int a,int b,int c,int d);
// int area(int x1,int y1,int x2,int y2,int x3,int y3);
// int area2(int x1,int y1,int x2,int y2,int x3,int y3,int x,int y);
// int main(){
//     int x1,x2,y1,y2,x3,y3,d1,d2,d3,x,y,a,a2;
//     printf("enter your triangle points x1,y1,x2,y2,x3,y3\n");
//     scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
//     d1=distance(x1,y1,x2,y2);
//     d2=distance(x3,y3,x1,y1);
//     d3=distance(x3,y3,x2,y2);
//     a=area(x1,y1,x2,y2,x3,y3);
//     printf("distance between 1 to 2 is %d\n",d1);
//     printf("distance between 1 to 3 is %d\n",d2);
//     printf("distance between 2 to 3 is %d\n",d3);
//     printf("area of a triangle is %d\n",a);
//     printf("enter point to check if it lie inside the triangle\n");
//     scanf("%d%d",&x,&y);
//     a2=area2(x1,y1,x2,y2,x3,y3,x,y);
//     if(a2==1){
//         printf("inside");
//     }
//     else{
//         printf("outside");
//     }
    
    
//     return 0;
// }
// int distance(int a,int b,int c,int d){
//     int p,s;
//     p=pow((d-c),2)+pow((b-a),2);
//     // p=abs(p);
//     s=sqrt(abs(p));
//     return s;
// }
// int area(int x1,int y1,int x2,int y2,int x3,int y3){
//     int a=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
//     return abs(a);
// }
// int area2(int x1,int y1,int x2,int y2,int x3,int y3,int x,int y){
//     int a,a1,a2,a3;
//     a=area(x1,y1,x2,y2,x3,y3);
//     a1=area(x,y,x2,y2,x3,y3);
//     a2=area(x1,y1,x,y,x3,y3);
//     a3=area(x1,y1,x2,y2,x,y);
//     return (a==a1+a2+a3);
// }

//find greatest common divisior
// int divisior(int n,int d);
// int main(){
//     int n,d,q;
//     printf("enter your number and diviser\n");
//     scanf("%d%d",&n,&d);
//     printf("gretest common divisior is %d",divisior(n,d));
// return 0;
// }
// int divisior(int n,int d){
//     int r;
//     while(d>0){
//         r=n%d;
//         n=d;
//         d=r;
//     }
//     return n;
// }