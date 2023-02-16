// (5<6)?printf("awesome"):printf("lol");
//pow(a+b,3);
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    //odd even
    // int num;
    // printf("enter number\n");
    // scanf("%d",&num);
    // if(num%2==0){
    //     printf("even");
    // }
    // else{
    //     printf("odd");
    // }

    //leap year
    // int num;
    // printf("enter year number\n");
    // scanf("%d", &num);
    // if(num%400==0){
    //     printf("leap year");
    // }
    // else if(num%100==0){
    //     printf("not a leap year");
    // }
    // else {
    //     printf("leap year");
    // }

    // if (num % 100 == 0)
    // {
    //     if (num % 400 == 0)
    //     {
    //         printf("leap");
    //     }
    //     else
    //     {
    //         printf("not");
    //     }
    // }
    // else if (num % 100 != 0)
    // {
    //     if (num % 4 == 0)
    //     {
    //         printf("leap");
    //     }
    //     else
    //     {
    //         printf("not");
    //     }
    // }

    // if((num%400==0)&&(num%4==0)||(num%100!=0)){
    //     printf("leap year");
    // }
    // else {
    //     printf("not a leap year");
    // }

    // if((num%100==0&&num%400==0)||(num%100!=0&&num%4==0)){
    //     printf("leap");
    // }
    // else{
    //     printf("not");
    // }

    //find day on 1 jan year
    // int year = 1900, num, days, total, diff, leap = 0, nonleap;
    // printf("enter year \n");
    // scanf("%d", &num);
    // diff = num - year;
    // while (year < num)
    // {
    //     if (year % 100 == 0)
    //     {

    //         if (year % 400 == 0)
    //         {
    //             leap++;
    //         }
    //     }
    //     else
    //     {
    //         if (year % 4 == 0)
    //         {
    //             leap++;
    //         }
    //     }
    //     year++;
    // }
    // nonleap = diff - leap;
    // total = leap * 366 + nonleap * 365;
    // days = total / 7;

    // switch (days)
    // {
    // case 0:
    //     printf("MO");
    //     break;
    // case 1:
    //     printf("TW");
    //     break;
    // case 2:
    //     printf("WE");
    //     break;
    // case 3:
    //     printf("TH");
    //     break;
    // case 4:
    //     printf("FR");
    //     break;
    // case 5:
    //     printf("SA");
    //     break;
    // case 6:
    //     printf("SU");
    //     break;
    // }

    //reverse and check
    // int num,n,new=0;
    // printf("enter number\n");
    // scanf("%d",&num);
    // n=num%10;
    // num=num/10;
    // new=n*10000;
    // n=num%10;
    // num=num/10;
    // new+=n*1000;
    // n=num%10;
    // num=num/10;
    // new+=n*100;
    // n=num%10;
    // num=num/10;
    // new+=n*10;
    // n=num%10;
    // new+=n;

    // if(new==num){
    //     printf("same");
    // }
    // else{
    //     printf("different and reverse is %d",new);
    // }

    //max among 3 number
    // int n1,n2,n3;
    // printf("enter numbers\n");
    // scanf("%d%d%d",&n1,&n2,&n3);
    // if(n1>n2&&n1>n3){
    //     printf("%d is greater",n1);
    // }
    // if(n2>n1&&n2>n3){
    //     printf("%d is greater",n2);
    // }
    // else{
    //     printf("%d is greater",n3);
    // }

    //absolute
    // int num;
    // printf("enter the number\n");
    // scanf("%d",&num);
    // if(num>0){
    //     printf("absolute value is %d",num);
    // }
    // else {
    //     printf("absolute value is %d",-num);
    // }

    //points fall on straight line
    // int x1, x2, x3, y1, y2, y3, a, b, c;
    // printf("enter points for p1 x and y\n");
    // scanf("%d%d", &x1, &y1);
    // printf("enter points for p2 x and y\n");
    // scanf("%d%d", &x2, &y2);
    // printf("enter points for p3 x and y\n");
    // scanf("%d%d", &x3, &y3);
    // a = sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
    // b = sqrt(pow(y2 - y3, 2) + pow(x2 - x3, 2));
    // c = sqrt(pow(y3 - y1, 2) + pow(x3 - x1, 2));
    // if (c == a + b)
    // {
    //     printf("falls on straight line");
    // }
    // else
    // {
    //     printf("not falls");
    // }

    //pointlie inside or outside of circle
    // int x, y, r, r0;
    // printf("enter x,yand r of circle");
    // scanf("%d%d%d", &x, &y, &r);
    // r0 = sqrt(pow(x, 2) + pow(y, 2));
    // if (r > r0)
    // {
    //     printf("inside");
    // }
    // else if (r < r0)
    // {
    //     printf("outside");
    // }
    // else
    // {
    //     printf("line");
    // }

    //where points lie
    // int x, y;
    // printf("enter your coordinates\n");
    // scanf("%d%d", &x, &y);
    // if (x != 0 && y != 0)
    // {
    //     printf("lies on plane");
    // }
    // else if (x != 0 && y == 0)
    // {
    //     printf("lie on x axis");
    // }
    // else if (y != 0 && x == 0)
    // {
    //     printf("lie on y axis");
    // }
    // else
    // {
    //     printf("lie on origin (0,0)");
    // }

    //check A,a,1,()
    // char num;
    // printf("enter your character\n");
    // scanf("%c",&num);
    // if(num>=65&&num<=90){
    //     printf("Capital");
    // }
    // if(num>=97&&num<=122){
    //     printf("Small");
    // }
    // if(num>=48&&num<=57){
    //     printf("number");
    // }
    // if(num>=0&&num<=47||num>=58&&num<=91||num>=91&&num<=96||num>=123&&num<=127){
    //     printf("symbol");
    // }

    //insurance
    // int age;
    // char gen,area,health;
    // printf("enter age, area(C/V), gender(M/F), health(G/B)\n");
    // scanf("%d%c%c%c",&age,&area,&gen,&health);
    // if(health=='G'&&age>=25&&age<=35&&area=='C'&&gen=='M'){
    //     printf("insurance\n");
    //     printf("premium is Rs 4 per thousand and max insurance 2 lakhs\n");
    // }
    // else if(health=='G'&&age>=25&&age<=35&&area=='C'&&gen=='M'){
    //     printf("insurance\n");
    //     printf("premium is Rs 3 per thousand and max insurance 2 lakhs\n");
    // }
    // else if(health=='B'&&age>=25&&age<=35&&area=='V'&&gen=='M'){
    //     printf("insurance\n");
    //     printf("premium is Rs 6 per thousand and max insurance Rs 10,000\n");
    // }
    // else{
    //     printf("no insurance\n");
    // }

    getch();
    return 0;
}