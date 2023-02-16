    // #include <stdio.h>                                           //malloc
    // #include <stdlib.h>
    // int main(){
    //     int num;
    //     float *ptr;
    //     printf("enter value for how many space u want\n");
    //     scanf("%d",&num);
    //     ptr = (float *)malloc(num*sizeof(float));
    //     for(int i=0;i<num;i++){
    //         printf("enter valur for %d\n",i);
    //         scanf("%f",&ptr[i]);
    //     }
    //     for(int i=0;i<num;i++){
    //         printf("value of %d is %f\n",i,ptr[i]);
    //     }
    //     return 0;
    // }
    //     #include <stdio.h>                                               //malloc for char
    // #include <stdlib.h>
    // int main(){
    //     int num;
    //     char *ptr;
    //     printf("enter value for how many space u want\n");
    //     scanf("%d",&num);
    //     ptr = (char *)malloc(num*sizeof(char));
    //     for(int i=0;i<num;i++){
    //         fflush(stdin);
    //         printf("enter valur for %d\n",i);
    //         scanf("%c",&ptr[i]);
    //     }
    //     for(int i=0;i<num;i++){
    //         printf("value of %d is %c\n",i,ptr[i]);
    //     }
    //     return 0;
    // }

    //     #include <stdio.h>                                          //calloc and free
    // #include <stdlib.h>
    // int main(){
    //     int num;
    //     int *ptr;
    //     printf("enter value for how many space u want\n");
    //     scanf("%d",&num);
    //     ptr = (int *)calloc(num,sizeof(int));
    //     for(int i=0;i<num;i++){
    //         printf("enter valur for %d\n",i);
    //         scanf("%d",&ptr[i]);
    //     }
    //     for(int i=0;i<num;i++){
    //         printf("value of %d is %d\n",i,ptr[i]);
    //     }
    //     // free(ptr);
    //     // for(int i=0;i<num;i++){
    //     //     printf("enter valur for %d\n",i);
    //     //     scanf("%d",&ptr[i]);
    //     // }
    //     // for(int i=0;i<num;i++){
    //     //     printf("value of %d is %d\n",i,ptr[i]);
    //     // }
    //     return 0;
    // }

//     #include <stdio.h>                                           //realloc
//     #include <stdlib.h>
//     int main(){
//         printf("you have 3 slot\n");
// int *ptr;
// ptr=(int *)malloc(3*sizeof(int));
// for(int i=0;i<3;i++){
//     printf("value for %d\n",i);
//     scanf("%d",&ptr[i]);
// }
// for(int i=0;i<3;i++){
//     printf("value for %d is %d\n",i,ptr[i]);
// }

// free(ptr);

// ptr=(int *)realloc(ptr,5*sizeof(int));
//         printf("now you have 5 slot\n");
// for(int i=0;i<5;i++){
//     printf("value for %d\n",i);
//     scanf("%d",&ptr[i]);
// }
// for(int i=0;i<5;i++){
//     printf("value for %d is %d\n",i,ptr[i]);
// }
//         return 0;
//     }