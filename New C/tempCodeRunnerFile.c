#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

// checking the number of times a number appear in an array
// int main()
// {
//     int checknum[10], num, count = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         printf("enter %d number\n",i+1);
//         scanf("%d", &checknum[i]);
//     }
//     printf("enter your number\n");
//     scanf("%d", &num);
//     for (int i = 0; i < 10; i++)
//     {
//         if (num == checknum[i])
//         {
//             count++;
//         }
//     }
//     printf("your number %d and count %d", num, count);

//     return 0;
// }

// check number nature passing array to function
// int pos(int num[],int sp);
// int neg(int num[],int sp);
// int odd(int num[],int sp);
// int even(int num[],int sp);
// int main()
// {
//     int num[10];
//     for (int i = 0; i < 10; i++)
//     {
//         printf("enter your %d numbers\n",i+1);
//         scanf("%d", &num[i]);
//     }
//     printf("positive numbers are %d\n", pos(num,10));
//     printf("negative numbers are %d\n", neg(num,10));
//     printf("odd numbers are %d\n", odd(num,10));
//     printf("even numbers are %d\n", even(num,10));
//     return 0;
// }
// int pos(int num[],int sp){
//     int c=0;
//     for(int i=0;i<sp;i++){
//         if((num[i])>0){
//             c++;
//         }
//     }
//     return c;
// }
// int neg(int num[],int sp){
//     int c=0;
//     for(int i=0;i<sp;i++){
//         if((num[i])<0){
//             c++;
//         }
//     }
//     return c;
// }
// int odd(int num[],int sp){
//     int c=0;
//     for(int i=0;i<sp;i++){
//         if((num[i])%2!=0){
//             c++;
//         }
//     }
//     return c;
// }
// int even(int num[],int sp){
//     int c=0;
//     for(int i=0;i<sp;i++){
//         if((num[i])%2==0){
//             c++;
//         }
//     }
//     return c;
// }

// same problem but with pointer
//  int pos(int *num,int sp);
//  int neg(int *num,int sp);
//  int odd(int *num,int sp);
//  int even(int *num,int sp);
//  int main()
//  {
//      int num[10];
//      for (int i = 0; i < 10; i++)
//      {
//          printf("enter your %d numbers\n",i+1);
//          scanf("%d", &num[i]);
//      }
//      printf("positive numbers are %d\n", pos(num,10));               //&num[0]  as as num
//      printf("negative numbers are %d\n", neg(num,10));
//      printf("odd numbers are %d\n", odd(num,10));
//      printf("even numbers are %d\n", even(num,10));
//      return 0;
//  }
//  int pos(int *num,int sp){
//      int c=0;
//      for(int i=0;i<sp;i++){
//          if(*(num+i)>0){
//              c++;
//          }
//      }
//      return c;
//  }
//  int neg(int *num,int sp){
//      int c=0;
//      for(int i=0;i<sp;i++){
//          if(*(num+i)<0){
//              c++;
//          }
//      }
//      return c;
//  }
//  int odd(int *num,int sp){
//      int c=0;
//      for(int i=0;i<sp;i++){
//          if(*(num+i)%2!=0){
//              c++;
//          }
//      }
//      return c;
//  }
//  int even(int *num,int sp){
//      int c=0;
//      for(int i=0;i<sp;i++){
//          if(*(num+i)%2==0){
//              c++;
//          }
//      }
//      return c;
//  }

// arrange odd and even element of an array
//  int main(){
//      int num[]={1,2,3,4,5,6};
//      printf("your current array is\n");
//      for(int i=0;i<6;i++){
//          printf("%d ",num[i]);
//      }
//      printf("\nyour new array is\n");
//      for(int i=0;i<6;i++){
//          if(num[i]%2!=0){
//              printf("%d ",num[i]);
//          }
//      }
//      for(int i=0;i<6;i++){
//          if(num[i]%2==0){
//              printf("%d ",num[i]);
//          }
//      }
//      return 0;
//  }

// interchange or arrange odd and even correctly
//  int main(){
//      int num[10],temp;
//      for(int i=0;i<10;i++){
//      printf("enter %d number\n",i+1);
//      scanf("%d",&num[i]);
//      }
//      for(int i=0;i<10;i++){
//          for(int j=i+1;j<10;j++){
//              if((num[i]%2==0)&&(num[j]%2!=0)){
//                  temp=num[i];
//                  num[i]=num[j];
//                  num[j]=temp;
//              }
//          }
//      }
//      printf("odd then even sequence is\n");
//      for(int i=0;i<10;i++){
//          printf("%d ",num[i]);
//      }

//     return 0;
// }

// selection sort                                                   //we dont touch smaller so j=i+1
//  int main(){
//      int num[10],temp;
//      for(int i=0;i<10;i++){
//          printf("enter your %d number\n",i+1);
//          scanf("%d",&num[i]);
//      }
//      for(int i=0;i<10;i++){
//          for(int j=i+1;j<10;j++){
//              if(num[i]>num[j]){
//                  temp=num[i];
//                  num[i]=num[j];
//                  num[j]=temp;
//              }
//          }
//      }
//          printf("assending sequence is\n");
//      for(int i=0;i<10;i++){
//          printf("%d ",num[i]);
//      }

//     return 0;
// }

// bubble sort                                              //we dont toch larger so j=10-i
// int main()
// {
//     int num[10], temp;
//     for (int i = 0; i < 10; i++)
//     {
//         printf("enter your %d number\n", i + 1);
//         scanf("%d", &num[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 10-i; j++)
//         {
//             if (num[j] > num[j + 1])
//             {
//                 temp = num[j];
//                 num[j] = num[j + 1];
//                 num[j + 1] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ",num[i]);
//     }

//     return 0;
// }

// 3-d array
//  int main(){
//      int threed[3][2][3];
//      for(int i=0;i<3;i++){
//      for(int j=0;j<2;j++){
//      for(int k=0;k<3;k++){
//          printf("enter %d%d%d number\n",i+1,j+1,k+1);
//          scanf("%d",&threed[i][j][k]);
//      }
//      }
//      }
//      printf("first and last element is %d and %d\n",threed[0][0][0],threed[2][1][2]);

//     return 0;
// }

// largest number from 5d array
// int main()
// {
//     int num[3][3], temp;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("enter %d%d number\n", i + 1, j + 1);
//             scanf("%d", &num[i][j]);
//         }
//     }
//     temp=num[0][0];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (num[i][j] > temp)
//             {
//                 temp = num[i][j];
//             }
//         }
//     }
//     printf("largest number is %d",temp);
//     return 0;
// }

// find transpose of a matrix
//  int main()
//  {
//      int num[3][3], temp;
//      for (int i = 0; i < 3; i++)
//      {
//          for (int j = 0; j < 3; j++)
//          {
//              printf("enter %d%d number\n", i + 1, j + 1);
//              scanf("%d", &num[i][j]);
//          }
//      }

//     printf("matrix is\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ",num[i][j]);
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = i+1; j < 3; j++)
//         {
//             temp=num[i][j];
//             num[i][j]=num[j][i];
//             num[j][i]=temp;
//         }
//     }

//     printf("transpose is\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ",num[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// A puzzle that contains 15 numbered square pieces mounted on a frame. These pieces can be moved horizontally or vertically.
// getkey(int a)
// {
//     int n;
// scanf("%d",&n);
// return n;
// }
// int main()
// {
//     int num[9] = {1, 2, 3, 4, 5, 6, 7, 8, 0}, h, temp,won=0,count=0;
//     do
//     {
//         if (h == 72)
//         {
//             for (int i = 0; i < 9; i++)
//             {
//                 if (num[i] == 0)
//                 {
//                     if (num[0] == 0, num[1] == 0, num[2] == 0)
//                     {
//                         break;
//                     }
//                     temp = num[i];
//                     num[i - 4] = num[i];
//                     num[i - 4] = temp;
//                     count=+1;
//                     break;
//                 }
//             }
//         }
//         if (h == 80)
//         {
//             for (int i = 0; i < 9; i++)
//             {
//                 if (num[i] == 0)
//                 {
//                     if (num[6] == 0, num[7] == 0, num[8] == 0)
//                     {
//                         break;
//                     }
//                     temp = num[i];
//                     num[i + 4] = num[i];
//                     num[i + 4] = temp;
//                     count=+1;
//                     break;
//                 }
//             }
//         }
//         if (h == 75)
//         {
//             for (int i = 0; i < 9; i++)
//             {
//                 if (num[i] == 0)
//                 {
//                     if (num[0] == 0, num[3] == 0, num[6] == 0)
//                     {
//                         break;
//                     }
//                     temp = num[i];
//                     num[i - 1] = num[i];
//                     num[i - 1] = temp;
//                     count=+1;
//                     break;
//                 }
//             }
//         }
//         if (h == 77)
//         {
//             for (int i = 0; i < 9; i++)
//             {
//                 if (num[i] == 0)
//                 {
//                     if (num[2] == 0, num[5] == 0, num[8] == 0)
//                     {
//                         break;
//                     }
//                     temp = num[i];
//                     num[i + 4] = num[i];
//                     num[i + 4] = temp;
//                     count=+1;
//                     break;
//                 }
//             }
//         }

//         for(int i=0;i<8;i++){

//                 if(num[i]=0){
//                     printf(" ");
//                 }
//                 if(num[0]==1 && num[1]==2 && num[2]==3 && num[3]==4 && num[4]==5 && num[5]==6 && num[6]==7 && num[7]==8 && num[8]==0){
//                     won=1;
//                 }
//                 if((num[2]||num[5]||num[8])){
//                     printf("\n");
//                 }

//         }
//         h = getkey(h);
//     } while (h == 72 || h == 80 || h == 75 || h == 77);
//     if(won==1){
//         printf("congratulations");
//     }

//     return 0;
// }

/* returns scan code of the key that has been hit */
// getkey()
// {
// union REGS i,o;
// while(!kbhit() )
// ;
// i.h.ah=0;
// int86(22,&i,&o);
// return(o.h.ah);
// }

// void main() {

// int i,j,a[16]={1,4,15,7,8,10,2,11,14,3,6,13,12,9,5,0};
// int temp,h,moves=0,won=0;

// clrscr();

// /****************************************************/

// do {
//    /**************/
//    /* to move up */
//    /**************/

// if(h==72) {

// for(i=0;i<16;i++) {
// if(a[i]==0){
// if(a[0]==0 || a[1]==0 || a[2]==0 || a[3]==0) {
// break;
// }
// temp=a[i];
// a[i]=a[i-4];
// a[i-4]=temp;
// moves=moves+1;
// break;
// }
// }
//  }
//    /****************/
//    /* to move left */
//    /****************/

// if(h==75) {

// for(i=0;i<16;i++) {

// if(a[i]==0){
// if(a[0]==0 || a[4]==0 || a[8]==0 || a[12]==0) {
// break;
// }
// temp=a[i];
// a[i]=a[i-1];
// a[i-1]=temp;
// moves=moves+1;
// break;
// }
// }
//  }

//    /****************/
//    /* to move down */
//    /****************/

// if(h==80) {
// for(i=0;i<16;i++) {
// if(a[i]==0){
// if(a[12]==0 || a[13]==0 || a[14]==0 || a[15]==0) {
// break;
// }
// temp=a[i];
// a[i]=a[i+4];
// a[i+4]=temp;
// moves=moves+1;
// break;
// }
// }
//  }
//   /*****************/
//   /* to move right */
//   /*****************/

// if(h==77) {

// for(i=0;i<16;i++) {

// if(a[i]==0) {

// if(a[3]==0 || a[7]==0 || a[11]==0 || a[15]==0 ) {
// break;
// }

// temp=a[i];
// a[i]=a[i+1];
// a[i+1]=temp;
// moves=moves+1;
// break;
// }
//  }
//   }

// /***********************************************************/

//        /**********************************/
//        /* printing the puzzle with boxes */
//        /**********************************/

// printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",218,196,196,196,194,196,196,196,194,196,196,196,194,196,196,196,191);
// for(i=0;i<=15;i++) {

// printf("%c",179);

// if(a[i]==0) {
// printf("%c  ",32);     /* printing a blank space in the puzzle */
// }
// if(a[i]!=0)

// printf(" %2d",a[i]);

// if(a[i]==a[3] || a[i]==a[7] || a[i]==a[11] || a[i]==a[15])
// printf("%c",179);

// if(i==3||i==7||i==11)
// printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",195,196,196,196,197,196,196,196,197,196,196,196,197,196,196,196,180);

// if(a[0]==1 && a[1]==2 && a[2]==3 && a[3]==4 && a[4]==5 && a[5]==6
// &&a[6]==7 && a[7]==8 && a[8]==9 && a[9]==10 && a[11]==12 && a[12]==13
// && a[13]==14 && a[14]==15 && a[15]==0 ) {

// won=1;
// }

//  }
// printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",192,196,196,196,193,196,196,196,193,196,196,196,193,196,196,196,217);

// /***************************************************/
// if(won==1) {
// printf("\n\n\tCongratulations! you have won.");
// break;
// }
//       /**********************************/
//       /* to print instructions for user */
//       /**********************************/

// printf("\n\n\n\n\n\n  Total Moves: %d\t\t\t\t  Use arrow keys to move blank:\n\n",moves);
// printf("\t\t\t\t\t\t  %c to move up\n",30);
// printf("\t\t\t\t\t\t  %c to move down\n",31);
// printf("\t\t\t\t\t\t  %c to move left\n",17);
// printf("\t\t\t\t\t\t  %c to move right\n",16);

// /****************************************************/

//      /**********************/
//      /* to take user input */
//      /**********************/

// h=getkey();
// clrscr();

// /****************************************************/

// }while(h==72 || h==75 || h==77 ||h==80);

// getch();
// }

// check wheather a matrix is symmatrix
//  int main(){
//      int mat1[3][3],mat2[3][3],temp,s=1;
//      for(int i=0;i<3;i++){
//          for(int j=0;j<3;j++){
//          printf("enter your %d %d element\n",i+1,j+1);
//          scanf("%d",&mat1[i][j]);
//          mat2[i][j]=mat1[i][j];
//          }
//      }

//     for(int i=0;i<3;i++){
//         for(int j=i+1;j<3;j++){
//             temp=mat1[i][j];
//             mat1[i][j]=mat1[j][i];
//             mat1[j][i]=temp;
//         }
//     }

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(mat1[i][j]!=mat2[i][j]){
//                 s=0;
//                 break;
//             }
//         }
//     }

//     if(s==1){
//         printf("symmetric\n");
//     }
//     else if(s==0){
//         printf("not symmetric\n");
//     }
//     return 0;
// }

// add two matrix
//  int main(){
//      int mat1[3][3],mat2[3][3];
//      printf("matrix 1\n");
//      for(int i=0;i<3;i++){
//          for(int j=0;j<3;j++){
//              printf("element %d %d\n",i+1,j+1);
//              scanf("%d",&mat1[i][j]);
//          }
//      }

//     printf("matrix 2\n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("element %d %d\n",i+1,j+1);
//             scanf("%d",&mat2[i][j]);
//         }
//     }

//     printf("matrix 1 is\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ",mat1[i][j]);
//         }
//         printf("\n");
//     }

// printf("matrix 2 is\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ",mat2[i][j]);
//         }
//         printf("\n");
//     }

//     printf("sum of both matrix\n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",mat1[i][j]+mat2[i][j]);
//         }
//         printf("\n");
//     }

//     printf("multiplication of both matrix\n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",mat1[i][j]*mat2[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// shift array
// int smath(int mat[], int n);
// int main()
// {
//     int mat[5];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("element %d\n", i + 1);
//         scanf("%d", &mat[i]);
//     }
//     smath(mat, 5);
//     return 0;
// }
// int smath(int mat[], int n)
// {
//     int temp;
//     for (int j = 1; j <= 2; j++)
//     {
//         temp = mat[0];                      //use only one loop for shifting in value at a time
//         for (int i = 0; i < n - 1; i++)     //if want to shifft more then use 2 loop
//         {
//             mat[i] = mat[i + 1];
//         }
//         mat[n - 1] = temp;
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", mat[i]);
//     }
// }

// calculate determinent
//  int main(){
//      int mat[3][3],a,b,c,det;
//      for(int i=0;i<3;i++){
//          printf("enter %d row element\n",i+1);
//          scanf("%d%d%d",&mat[i][0],&mat[i][1],&mat[i][2]);
//      }
//      a=((mat[1][1]*mat[2][2]) - (mat[1][2]*mat[2][1]));
//      b=((mat[1][0]*mat[2][2]) - (mat[1][2]*mat[2][0]));
//      c=((mat[1][0]*mat[2][1]) - (mat[1][1]*mat[2][0]));
//      det=((mat[0][0]*a) - (mat[0][1]*b) + (mat[0][2]*c));
//      printf("determint is %d",det);
//      return 0;
//  }

// standard deviation
// int main()
// {
//     int mat[5], mean = 0, sd = 0,n;
//     printf("how many numbers\n");
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//     printf("enter %d number\n",i+1);
//         scanf("%d", &mat[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         mean += mat[i];
//     }
//     mean=mean/n;
//     printf("mean %d\n", mean);

//     for (int i = 0; i < n; i++)
//     {
//         sd += (mat[i] - mean) * (mat[i] - mean);
//     }
//     sd=sqrt(sd/n);
//     printf("standard deviation %d", sd);
//     return 0;
// }

// find area of sin triangle
//  int main(){
//      float area[6],max,temp;
//      float a[]={137.4,155.2,149.3,160.0,155.6,149.7};
//      float b[]={80.9,92.62,97.93,100.25,68.95,120.0};
//      float angle[]={.78,.89,1.35,9.00,1.25,1.75};

//         for(int i=0;i<6;i++){
//             area[i]=.5*a[i]*b[i]*sin(angle[i]);
//             printf("area of %d is %f\n",i+1,area[i]);
//         }
//     max=area[0];
//     for(int i=0;i<6;i++){
//         if(area[i]>max){
//             max=area[i];
//         }
//     }
//     printf("max area is %f triangle\n",max);
//     return 0;
// }

// to find correlation coefficient
//  void r(int x[],int y[]);
//  int main()
//  {
//      float sx, sy, sxx, syy, sxy;
//      int x[] = {15, 18, 21, 24, 27};
//      int y[] = {25, 25, 27, 31, 32};
//      r(x,y);
//      return 0;
//  }
//  void r(int x[],int y[])
//  {
//      float r;
//      float sx=0, sy=0, sxx=0, syy=0, sxy=0;
//      for (int i = 0; i < 5; i++)
//      {
//          sx += x[i];
//          sy += y[i];
//          sxx += (x[i] * x[i]);
//          syy += (y[i] * y[i]);
//          sxy += (x[i] * y[i]);
//      }
//      r = (5*sxy - (sx * sy)) / sqrt(((5 * sxx) - (sx * sx)) * ((5 * syy) - (sy * sy)));
//      printf("r %f", r);
//  }

// sum of distance betwee n consecutive points
//  int main(){
//      int x[10],y[10],d=0;
//      for(int i=0;i<10;i++){
//          printf("enter %d x and y\n",i+1);
//          scanf("%d%d",&x[i],&y[i]);
//      }
//      for(int i=0;i<10;i++){
//          d+=sqrt(pow(x[i+1]-x[i],2)+pow(y[i+1]-y[i],2));
//      }
//      printf("distance is %d",d);
//      return 0;
//  }

// bubble sortion
//  int main(){
//      clock_t tStart = clock();
//      int arr[5],temp;
//          printf("enter 5 numbers\n");
//      for(int i=0;i<5;i++){
//          scanf("%d",&arr[i]);
//      }
//      for(int i=0;i<5;i++){
//          for(int j=0;j<5-i;j++){
//              if(arr[j]>arr[j+1]){
//              temp=arr[j];
//              arr[j]=arr[j+1];
//              arr[j+1]=temp;
//              }
//          }
//      }
//      printf("assending order\n");
//      for(int i=0;i<5;i++){
//          printf("%d ",arr[i]);
//      }
//      printf("\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
//      return 0;
//  }

// selection sorting
//  int main(){
//      clock_t tStart = clock();
//      int arr[5],temp;
//          printf("enter 5 numbers\n");
//      for(int i=0;i<5;i++){
//          scanf("%d",&arr[i]);
//      }
//      for(int i=0;i<5;i++){
//          for(int j=i+1;j<5;j++){
//              if(arr[i]>arr[j]){
//              temp=arr[i];
//              arr[i]=arr[j];
//              arr[j]=temp;
//              }
//          }
//      }
//      printf("assending order\n");
//      for(int i=0;i<5;i++){
//          printf("%d ",arr[i]);
//      }
//      printf("\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
//      return 0;
//  }

// put value between array
//  int main(){
//      int arr[10],num,place;
//      printf("enter your 5 numbers\n");
//      for(int i=0;i<5;i++){
//          scanf("%d",&arr[i]);
//      }
//      printf("enter your new number\n");
//      scanf("%d",&num);
//      printf("which place you want your new number\n");
//      scanf("%d",&place);
//      for(int i=5;i>=place-1;i--){
//          arr[i+1]=arr[i];
//      }
//      arr[place-1]=num;
//      for(int i=0;i<6;i++){
//          printf("num %d is %d\n",i+1,arr[i]);
//      }
//      return 0;
//  }

// add two array in ascending order
//  int main(){
//      int arr1[5],arr2[5],temp,arr3[10];
//      printf("enter your 1st array 5 numbers\n");
//      for(int i=0;i<5;i++){
//          scanf("%d",&arr1[i]);
//          arr3[i]=arr1[i];
//      }
//      printf("enter your 2st array 5 numbers\n");
//      for(int i=0;i<5;i++){
//          scanf("%d",&arr2[i]);
//          arr3[i+5]=arr2[i];
//      }
//      for(int i=0;i<10;i++){
//          for(int j=i+1;j<10;j++){
//              if(arr3[i]>arr3[j]){
//                  temp=arr3[i];
//                  arr3[i]=arr3[j];
//                  arr3[j]=temp;
//              }
//          }
//      }
//      printf("after add up\n");
//      for(int i=0;i<10;i++){
//          printf("%d ",arr3[i]);
//      }
//      return 0;
//  }

// create string function
// int len(char *str);
// void upp(char *str);
// void low(char *str);
// int main()
// {
//     char str1[50], str2[50];
//     printf("enter your 1 strings\n");
//     gets(str1);
//     printf("enter your 2 strings\n");
//     gets(str2);
// upp(str1),upp(str2);
//     printf("length of str1 %d and str2 %d\n", len(str1), len(str2));
//     printf("upper case str1 %s and str2 %s\n", str1, str2);
// low(str1),low(str2);
//     printf("lower case str1 %s and str2 %s\n", str1, str2);
//     return 0;
// }
// int len(char *str)
// {
//     int c = 0;
//     while (*str != 0)
//     {
//         if (*str != 0)
//         {
//             c++;
//             str++;
//         }
//     }
//     return c;
// }
// void upp(char *str)
// {
//     while (*str != 0)
//     {
//         if ((*str <= 122) && (*str >= 97))
//         {
//             *str = *str - 32;
//         }
//             str++;
//     }
// }
// void low(char *str){
//     while(*str!=0){
//         if(*str>=65&&*str<=90){
//             *str=*str+32;
//         }
//         str++;
//     }
// }

// shift words
//  void xleft(char *o,char *n,int m);
//  void xright(char *o,char *n,int m);
//  void xcen(char *o,char *n,int a,int b);
//  int main(){
//          char old[]="Awesome what a lovel day";
//          char new[10];

//         xleft(old,new,5);
//         printf("%s \n",new);
//         xright(old,new,5);
//         printf("%s \n",new);
//         xcen(old,new,5,9);
//         printf("%s \n",new);

//     return 0;
// }
//         void xleft(char *o,char *n,int m){
//             for(int i=0;i<m;i++){
//                 *n=*o;
//                 o++;
//                 n++;
//             }
//             *n='\0';
//         }
//         void xright(char *o,char *n,int m){
//         o=o+strlen(o)-m;
//             for(int i=0;i<m;i++){
//                 *n=*o;
//                 o++;
//                 n++;
//             }
//             *n='\0';
//         }
//         void xcen(char *o,char *n,int a,int b){
//             o=o+a;
//             for(int i=0;i<b-a;i++){
//                 *n=*o;
//                 o++;
//                 n++;
//             }
//             *n='\0';
//         }

// replace 2 spaces to one
// void xspace(char *str1, char *str2);
// int main()
// {
//     char str1[] = "oh    yeh what a  day       what a   lovely    day";
//     char str2[50];
//     xspace(str1,str2);
//     printf("%s", str2);
//     return 0;
// }
// void xspace(char *str1, char *str2)
// {
//     while (*str1 != 0)
//     {
//         if (*str1 ==' ')
//         {
//             if (*(str1 + 1) ==' ')
//             {
//                 str1++;
//             }
//             else
//             {
//                 *str2 = *str1;
//                 str1++;
//                 str2++;
//             }
//         }
//         else{
//                 *str2 = *str1;
//                 str1++;
//                 str2++;
//         }
//     }
// }

// calculate word
int xcal(char *s[4]);
int main()
{
    int c=0;
    char *str1[] = { "oh   ",
                     "yeh what a  ",
                     "day       what a   ",
                     "lovely    day"
};
    
    for (int i = 1; i < 4; i++)
    {
        while (*s[i] != 0)
        {
            if (*s == 'a')
            {
                c++;
                s[i]++;
            }
            else
            {
                s[i]++;
            }
        }
    }
printf("%d", c);

return 0;
}
