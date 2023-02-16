// #include <stdio.h>                                   //input 3 num
// int main(){
//     int a,b,c;
// FILE *ptr;
// ptr = fopen("10asd.txt","r");
// fscanf(ptr,"%d",&a);
// fscanf(ptr,"%d",&b);
// fscanf(ptr,"%d",&c);
// printf("values are %d,%d,%d",a,b,c);
// fclose(ptr);
//     return 0;
// }

// #include <stdio.h>                                       //write table
// int main(){
//     int num;
// FILE *ptr;
// printf("enter value for table\n");
// scanf("%d",&num);
// ptr=fopen("10multiple.txt","w");
// for(int i=0;i<10;i++){
//     fprintf(ptr,"%d X %d = %d\n",num,i+1,num*(i+1));
// }
// fclose(ptr);
//     return 0;
// }

// #include <stdio.h>                       //print twice char       
// int main(){
//     char c;
// FILE *ptr1;
// FILE *ptr2;
// ptr1=fopen("qwerty1.txt","r");
// ptr2=fopen("qwerty2.txt","w");
// do{
// c=fgetc(ptr1);
// fputc(c,ptr2);
// fputc(c,ptr2);
// }while(c!=EOF);
// fclose(ptr1);
// fclose(ptr2);
//     return 0;
// }


// #include <stdio.h>                                    //print value using struct
//  typedef struct employee{
//     char name[10];
//     int salary;
//     }emp;                               
// int main(){
   
// emp e1={"qwerty1",787898};
// emp e2={"qwerty2",121232};
// FILE *ptr;
// ptr=fopen("employee.txt","w");

// fprintf(ptr,"%s,%d\n",e1.name,e1.salary);
// fprintf(ptr,"%s,%d\n",e2.name,e2.salary);
// fclose(ptr);
//     return 0;
// }


// #include <stdio.h>                                //print value using structand input from user
// typedef struct employee{
//     char name[10];
//     int salary;
//     }emp;
// int main(){
//     emp e1,e2;
// printf("enter name 1\n");
// scanf("%s",&e1.name);
// printf("enter salary 1\n");
// scanf("%d",&e1.salary);
// printf("enter name 2\n");
// scanf("%s",&e2.name);
// printf("enter salary 2\n");
// scanf("%d",&e2.salary);
// FILE *ptr;
// ptr=fopen("employee.txt","w");

// fprintf(ptr,"%s,%d\n",e1.name,e1.salary);
// fprintf(ptr,"%s,%d\n",e2.name,e2.salary);
// fclose(ptr);
//     return 0;
// }


//OR

// #include <stdio.h>                              //print value 
// int main(){
//     int salary1,salary2;
// FILE *ptr;
// ptr=fopen("employee.txt","w");
// char name1[]="qwerty1";
// char name2[]="qwerty2";
// salary1=123123;
// salary2=789789;
// fprintf(ptr,"%s,%d\n",name1,salary1);
// fprintf(ptr,"%s,%d\n",name2,salary2);
// fclose(ptr);
//     return 0;
// }

// #include <stdio.h>                              //print value input from user
// int main(){
//     char name1[10];
//     char name2[10];
//     int salary1,salary2;
// FILE *ptr;
// printf("enter name 1\n");
// scanf("%s",&name1);
// printf("enter salary 1\n");
// scanf("%d",&salary1);
// printf("enter name 2\n");
// scanf("%s",&name2);
// printf("enter salary 2\n");
// scanf("%d",&salary2);
// ptr=fopen("employee.txt","w");
// fprintf(ptr,"%s,%d\n",name1,salary1);
// fprintf(ptr,"%s,%d\n",name2,salary2);
// fclose(ptr);
//     return 0;
// }

// #include <stdio.h>                                   //modify same file
// int main(){
//     int num;
// FILE *ptr;
// ptr=fopen("fornuminput.txt","r");
// fscanf(ptr,"%d",&num);
// ptr=fopen("fornuminput.txt","w");
// fprintf(ptr,"%d",num*2);
// fclose(ptr);
//     return 0;
// }