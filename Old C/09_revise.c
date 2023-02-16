// #include <stdio.h>                                           //two vector
// struct vector{
//     int x;
//     int y;
// };
// int main(){
// struct vector v1,v2;
// v1.x=2;
// v1.y=3;
// v2.x=4;
// v2.y=1;

// printf("Dimension of X and Y are %d and %d\n",v1.x,v1.y);
// printf("Dimension of X and Y are %d and %d\n",v2.x,v2.y);
//     return 0;
// }

// #include <stdio.h>                                           //sum of two vector
// typedef struct vector{
//     int x;
//     int y;
// }vec;
// vec proto(vec v1,vec v2){
//     vec sum;
//     sum.x=v1.x+v1.x;                                          //if we find sum then 1st create struct (line24) and then put in structure order (line20,21)
//     sum.y=v2.y+v2.y;
//     return sum;
// }
// int main(){
// vec v1,v2,sum;
// v1.x=2;
// v1.y=3;
// printf("Dimension of X and Y are %d and %d\n",v1.x,v1.y);

// v2.x=4;
// v2.y=1;
// printf("Dimension of X and Y are %d and %d\n",v2.x,v2.y);

// proto(v1,v2);
// printf("sum of X and Y are %d and %d",sum.x,sum.y);

//     return 0;
// }

// #include <stdio.h>                                           //input from user and display using function
// typedef struct complex{
//     int x;
//     int y;
// }com;
// void display(com c){
//     printf("value of x and y are %d and %d\n",c.x,c.y);
// }
// int main(){
// com c[5];
// for(int i=0;i<5;i++){
// printf("enter value of x for complex no.%d\n",i+1);
// scanf("%d",&c[i].x);
// printf("enter value of y for complex no.%d\n",i+1);
// scanf("%d",&c[i].y);
// }
// for(int i=0;i<5;i++){
//     display(c[i]);
// }
//     return 0;
// }

// #include <stdio.h>                                       //representing name values in bank
// typedef struct customer
// {
//     char name[10];
//     int account;
//     int money;
// } cus;
// cus display(cus c)
// {
//     printf("name %s\n", c.name);
//     printf("account %d\n", c.account);
//     printf("money %d\n", c.money);
// }
// int main()
// {
//     cus c1 = {"qwerty", 11111, 80000};
//     cus c2 = {"worth", 2222, 70000};
//     cus c3 = {"asdfg", 333, 90000};

//     printf("customer 1\n");
//     display(c1);
//     printf("customer 2\n");
//     display(c2);
//     printf("customer 3\n");
//     display(c3);

//     return 0;
// }

// #include <stdio.h>                                                          //storing time and compare
// typedef struct time{
//     int hour;
//     int min;
//     int sec;
// }time;
// time display(time t1,time t2){
//     printf("time of 1 is %d:%d:%d \n",t1.hour,t1.min,t1.sec);
//     printf("time of 2 is %d:%d:%d \n",t2.hour,t2.min,t2.sec);
// }
// int comp(time t1,time t2){
// if(t1.hour>t2.hour){
//     return 1;
// }
// if(t1.hour<t2.hour){
//     return -1;
// }
// if(t1.min>t2.min){
//     return 1;
// }
// if(t1.min<t2.min){
//     return -1;
// }
// if(t1.sec>t2.sec){
//     return 1;
// }
// if(t1.sec<t2.sec){
//     return -1;
// }
// else
// return 0;

// }
// int main(){
// time t1,t2;
// t1.hour=11;
// t1.min=06;
// t1.sec=24;
// t2.hour=19;
// t2.min=02;
// t2.sec=12;
// display(t1,t2);
// int a=comp(t1,t2);
// printf("compare value %d",a);
//     return 0;
// }

// #include <stdio.h>                                                                       //storing time and date then compare
// typedef struct timeanddate
// {
//     int day;
//     int month;
//     int year;
//     int hour;
//     int min;
//     int sec;
// } td;
// td display(td t1, td t2, td d1, td d2)
// {
//     printf("day and time of 1 is %d/%d/%d and %d:%d:%d \n", d1.day, d1.month, d1.year, t1.hour, t1.min, t1.sec);
//     printf("day and time of 2 is %d/%d/%d and %d:%d:%d \n", d2.day, d2.month, d2.year, t2.hour, t2.min, t2.sec);
// }
// int comp(td t1, td t2, td d1, td d2)
// {
//     if (d1.year > d2.year)
//     {
//         return 1;
//     }
//     if (d1.year < d2.year)
//     {
//         return -1;
//     }
//     if (d1.month > d2.month)
//     {
//         return 1;
//     }
//     if (d1.month < d2.month)
//     {
//         return -1;
//     }
//     if (d1.day > d2.day)
//     {
//         return 1;
//     }
//     if (d1.day < d2.day)
//     {
//         return -1;
//     }

//     if (t1.hour > t2.hour)
//     {
//         return 1;
//     }
//     if (t1.hour < t2.hour)
//     {
//         return -1;
//     }
//     if (t1.min > t2.min)
//     {
//         return 1;
//     }
//     if (t1.min < t2.min)
//     {
//         return -1;
//     }
//     if (t1.sec > t2.sec)
//     {
//         return 1;
//     }
//     if (t1.sec < t2.sec)
//     {
//         return -1;
//     }
//     else
//         return 0;
// }
// int main()
// {
//     td t1, t2, d1, d2;
//     d1.day = 12;
//     d1.month = 04;
//     d1.year = 2025;
//     d2.day = 10;
//     d2.month = 04;
//     d2.year = 2021;
//     t1.hour = 11;
//     t1.min = 06;
//     t1.sec = 24;
//     t2.hour = 19;
//     t2.min = 02;
//     t2.sec = 12;
//     display(t1, t2, d1, d2);
//     int a = comp(t1, t2, d1, d2);
//     printf("compare value %d", a);
//     return 0;
// }