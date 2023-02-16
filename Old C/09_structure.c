// #include <stdio.h>                                               //struct
// struct student{
// char name[10];
// int class;
// int roll;
// };
// int main(){
// struct student s1;
// strcpy(s1.name,"worth");
// s1.class=12;
// s1.roll=3;

// printf("s1 name %s\n",s1.name);
// printf("s1 class %d\n",s1.class);
// printf("s1 roll %d\n",s1.roll);
//     return 0;
// }

// #include <stdio.h>                                              //struct as array
// struct student{
// char name[10];
// int class;
// int roll;
// };
// int main(){
// struct student s[40];
// strcpy(s[0].name,"worth");
// strcpy(s[1].name,"wert");
// strcpy(s[2].name,"asdf");

// printf("s1 name %s\n",s[0].name);
// printf("s1 name %s\n",s[1].name);
// printf("s1 name %s\n",s[2].name);

//     return 0;
// }

// #include <stdio.h>                                               //shotcut for input values
// struct student{
// char name[10];
// int class;
// int roll;
// };
// int main(){
// struct student s1={"qwerty",12,7};

// printf("s1 name %s\n",s1.name);
// printf("s1 class %d\n",s1.class);
// printf("s1 roll %d\n",s1.roll);
//     return 0;
// }

// #include <stdio.h>                                               //address of different struct
// struct student{
// char name[10];
// int class;
// int roll;
// };
// int main(){
// struct student s1={"qwerty",12,7};

// printf("s1 name %s\n",s1.name);
// printf("s1 name %u\n",&s1.name);
// printf("s1 class %d\n",s1.class);
// printf("s1 class %u\n",&s1.class);
// printf("s1 roll %d\n",s1.roll);
// printf("s1 roll %u\n",&s1.roll);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>                                         //pointers
// struct student
// {
//     char name[10];
//     int class;
//     int roll;
// };
// int main()
// {
//     struct student s1;
//     struct student *ptr;
//     ptr = &s1;  
//     strcpy((*ptr).name,"qwerty");                           //(*ptr).name = s1.name
//     (*ptr).class=12;
//     (*ptr).roll=2;

// printf("name is:%s\n",(*ptr).name);
// printf("class is:%d\n",(*ptr).class);
// printf("roll is:%d\n",(*ptr).roll);
// printf("or\n");
// printf("name is:%s\n",ptr->name);
// printf("class is:%d\n",ptr->class);
// printf("roll is:%d\n",ptr->roll);
//     return 0;
// }

// #include <stdio.h>                                          //function of struct
// #include <string.h>
// struct student {
//     char name[12];
//     int class;
//     int roll;
// };
// void proto(struct student s1){
// strcpy(s1.name,"qwerty");
// s1.class=12;
// s1.roll=3;

// printf("name is: %s\n",s1.name);
// printf("class is: %d\n",s1.class);
// printf("roll is: %d\n",s1.roll);
// }

// int main(){
// struct student s1;

// proto(s1);

//     return 0;
// }


//  #include <stdio.h>                                              //typedef
//  #include <string.h>                                             
// typedef struct student{
// char name[10];
// int class;
// int roll;
// }stu;                                                           //struct student s1 = stu s1

// void proto(stu s1){
//     printf("name is: %s\n",s1.name);
//     printf("class is: %d\n",s1.class);
//     printf("roll is: %d\n",s1.roll);

//     s1.roll=12;
// }
// int main(){
// stu s1;
// strcpy(s1.name,"qwerty");
// s1.class=12;
// s1.roll=6;

// proto(s1);
//     printf("roll is: %d\n",s1.roll);                           //roll does not change 'coz it pass copy not address

//     return 0;
// }
