// conditional operator
//  (5<6)?printf("awesome"):printf("lol");

// pow(a+b,3);

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

// macros
// #include <stdio.h>
// #define LOL 6 // write word in captial which you want to change
// int main()
// {
//     int a = 5;
//     if (a >= LOL)
//     {
//         printf("awesome\n");
//     }
//     else
//     {
//         printf("not\n");
///     }
//     return 0;
// }

// #include <stdio.h>
// #define LOL(x) (3.14*r*r)// write word in captial which you want to change
// int main()
// {
//     int r=5,area;
//     area=LOL(r);
//     printf("area of a triangle is %d\n",area);
//     return 0;
// }