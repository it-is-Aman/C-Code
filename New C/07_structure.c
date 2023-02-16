#include<stdio.h>
#include<string.h>


//structure of students
// struct students{
//     int roll;
//     char name[20];
//     char course[20];
//     int year;
// }s[40];
// void display(int n);
// int main(){
//     int num;

//     // struct students s[0]={1,"A","cs",2022};          //dont know why it's not working
//     // struct students s[1]={2,"B","ai",2021};          
//     // struct students s[2]={3,"C","it",2020};          // char *b = "Hello" , and if i have char c[] = "hello" , both works , if for first case i do b = "helloworld" , it works too , but for second case if i do c = "helloworld" , it does not
//     // struct students s[3]={4,"D","ee",2019};           // im putting name in array of char after creating array, if want to put name in array of char then use scanf not initilize name like ="anme" , its only accept in pointers.
//     // struct students s[4]={5,"E","me",2018};

//     for (int i=0;i<40;i++){
//     printf("enter name,year %d\n",i+1);
//         scanf("%d",&s[i].roll);
//         scanf("%s",s[i].name);
//         scanf("%s",s[i].course);
//         // gets(s[i].name);                           //dont know why it's not working
//         // gets(s[i].course);
//         scanf("%d",&s[i].year);
//     }

//     printf("enter year number\n");
//     scanf("%d",&num);
//     display(num);
//     return 0;
// }
// void display(int n){
//     printf("information is\n");
//     for(int i=0;i<40;i++){
//         if(n==s[i].year){
//             printf("%d\n",s[i].roll);
//             puts(s[i].name);
//             puts(s[i].course);
//             printf("%d\n",s[i].year);
//         }
//     }
// }

//library
// struct library {
//     int num;
//     char *title;
//     char *name;
//     int price;
//     int flag;
// }l[10];

// // struct library l[0]={1,"qwerty","harry",100,1};
// // struct library l[1]={2,"endoflife","hudiny",200,1};
// // struct library l[2]={3,"3days","alexa",300,1};
// // struct library l[3]={4,"wow","loler",400,1};
// // struct library l[4]={5,"asdfg","looper",500,1};

//                                                                         // char *b = "Hello" , and if i have char c[] = "hello" , both works , if for first case i do b = "helloworld" , it works too , but for second case if i do c = "helloworld" , it does not
//                                                                         // im putting name in array of char after creating array, if want to put name in array of char then use scanf not initilize name like ="anme" , its only accept in pointers.

// void xadd();
// void xinfo();
// void xname();
// void xtitle();
// void xpresent();
// // void xfind();

// int main(){
//     int num;
// l[0].num=1,l[0].title="qwerty",l[0].name="harry",l[0].price=100;
// l[1].num=2,l[1].title="endoflife",l[1].name="hudiny",l[1].price=200;
// l[2].num=3,l[2].title="days",l[2].name="alwx",l[2].price=300;
// l[3].num=4,l[3].title="wow",l[3].name="lolwer",l[3].price=400;
// l[4].num=5,l[4].title="asd",l[4].name="loooper",l[4].price=500;
//     printf("1-add book info\n2-display book\n3-book of given aurthor\n4-book of given title\n5-book present or not\n");
//     scanf("%d",&num);
//     switch (num){
//         case 1:xadd();
//             break;
//         case 2:xinfo();
//             break;
//         case 3:xname();
//             break;
//         case 4:xtitle();
//             break;
//         case 5:xpresent();
//             break;
//     }
//     return 0;
// }
// void xadd(){
//     printf("enter no,book,aurthor,rs\n");
//     // for(int i=0;i<10;i++){
//     //     if(l[i].num==0){
//     //         scanf("%d",&l[i].num);
//     //         scanf("%s",l[i].title);
//     //         scanf("%s",l[i].name);
//     //         scanf("%d",&l[i].price);
//     //     }
//     // }
//             scanf("%d",&l[5].num);
//             scanf("%s",l[5].title);
//             scanf("%s",l[5].name);
//             scanf("%d",&l[5].price);
//         for(int i=0;i<10;i++){
//             printf("no. %d.....title %s.....aurthor %s.....price %d\n",l[i].num,l[i].title,l[i].name,l[i].price);
//         }

// }

// void xinfo(){
//     printf("book info\n");
//         for(int i=0;i<10;i++){
//             if(l[i].num!=0){
//             printf("no. %d.....title %s.....aurthor %s.....price %d\n",l[i].num,l[i].title,l[i].name,l[i].price);
//             }
//         }
// }

// void xname(){
//     char n[10];
//     printf("enter aurthor name\n");
//     scanf("%s",n);
//     // gets(n);
//     for(int i=0;i<10;i++){
//         if(strcmp(n,l[i].name)==0){
//             printf("no. %d.....title %s.....aurthor %s.....price %d\n",l[i].num,l[i].title,l[i].name,l[i].price);
//         }
//     }
// }

// void xtitle(){
//     char n[10];
//     printf("enter title\n");
//     scanf("%s",n);
//     // gets(n);
//     for(int i=0;i<10;i++){
//         if(strcmp(n,l[i].title)==0){
//             printf("no. %d.....title %s.....aurthor %s.....price %d\n",l[i].num,l[i].title,l[i].name,l[i].price);
//         }
//     }
// }

// void xpresent(){
//     int p=0;
//     char n[10];
//     printf("enter title\n");
//     scanf("%s",n);
//     // gets(n);
//     for(int i=0;i<10;i++){
//         if(strcmp(n,l[i].title)==0){
//             p=1;
//             printf("present\n");
//             printf("no. %d.....title %s.....aurthor %s.....price %d\n",l[i].num,l[i].title,l[i].name,l[i].price);
//         }
//     }
//     if(p==0){
//         printf("not present\n");
//     }
// }

// // void xfind(){
// //     char n[10];
// //     printf("enter aurthor name or title\n");
// //     // scanf("%s",n);
// //     gets(n);
// //     for(int i=0;i<10;i++){
// //         if(strcmp(n,l[i].name)==0){
// //             printf("no. %d\ntitle %s\naurthor %s\nprice %d\n",l[i].num,l[i].title,l[i].name,l[i].price);
// //         }
// //         else if(strcmp(n,l[i].title)==0){
// //             printf("no. %d\ntitle %s\naurthor %s\nprice %d\n",l[i].num,l[i].title,l[i].name,l[i].price);
// //         }
// //     }
// // }