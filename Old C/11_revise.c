// #include<stdio.h>                                            //DMA store num from user using malloc
// #include<stdlib.h>
// int main(){
//     int num;
// int *ptr;
// printf("enter number space you want\n");
// scanf("%d",&num);
// ptr = (int *)malloc(num*sizeof(int));
// for(int i=0;i<num;i++){
//     printf("enter value of %d :\n",i);
//     scanf("%d",&ptr[i]);
// }
// for(int i=0;i<num;i++){
//     printf("value of %d is :%d \n",i,ptr[i]);
// }
//     return 0;
// }


// #include<stdio.h>                                            //DMA store num from user using calloc
// #include<stdlib.h>
// int main(){
//     int num;
// int *ptr;
// printf("enter number space you want\n");
// scanf("%d",&num);
// ptr = (int *)calloc(num,sizeof(int));
// for(int i=0;i<num;i++){
//     printf("enter value of %d :\n",i);
//     scanf("%d",&ptr[i]);
// }
// for(int i=0;i<num;i++){
//     printf("value of %d is :%d \n",i,ptr[i]);
// }
//     return 0;
// }


// #include<stdio.h>                                                //DMA change store num using relloc in malloc
// #include<stdlib.h>
// int main(){
// int *ptr;
// ptr = (int *)malloc(4*sizeof(int));
// printf("your store is now 4\n");
// for(int i=0;i<4;i++){
//     printf("enter value of %d :\n",i);
//     scanf("%d",&ptr[i]);
// }
// for(int i=0;i<4;i++){
//     printf("value of %d is :%d \n",i,ptr[i]);
// }
// printf("your store will now 8\n");
// ptr=realloc(ptr,8*sizeof(int));
// for(int i=0;i<8;i++){
//     printf("enter value of %d :\n",i);
//     scanf("%d",&ptr[i]);
// }
// for(int i=0;i<8;i++){
//         printf("value of %d is :%d \n",i,ptr[i]);
// }
//     return 0;
// }


// #include<stdio.h>                                            //DMA change store num using relloc in calloc
// #include<stdlib.h>
// int main(){
// int *ptr;
// ptr = (int *)calloc(4,sizeof(int));
// printf("your store is now 4\n");
// for(int i=0;i<4;i++){
//     printf("enter value of %d :\n",i);
//     scanf("%d",&ptr[i]);
// }
// for(int i=0;i<4;i++){
//     printf("value of %d is :%d \n",i,ptr[i]);
// }
// printf("your store will now 8\n");
// ptr=realloc(ptr,8*sizeof(int));
// for(int i=0;i<8;i++){
//     printf("enter value of %d :\n",i);
//     scanf("%d",&ptr[i]);
// }
// for(int i=0;i<8;i++){
//         printf("value of %d is :%d \n",i,ptr[i]);
// }
//     return 0;
// }

// #include<stdio.h>                                                //multiple table of 5 with using realloc
// #include<stdlib.h>
// int main(){
// int *ptr;
// ptr = (int *)malloc(10*sizeof(int));
// printf("table of 5 is \n");
// for(int i=0;i<10;i++){
// ptr[i]=5*(i+1);
//     printf("5 X %d = %d \n",i+1,ptr[i]);
// }
// printf("table of 5 after realloc is\n");
// ptr=realloc(ptr,15*sizeof(int));
// for(int i=0;i<15;i++){
// ptr[i]=5*(i+1);
//     printf("5 X %d = %d \n",i+1,ptr[i]);
// }
//     return 0;
// }