// #include <stdio.h>
// int proto(int *arr,int num){
// for(int i=0;i<num;i++){
//     printf("%d is %d\n",i+1,arr[i]);
// }
// }
// int main()
// {
//     int arr[4];
//     arr[0]=6;
//     arr[1]=7;
//     arr[2]=8;
//     arr[3]=9;

    // printf("%d\n",arr[0]);
    // printf("%d\n",arr[1]);
    // printf("%d\n",arr[2]);
    // printf("%d\n",arr[3]);

    // printf("enter value:");
    // printf("%d\n",arr[0]);

    // int arr[4];                    // int arr[]={1,2,3,4};
    // printf("%d\n",arr[0]);
    // printf("%d\n",arr[1]);
    // printf("%d\n",arr[2]);
    // printf("%d\n",arr[3]);
    // for (int i = 0; i < 4; i++)        //using loops
    // {
    //     printf("enter num %d\n", i + 1);
    //     scanf("%d", &arr[i]);
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("your num %d is %d\n", i + 1, arr[i]);
    // }

    // int arr[] = {1, 2};
    // int *x = &arr[0];
    // int *y = &arr[1];
    // printf("%u\n", x);
    // printf("%d\n", *x);
    // x++;
    // printf("%u\n", x);
    // printf("%d\n", *x);

        // int arr[]={2,6,5,7};               //function defination on top
    // proto(&arr[0],4);

// int arr[2][3];
// for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
// printf("row %d column%d\n",i+1,j+1);
// scanf("%d",&arr[i][j]);
//     }
// }
// for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
// printf("row %d column%d value is%d\n",i+1,j+1,arr[i][j]);
//     }
// }

//     return 0;
// }

// #include <stdio.h>
// int proto(int arr[]){
// arr[1]=5;
// }
// int main(){
// int arr[]={1,2,3};
// printf("value of 2 is %d\n",arr[1]);
// proto(arr);
// printf("value of 2 is %d\n",arr[1]);                    //value changes coz it give address of that no.
//     return 0;
// }