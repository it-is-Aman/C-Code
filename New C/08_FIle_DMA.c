#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// File open create
// int main(){
//     int count=0,roll,value;
//     char c,name[10],st[05];
//     FILE *fr,*fw;
//     fr=fopen("read.txt","r");
//     fw=fopen("write.txt","w");
//     if(fr==NULL){
//         printf("no file\n");
//     }

//     while(1){                //take 1 char at a time
//         c=fgetc(fr);
//         count++;
//             if(c==EOF){
//             break;
//         }
//         fputc(c,fw);
//     }

//     printf("enter name and roll\n");
//     scanf("%s%d",name,&roll);
//     fprintf(fw,"name=%s and roll=%d\n",name,roll);
//     fprintf(fw,"\ntotal char is %d\n",count);
//     fscanf(fr,"%d",&value);
//     printf("integers are =%d\n",value);
//     fclose(fr);
//     fclose(fw);
//     return 0;
// }

//DMA
// int main(){
//     int *roll,size;                                         //we dont create array and then change size
//     printf("enter your desired size\n");                    //we first create pointer and then change size which can be accessed by arrar[]
//     scanf("%d",&size);
//     roll=(int*)calloc(size,sizeof(int));
//     for(int i=0;i<size;i++){
//         printf("%d student \n",i+1);
//         scanf("%d",&roll[i]);
//     }
//     for(int i=0;i<size;i++){
//         printf("%d student =%d\n",i+1,roll[i]);
//     }
//     printf("enter your next desired size\n");
//     roll=realloc(roll,size*sizeof(int));
//     scanf("%d",&size);
//     for(int i=0;i<size;i++){
//         printf("%d student \n",i+1);
//         scanf("%d",&roll[i]);
//     }
//     for(int i=0;i<size;i++){
//         printf("%d student =%d\n",i+1,roll[i]);
//     }
//     return 0;
// }