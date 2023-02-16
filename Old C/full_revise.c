// Variable , contonents , keyword      1

// #include<stdio.h>
// int main(){
//     int r;
//     float pi=3.14;
//     printf("enter value for radius of circle \n");
//     scanf("%d",&r);
//     printf("your curcumference is %f \n",2*pi*r);
//     return 0;
// }

//  #include<stdio.h>
//  int main(){
//      int r,h;
//      float pi=3.14;
//      printf("enter r,h\n");
//     scanf("%d%d",&r,&h);
//     printf("area of circle is %f\n",pi*r*r);
//     printf("vloume of cylinder is %f\n",pi*r*r*h);
//      return 0;
//  }

// #include<stdio.h>
// int main(){
//     int c;
//     printf("enter C\n");
//     scanf("%d",&c);
//     printf("F will be %d\n",(c * 9/5) + 32);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int p,r,t;
// printf("enter your Simple intrest values\n");
// printf("1st princple then intrest rate then time\n");
// scanf("%d%d%d",&p,&r,&t);
// printf("your SI is %d",(p*r*t)/100);
//     return 0;
// }

// Instructions and Operators        2

// #include<stdio.h>
// int main(){

// printf("3.0/8-2\n");
// float a=3.0/8-2;
// printf("%f\n",a);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int num;
// printf("num is divisible by 97 or not");
// scanf("%d",&num);
// if(97%num==0){
//     printf("yes divisible");
// }
// else{
//     printf("not divisible");
// }
//     return 0;
// }

// Conditional Instructions  3

// #include<stdio.h>
// int main(){
// int a,b,c;
// printf("enter your marks out of 10\n");
// scanf("%d%d%d",&a,&b,&c);
// int total=(a+b+c);
// int marks=((total*100)/30);
// if((marks>=40)&&(a>=3)&&(b>=3)&&(c>=3)){
//     printf("you passed");
// }
// else{
//     printf("better luck next time");
// }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int num;
//     int tax;
//     printf("welcome, income tax calulator\n");
// printf("enter your income\n");
// scanf("%d",&num);
// int per=num/100;
// if((num>250000)&&(num<500000)){
//     tax=per*5;
//     }
//     if((num>500000)&&(num<1000000)){
//         tax=(per*20)+(per*5);
//     }
//     else{
//         tax=(per*30)+(per*20);
//     }
//     printf("your income tax is : %d",tax);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int num;
//     printf("enter year");
//     scanf("%d",&num);
//     if(num%400==0){
//         printf("leap year");
//     }
//     else if(num%100==0){
//         printf("not leap year");
//     }
//     else if(num%4==0){
//         printf("leap year");
//     }
//     else{
//         printf("not a leap year");
//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char num;
// printf("enter char");
// scanf("%c",&num);
// if((num>='a')&&(num<='z')){
//     printf("lower case");
// }
// else {
//     printf("upper case");
// }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num1, num2, num3, num4;
//     printf("enter your numbers");
//     scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
// if((num1)>((num2),(num3),(num4))){
//         printf("greater num is %d", num1);
// }
// else if((num2)>((num1),(num3),(num4))){
//         printf("greater num is %d", num2);
// }
// else if((num3)>((num2),(num1),(num4))){
//         printf("greater num is %d", num3);
// }
// else if((num4)>((num2),(num3),(num1))){
//         printf("greater num is %d", num4);
// }
//     return 0;
// }

// Loop Control Instructions   4

// #include<stdio.h>
// int main(){
// int num;
// printf("Multiplication table of ");
// scanf("%d",&num);
// for(int i=0;i<10;i++){
//     printf("%d X %d = %d \n",num,i+1,num*(i+1));
// }
//     return 0;
// }

// #include<stdio.h>
// int main(){
// int num;
// printf("Multiplication table of ");
// scanf("%d",&num);
// for(int i=9;i>-1;i--){
//     printf("%d X %d = %d \n",num,i+1,num*(i+1));
// }
//     return 0;
// }

// #include<stdio.h>
// int main(){
// int num,sum=0;
// printf("enter num");
// scanf("%d",&num);
// for(int i=1;i<=num;i++){
//     sum=sum+i;
// }
// printf("sum of first %d is = %d",num,sum);
//     return 0;
// }

// #include<stdio.h>
// int main(){
// int num,fac=1;
// printf("enter num");
// scanf("%d",&num);
// for(int i=1;i<=num;i++){
// fac=fac*i;
// }
// printf("factorial of %d is = %d",num,fac);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num, prime = 1;
//     printf("enter num");
//     scanf("%d", &num);
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             prime = 0;
//         }

//     }
//     if (prime == 1)
//     {
//         printf("%d is a prime number",num);
//     }
//     else if (prime == 0)
//     {
//         printf("%d is not a prime number",num);
//     }
//     return 0;
// }

//  Functions & Recursion 5

// #include<stdio.h>
// int sum(int a,int b,int c){
// int z=a+b+c;
// printf("sum is %d",z);
// }
//     int main(){
// int a,b,c;
// printf("enter number");
// scanf("%d%d%d",&a,&b,&c);
// sum(a,b,c);

//     return 0;
// }

// #include<stdio.h>
// int temp(int a){
// int f=(a * 9/5) + 32;
// printf("temp is %d",f);
// }
//     int main(){
// int a;
// printf("enter number");
// scanf("%d",&a);
// temp(a);
//     return 0;
// }

// #include<stdio.h>
// int force(int a){
// int f=a*9.8;
// printf("force is %d",f);
// }
//     int main(){
// int a;
// printf("enter number");
// scanf("%d",&a);
// force(a);
//     return 0;
// }

// #include <stdio.h>
// int fact(int x)
// {
//     int n;
//     if ((x == 1) || (x == 0))
//     {
//         return 1;
//     }
//     else
//     {
//         n = x * fact(x - 1);
//     }
//     return n;
// }
// int main()
// {
//     int x;
//     printf("enter number \n");
//     scanf("%d", &x);
//     int n = fact(x);
//     printf("factorial is %d \n", n);
//     return 0;
// }
// #include <stdio.h>
// int fact(int x)
// {
//     int n;
//     if ((x == 1) || (x == 0))
//     {
//         return 1;
//     }
//     else
//     {
//         n = x * fact(x - 1);
//     }
//     return n;
// }
// int main()
// {
//     int x;
//     printf("enter number \n");
//     scanf("%d", &x);
//     int n = fact(x);
//     printf("factorial is %d \n", n);
//     return 0;
// }

// #include <stdio.h>
// int fib(int x)
// {
// int n;
//     if (x == 0)
//     {
//         return 0;
//     }
//     if (x == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         n = fib(x-1) + fib(x - 2);
//     }
//     return n;
// }
// int main()
// {
//     int x;
//     printf("enter number \n");
//     scanf("%d", &x);
//     int n = fib(x);
//     printf("fib sum is %d \n", n);
//     return 0;
// }

// #include <stdio.h>
// int fib(int x)
// {
//     int n;
//     if(x==0){
//         return 0;
//     }
//     else
//     n=x+fib(x-1);
//     return n;
// }
// int main()
// {
//     int x;
//     printf("enter number \n");
//     scanf("%d", &x);
//     int n = fib(x);
//     printf("sum is %d \n", n);
//     return 0;
// }

// #include <stdio.h>
// void star(int x)
// {
//     if (x == 1)
//     {
//         printf("*\n");
//     }
//     else
//     {
//         star(x - 1);
//         {
//             for (int i = 0; i < (2*x - 1); i++)
//             {
//                 printf("*");
//             }
//                 printf("\n");
//         }
//     }
// }
// int main()
// {
//     int x;
//     printf("enter number \n");
//     scanf("%d", &x);
//     star(x);
//     return 0;
// }

// Pointers 6

// #include<stdio.h>
// int main(){
// int a=4;
// int *ptr=&a;
// printf("address is %d\n",ptr);
// printf("address is %d\n",&a);
// printf("value is %d\n",a);
// printf("value is %d\n",*ptr);
// printf("value is %d\n",*(&a));
//     return 0;
// }

// #include<stdio.h>
// void proto(int *ptr){
// printf("address is %d\n",ptr);
// }
// int main(){
// int a=4;
// int *ptr=&a;
// printf("address is %d\n",ptr);
// proto(&a);
//     return 0;
// }

// #include<stdio.h>
// void proto(int *ptr){
//     *ptr=10;
// }
// int main(){
// int a=4;
// int *ptr=&a;
// printf("value is %d\n",a);
// proto(&a);
// printf("value is %d\n",a);
//     return 0;
// }

// #include<stdio.h>
// void proto(int *ptr1,int *ptr2,int *sum,int *avg){
// *sum=(*ptr1+*ptr2);
// *avg=*sum/2;
// }
// int main(){
// int a=2,b=4;
// int sum,avg;
// int *ptr1=&a;
// int *ptr2=&b;
// proto(ptr1,ptr2,&sum,&avg);
// printf("sum and avg is %d , %d",sum,avg);

//     return 0;
// }

// #include<stdio.h>
// int main(){
// int a=2;
// int *ptr1=&a;
// int **ptr2=&ptr1;

// printf("value of a is %d\n",a);
// printf("value of a is %d\n",*ptr1);
// printf("value of a is %d\n",**ptr2);

//     return 0;
// }

// Array 7

// #include<stdio.h>
// int main(){
// int num[10];
// int *ptr;
// num[0]=2;
// num[1]=3;
// num[2]=4;
// ptr=&num[0];
// printf("value of 1 is %d\n",*ptr);
// ptr++;
// ptr++;
// printf("value of 1 will be %d\n",*ptr);

//     return 0;
// }
// #include<stdio.h>
// int main(){
// int num[10];
// int n;
// printf("enter num\n");
// scanf("%d",&n);
// for(int i=0;i<10;i++){
//     num[i]=n*(i+1);
// }
// for(int i=0;i<10;i++){
//     printf("%d X %d = %d\n",n,i+1,num[i]);
// }
//     return 0;
// }
// #include<stdio.h>
// void reverse(int num[10],int n){
//     for(int i=9;i>=0;i--){
//     printf("%d X %d = %d\n",n,i+1,num[i]);
// }
// }
// int main(){
// int num[10];
// int n;
// printf("enter num\n");
// scanf("%d",&n);
// for(int i=0;i<10;i++){
//     num[i]=n*(i+1);
// }
// reverse(num,n);
//     return 0;
// }
// #include<stdio.h>
// void count(int num[10]){
//     int pos=0,neg=0;
//     for(int i=0;i<10;i++){
//         if(num[i]>0){
//             pos++;
//         }
//         else if(num[i]<0){
//             neg++;
//         }
//     }
//     printf("positive num are %d and negative are %d",pos,neg);
// }
// int main(){
// int num[10];
// printf("enter num\n");
// for(int i=0;i<10;i++){
// scanf("%d",&num[i]);
// }
// count(num);
//     return 0;
// }

// #include<stdio.h>
// int main(){
// int dim[2][2][3];
// for(int a=0;a<2;a++){
//        for(int b=0;b<2;b++){
//          for(int c=0;c<3;c++){
//              printf("enter value %d%d%d\n",a,b,c);
//              scanf("%d",&dim[a][b][c]);
//     }   
//     } 
//     }
//     for(int a=0;a<2;a++){
//        for(int b=0;b<2;b++){
//          for(int c=0;c<3;c++){
             
//              printf("value of %d%d%d is %d\n",a,b,c,dim[a][b][c]);
//     }   
//     } 
//     }
//     return 0;
// }

// #include<stdio.h>
// void table(int arr[],int num){
//     for(int i=0;i<10;i++){
//         arr[i]=num*(i+1);
//     }
//     for(int i=0;i<10;i++){
//         printf("%d X %d = %d\n",num,i+1,arr[i]);
//     }
// }
// int main(){
//     int a=3,num;
//     int mul[a][10];
//     printf("enter num");
//     scanf("%d",&num);
//     table(mul[a],num);
//     return 0;
// }

// #include<stdio.h>
// void proto(int *table,int n){                                  //you can give array to function like table[2][2] but not 3rd index because we give the specific value to function and want to change the 3rd index value 
// for(int i=0;i<10;i++){                                         //like for 2d arr[2][10] in proto(arr[2]) and 3d arr[2][3][10] in proto(arr[2][3]) but not the after value like"[10]"
//     table[i]=n*(i+1);                                          //when it comes to recieve value in function just write *ptr or arr[] if it for 1d or multi array
// }
// for(int i=0;i<10;i++){
//     printf("%d X %d = %d\n",n,i+1,table[i]);
// }
// }
// int main(){
//     int n;
//     int table[2][2][10];
//     printf("enter num\n");
//     scanf("%d",&n);
//     proto(table[0][0],n);
//     printf("enter num\n");
//     scanf("%d",&n);
//     proto(table[0][1],n);
//     printf("enter num\n");
//     scanf("%d",&n);
//     proto(table[1][0],n);
//     printf("enter num\n");
//     scanf("%d",&n);
//     proto(table[1][1],n);
//     return 0;
// }

// String 8

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[10];
//     char c;
// printf("enter name char by char\n");
//     for(int i=0;c!='\n';i++){
//         fflush(stdin);
//         scanf("%c",&c);
//         str[i]=c;
//     }
// printf("your name is %s",str);
// printf("enter name\n");
// scanf("%s",&str);
// printf("your name is %s",str);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[50];
// printf("enter name");
// scanf("%s",&str);
// int l=strlen(str);
// printf("length is %d",l);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// void proto(char *str,int m,int n){
//     int i;
// for(i=0;(i+m)<n;i++){
// str[i]=str[m+i];
// }
// str[i]='\0';
// }
// int main(){
//     char str[]="qwerty123456";
// proto(str,2,5);
// printf("%s",str);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[]="qwerty";
//     char str2[50];
//     strcpy(str2,str1);
//     printf("%s",str2);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// void enc(char *str){
//     for(int i=0;str[i]!='\0';i++){
//         str[i]++;
//     }
// }
// int main(){
//     char str1[]="qwerty123";
//     printf("%s\n",str1);
// enc(str1);
//     printf("%s\n",str1);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int occ(char *str,char c){
//     int n=0;
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]==c){
//             n++;
//         }
//     }
//     return n;
// }
// int main(){
//     char c;
//     char str1[]="qwerrrty123";
//     printf("enter char\n");
//     scanf("%c",&c);
// int l=occ(str1,c);
//     printf("occ is %d",l);
//     return 0;
// }

// #include<stdio.h>
// void check(char *str,char c){
//     int n=0;
//     for(int i=0;str[i]!='\0';i++){
        
//         if(str[i]==c){
//         n++;     
//         }
//     }
// if(n>0){
//     printf("yes there is a char\n");
// }   
// else if (n==0){
//     printf("sorry there is not a char\n");
// } 
// }
// int main(){
//     char c;
//     char str[]="qwerty123asd";
//     printf("enter char\n");
//     scanf("%c",&c);
//     check(str,c);
//     return 0;
// }

// Structure 9
// #include <stdio.h>
// #include <string.h>
//     struct vector{
//         int real;
//         int comp;
//         int sum;
//     };
//     void sumv(struct vector v1,struct vector v2){
//         v1.sum=v1.real+v2.real;
//         v2.sum=v1.comp+v2.comp;
//         printf("sum are %d and %d",v1.sum,v2.sum);
//     }
// int main(){
// struct vector v1,v2;
// v1.real=2;
// v1.comp=4;
// v2.real=3;
// v2.comp=3;
// sumv(v1,v2);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
//     struct vector{
//         int real;
//     };
// int main(){
// struct vector *ptr1,*ptr2,v1,v2;
// ptr1=&v1,ptr2=&v2;
// (*ptr1).real=2;
// (*ptr2).real=3;
// printf("value is %d\n",(*ptr1).real);
// printf("value is %d\n",ptr1->real);
// printf("value is %d\n",(*ptr2).real);
// printf("value is %d\n",ptr2->real);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
//     typedef struct complex{
//         int real;
//         int comp;
//     }com;
//     void display(com c1,com c2){
// printf("c1 real and comp are %d and %d\n",c1.real,c1.comp);
// printf("c1 real and comp are %d and %d\n",c2.real,c2.comp);
//     }
// int main(){
// com c1,c2;
// printf("enter for c1 real and comp\n");
// scanf("%d%d",&c1.real,&c1.comp);
// printf("enter for c2 real and comp\n");
// scanf("%d%d",&c2.real,&c2.comp);
// display(c1,c2);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
//     typedef struct bank{
//         char name[10];
//         int age;
//         int money;
//     }bank;
//     void display(bank a1,bank a2){
// printf("person 1 name and age and money are %s and %d and %d\n",a1.name,a1.age,a1.money);
// printf("person 2 name and age and money are %s and %d and %d\n",a2.name,a2.age,a2.money);
//     }
// int main(){
// bank a1={"qwerty",18,123123};
// bank a2={"asdfgh",22,789789};
// display(a1,a2);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// typedef struct day{
//     int day;
//     int month;
//     int year;

//     int sec;
//     int min;
//     int hour;
// }day;
// int proto(day d1,day d2){
//     if(d1.year>d2.year){
//         return 1;
//     }
//     else if(d1.year<d2.year){
//         return -1;
//     }
//     if(d1.month>d2.month){
//         return 1;
//     }
//     else if(d1.month<d2.month){
//         return -1;
//     }
//     if(d1.day>d2.day){
//         return 1;
//     }
//     else if(d1.day<d2.day){
//         return -1;
//     }
//     if(d1.hour>d2.hour){
//         return 1;
//     }
//     else if(d1.hour<d2.hour){
//         return -1;
//     }
//     if(d1.min>d2.min){
//         return 1;
//     }
//     else if(d1.min<d2.min){
//         return -1;
//     }
//     if(d1.sec>d2.sec){
//         return 1;
//     }
//     else if(d1.sec<d2.sec){
//         return -1;
//     }  
//     else{
//         return 0;
//     }
// }
// int main(){
// day d1={12,05,2020,25,45,8};
// day d2={10,05,2020,24,15,9};
// int n=proto(d1,d2);
// if(n==1){
//     printf("your 1st day is greater");
// }
// else if(n==-1){
//     printf("your 2nd day is greater");
// }
// else if(n==0){
//     printf("same");
// }
//     return 0;
// }

// File I/O 10

// #include<stdio.h>
// int main(){
//     int num;
//     FILE *fptr;
//     fptr = fopen("10asd.txt","r");
//     fscanf(fptr,"%d",&num);
//     printf("num is %d",num);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int num;
//     FILE *fptr;
//     fptr = fopen("10multiple.txt","w");
//     for(int i=0;i<10;i++){
//     fprintf(fptr,"%d X %d = %d\n",2,i+1,2*(i+1));
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int num;
//     char arr[50];
//     char c;
//     FILE *fptr1;
//     FILE *fptr2;
//     fptr1 = fopen("qwerty1.txt","r");
//     fptr2=fopen("qwerty2.txt","w");
//     do{
//     c=fgetc(fptr1);
//     fputc(c,fptr2);
//     fputc(c,fptr2);
//     }while(c!=EOF);
//     return 0;
// }

// #include<stdio.h>
// typedef struct empolyee{
//     char name[50];
//     int money;
// }acc;
// int main(){
//     FILE *fptr;
//     acc e1,e2;
//     printf("enter for 1 name and money\n");
//     scanf("%s%d",&e1.name,&e1.money);
//     printf("enter for 2 name and money\n");
//     scanf("%s%d",&e2.name,&e2.money);
//     fptr = fopen("employee.txt","w");
//     fprintf(fptr,"%s:",e1.name);
//     fprintf(fptr,"%d\n",e1.money);
//     fprintf(fptr,"%s:",e2.name);
//     fprintf(fptr,"%d\n",e2.money);
//     fclose(fptr);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     FILE *fptr;
//     int num;
//     fptr=fopen("fornuminput.txt","r");
//     fscanf(fptr,"%d",&num);
//     fptr=fopen("fornuminput.txt","w");
//     fprintf(fptr,"%d",2*num);
//     fclose(fptr);
//     return 0;
// }

// DMA 11

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr;
//     int num;
//     printf("enter value for how many number you want\n");
//     scanf("%d",&num);
//     ptr = (int*)malloc(num*sizeof(int));
//     for(int i=0;i<num;i++){
//         printf("enter for %d\n",i+1);
//         scanf("%d",&ptr[i]);

//     }
//     for(int i=0;i<num;i++){
//         printf("%d\n",ptr[i]);
//     }
    
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr;
//     int num;
//     printf("enter value for how many number you want\n");
//     scanf("%d",&num);
//     ptr = (int*)calloc(num,sizeof(int));
//     for(int i=0;i<num;i++){
//         printf("enter for %d\n",i+1);
//         scanf("%d",&ptr[i]);

//     }
//     for(int i=0;i<num;i++){
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr;
//     int num1=2;
//     int num2=4;
//     printf("you have 2 boxes\n");
//     ptr = (int*)calloc(num1,sizeof(int));
//     for(int i=0;i<num1;i++){
//         printf("enter for %d\n",i+1);
//         scanf("%d",&ptr[i]);

//     }
//     for(int i=0;i<num1;i++){
//         printf("%d\n",ptr[i]);
//     }

//     printf("you have 4 boxes\n");
//     ptr=realloc(ptr,num2*sizeof(int));
//     for(int i=0;i<num2;i++){
//         printf("enter for %d\n",i+1);
//         scanf("%d",&ptr[i]);

//     }
//     for(int i=0;i<num2;i++){
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr;
//     int num1=2;
//     int num2=4;
//     printf("you have 2 boxes\n");
//     ptr = (int*)malloc(num1*sizeof(int));
//     for(int i=0;i<num1;i++){
//         printf("enter for %d\n",i+1);
//         scanf("%d",&ptr[i]);

//     }
//     for(int i=0;i<num1;i++){
//         printf("%d\n",ptr[i]);
//     }

//     printf("you have 4 boxes\n");
//     ptr=realloc(ptr,num2*sizeof(int));
//     for(int i=0;i<num2;i++){
//         printf("enter for %d\n",i+1);
//         scanf("%d",&ptr[i]);

//     }
//     for(int i=0;i<num2;i++){
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr;
//     int n=5,num1=10,num2=15;
//     printf("table of 5 upto 10\n");
//     ptr=(int*)malloc(num1*sizeof(int));
//     for(int i=0;i<num1;i++){
//         ptr[i]=n*(i+1);
//     }
//     for(int i=0;i<num1;i++){
//         printf("%d X %d = %d\n",n,i+1,ptr[i]);
//     }
//     free(ptr);
//     ptr=(int*)malloc(num2*sizeof(int));
//     printf("table of 5 upto 15\n");
//     for(int i=0;i<num2;i++){
//         ptr[i]=n*(i+1);
//     }
//     for(int i=0;i<num2;i++){
//         printf("%d X %d = %d\n",n,i+1,ptr[i]);
//     }
//     return 0;
// }

// guess number

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main(){
//     int num,guess,turn=1;
//     srand(time(0));
//     num=rand()%100+1;
// printf("welcome to guess number game\n");
// printf("enter number b/w 1 to 100\n");
// do{
// scanf("%d",&guess);
//     if(guess>num){
//         printf("choose the smaller one\n");
//         }
//     else if(guess<num){
//         printf("choose the larger one\n");
//     }
//     else if(guess==num){
//         printf("good\n");
//         printf("you choose the right one in %d turns\n",turn);
//     }
//     turn++;
// }while(guess!=num);
//     return 0;
// }

//Rock paper sccisor game
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int result(char guess,char comp){
//     if(guess==comp){
//         return 0;
//     }
//     else if(guess =='r'&& comp =='p'){
//         return 1;
//     }
//     else if(guess =='p'&& comp =='r'){
//         return -1;
//     }
//     else if(guess =='s'&& comp =='p'){
//         return 1;
//     }
//     else if(guess =='p'&& comp =='s'){
//         return -1;
//     }
//     else if(guess =='r'&& comp =='s'){
//         return 1;
//     }
//     else if(guess =='s'&& comp =='r'){
//         return -1;
//     }
// }
// int main(){
//     int num;
//     char comp,guess;
//     srand(time(0));
//     num=rand()%100+1;
//     if(num<=33){
// comp='r';
//     }
//     else if(num>=33 && num<=66){
// comp='p';
//     }
//     else if(num>=66){
// comp='s';
//     }
//     printf("welcome to our game\n");
//     printf("choose r , p , s for rock , paper , scisor\n");
//     scanf("%c",&guess);
//     int n=result(guess,comp);
//     if(n==1){
//         printf("you win\n");
//         printf("you choose %c and computer choose %c\n",guess,comp);
//     }
//     else if(n==-1){
//         printf("you lose\n");
//         printf("you choose %c and computer choose %c\n",guess,comp);
//     }
//     else if(n==0){
//         printf("draw\n");
//         printf("you choose %c and computer choose %c\n",guess,comp);
//     }
//     return 0;
// }