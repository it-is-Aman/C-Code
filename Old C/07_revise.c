// #include <stdio.h>
// int main(){
// int arr[]={1,2,3};
// int *ptr=&arr[0];
// printf("%u\n",ptr);
// printf("%d\n",*ptr);
// ptr++;
// ptr++;
// printf("%u\n",ptr);
// printf("%d\n",*ptr);

//     return 0;
// }

// #include <stdio.h>                                               //10 integers and store a multiplication table
// int proto(int *arr, int num)
// {
//     for (int i = 0; i < 10; i++)
//     {
//         arr[i] = num * (i + 1);

//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%dX%d is:%d\n",num , i + 1, arr[i]);
//     }
// }
//     int main()
//     {
//         int num;
//         int arr[10];
//         printf("table of is\n");
//         scanf("%d",&num);
//         proto(arr,num);
//         return 0;
//     }

// #include <stdio.h>                                   //reverses the array passed
// void proto(int arr[], int num)
// {
//     for (int i = 0; i < num; i++)
//     {
//         printf("value of %d is %d\n", i + 1, arr[i]);
//     }
//     for (int i = 0; i < num / 2; i++)
//     {
//         int temp;
//         temp = arr[i];
//         arr[i] = arr[num - 1 - i];
//         arr[num - 1 - i] = temp;
//     }
//
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     proto(arr, 6);
// printf("value of %d is %d\n", i + 1, arr[i])
//     return 0;
// }

// #include <stdio.h>                                                           //2-d
// int main()
// {
//     int a = 3, b = 10;
//     int arr[a][b];
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             printf("value of %d and %d\n", i + 1, j + 1);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             printf("value of %d and %d is%d;\n", i + 1, j + 1, arr[i][j]);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>                                                  //3x10 containing multiplication tables of the numbers
// void proto(int arr[], int num)
// {
//     for (int i = 0; i < 10; i++)
//     {
//         arr[i] = num * (i + 1);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%dX%d = %d\n", num, i + 1, arr[i]);
//     }
// }
// int main(){
//     int num;
//     int a = 3, b = 10;
//     int arr[a][b];
//     printf("value of table:\n");
//     scanf("%d", &num);
//     proto(arr[a], num);
//     printf("value of table:\n");
//     scanf("%d", &num);
//     proto(arr[a], num);
//     printf("value of table:\n");
//     scanf("%d", &num);
//     proto(arr[a], num);

//     return 0;
// }

// #include <stdio.h>                                           //three-dimensional array and print the address of its elements in increasing order.
// int main()
// {
//     int arr[2][3][4];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             for (int k = 0; k < 4; k++)
//             {
//                 printf("value of %d,%d and %d\n", i + 1, j + 1, k + 1);
//                 scanf("%d", &arr[i][j][k]);
//             }
//         }
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             for (int k = 0; k < 4; k++)
//             {
//                 printf("value of %d,%d and %d is %d\n", i + 1, j + 1, k + 1, arr[i][j][k]);
//             }
//         }
//     }
//     return 0;
// }

// #include <stdio.h>                                                          //for checking +ve and -ve value
// void proto(int arr[], int num)
// {
//     for (int i = 0; i < num; i++)
//     {

//         if (arr[i] > 0)
//         {
//             printf("%d positive value\n",arr[i]);
//         }
//         else
//             printf("%d negitive value\n",arr[i]);
//     }
// }
//     int main()
//     {
//         int arr[] = {1, -2, 5, 8, -4, -6, 2, 1};
//         proto(arr, 8);
//         return 0;
//     }