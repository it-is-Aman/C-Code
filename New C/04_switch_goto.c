// switch
//  int i=1,j=3;
//  switch (i+j) //switch have formula and value in ()
//  {
//  case 1:
//  printf("1");
//  break;
//  case 2+1:    //can write as 3 or 2+1 but they have to return some value in integer form
//  printf("3");
//  break;
//  default:    //if no case match so ddefault execute
//  printf("default");
//  }

// goto
//  int i=2;
//  if(i==1){
//      printf("lol\n");
//  }
//  else if(i==2){
//      goto qwe;
//  }
//  else {
//  printf("awesome\n");
//  }
//  qwe:printf("nice\n");   //if execution not go through goto then this qwe: still execute so use exit()

// #include <stdio.h>
// int main()
// {
    // factorial and prime and odd using switch
    //  int num, n, fac = 1, prime;
    //  while (1)
    //  {
    //  printf("select 1=factorial 2=prime 3=odd&even 4=exit\n");
    //  scanf("%d", &num);
    //      switch (num)
    //      {
    //      case 1:
    //          printf("enter number\n");
    //          scanf("%d", &n);
    //          for (int i = 1; i <= n; i++)
    //          {
    //              fac = fac * i;
    //          }
    //          printf("factorial=%d\n", fac);
    //          break;

    //     case 2:
    //         printf("enter number\n");
    //         scanf("%d", &n);
    //         for (int i = 2; i < n; i++)
    //         {
    //             if (n % i == 0)
    //             {
    //                 prime = 0;
    //                 break;
    //             }

    //         }
    //         if (prime == 0)
    //             printf("%d is not prime\n", n);
    //         else
    //             printf("%d is prime\n", n);
    //             break;

    //     case 3:
    //         printf("enter number\n");
    //         scanf("%d", &n);
    //         if (n % 2 == 0)
    //         {
    //             printf("%d is even\n", n);
    //         }
    //         else
    //             printf("%d is odd\n", n);
    //             break;

    //     case 4:
    //     exit();
    //     }
    // }

    // grace marks using switch
    //     int class, sub;
    //     printf("enter your class and no. of subjects in which you are failed\n");
    //     scanf("%d%d", &class, &sub);
    //     switch (class)
    //     {
    //     case 1:
    //         if (sub > 3)
    //         {
    //             printf("you do not need any grace marks\n");
    //         }
    //         else if (sub <= 3)
    //         {
    //             printf("5 marks per subject\n");
    //         }
    //         break;
    //     case 2:
    //         if (sub > 2)
    //         {
    //             printf("you do not need any grace marks\n");
    //         }
    //         else if (sub <= 2)
    //         {
    //             printf("4 marks per subject\n");
    //         }
    //         break;
    //     case 3:
    //         if (sub > 1)
    //         {
    //             printf("you do not need any grace marks\n");
    //         }
    //         else if (sub <= 1)
    //         {
    //             printf("5 marks per subject\n");
    //         }
    //         break;
    //     }
    //     return 0;
    // }
