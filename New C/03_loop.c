// int a=2,b;
// b=++a;
// printf("a=%d\nb=%d",a,b);
// #include <stdio.h>
// #include <conio.h>
// #include <math.h>
// int main()
// {

    // extra income
    //  int num,hour=0,i=1;
    //  while(i<=10){
    //      printf("enter no. of hour\n");
    //      scanf("%d",&num);
    //      if(num>40){
    //          printf("rs=%d\n",12*(num-40));
    //      }
    //      else{
    //          printf("no money\n");
    //      }
    //      i++;
    //  }

    // fraction
    //  int num,sum=1;
    //  printf("enter your number\n");
    //  scanf("%d",&num);
    //  for(int i=1;i<=num;i++){
    //      sum=sum*i;
    //  }
    //  printf("fraction is=%d\n",sum);

    // power
    //  int a,b,pow=1;
    //  printf("enter your values\n");
    //  scanf("%d%d",&a,&b);
    //  for(int i=1;i<=b;i++){
    //      pow=pow*a;
    //  }
    //  printf("a=%d and b=%d and power =%d",a,b,pow);

    // print all ascii values
    //  for(int i=0;i<255;i++){
    //      printf("ascii %d = %c\n",i,i);
    //  }

    // armstrong number
    //  int num,a,b,c;
    //  for(int i=1;i<=500;i++){
    //  c=i%10;
    //  num=i/10;
    //  b=num%10;
    //  a=i/100;
    //  // c=i%10;
    //  // b=i%100;
    //  // b=(b-c)/10;
    //  // a=i/100;
    //  if((a*a*a)+(b*b*b)+(c*c*c)==i){
    //      printf("%d\n",i);
    //  }
    //  }

    // match stick game
    //  int num=21,user,comp;
    //  while(1){
    //      printf("matches left %d\n",num);
    //      printf("pick matches 1,2,3 or 4\n");
    //      scanf("%d",&user);
    //      if(user>0&&user<5){

    //         num=num-user;
    //         printf("matches left %d\n",num);

    //         comp=5-user;
    //         printf("computer pickup %d\n",comp);

    //         num=num-comp;
    //         if(num==1){
    //             printf("you lose");
    //             break;
    //         }
    //     }
    // }

    // positive negative numbers
    //  int num,h,p=0,n=0,z=0;
    //  printf("enter numbers how many places\n");
    //  scanf("%d",&h);
    //  for(int i=0;i<h;i++){
    //      printf("enter number\n");
    //      scanf("%d",&num);
    //      if(num>0){
    //          p++;
    //      }
    //      else if(num<0){
    //          n++;
    //      }
    //      else if(num=0){
    //          z++;
    //      }
    //  }
    //  printf("your places=%d and p=%d n=%d z=%d\n",h,p,n,z);

    // large and small numbers with range
    //  int num,n,s,l;
    //  printf("how many number u wanna compare\n");
    //  scanf("%d",&num);
    //  printf("enter your number\n");
    //  scanf("%d",&n);
    //  l=n;
    //  s=n;
    //  for(int i=0;i<num-1;i++){
    //  printf("enter your number\n");
    //  scanf("%d",&n);
    //  if(n>l){
    //      l=n;
    //  }
    //  else if(n<s){
    //      s=n;
    //  }
    //  }
    //  printf("l=%d and s=%d and range=%d",l,s,l-s);

    // prime numbers
    //  int num, prime;
    //  printf("prime numbers are\n\n");
    //  for (int num = 1; num <= 300; num++)
    //  {

    //     for (int i = 2; i < num - 1; i++)
    //     {
    //         prime = 1;
    //         if (num % i == 0)
    //         {
    //             prime = 0;
    //             break;
    //         }
    //     }
    //     if (prime == 1)
    //     {
    //         printf("%d\n", num);
    //     }
    // }

    // smile symbol
    //  int num = 1;
    //  printf("smile screen\n");
    //  for (int i = 0; i <= 10; i++)
    //  {
    //      printf("\n");
    //      for (int j = 0; j <= 150; j++)
    //      {
    //          printf("%c", num);
    //      }
    //  }

    // //put value in formula
    // int fac=1,cal=0;
    // printf("seven term value is\n");
    // for(int i=1;i<=7;i++){
    //     for(int j=1;j<=i;j++){
    //         fac=fac*j;
    //     }
    //     cal+=i/fac;
    // }
    // printf("%d",cal)

    // all combination
    //  printf("all combination\n");
    //  for(int i=1;i<=3;i++){
    //      for(int j=1;j<=3;j++){
    //          for(int k=1;k<=3;k++){
    //              printf("%d%d%d\n",i,j,k);
    //          }
    //      }
    //  }

    // formula based
    //  float i;
    //  printf("iq is\n");
    //  for(int y=1;y<=6;y++){
    //      for(float x=5.5;x<=12.5;x+=.5){
    //          i=2+(y+ (0.5 * x));
    //          printf("y=%d x=%f i=%f\n",y,x,i);
    //      }
    //  }

    // pattern
    //  printf("incresing decreasing pattern\n");
    //  for(int i=1;i<=5;i++){
    //      for(int j=1;j<=i;j++){
    //          printf("%c",1);
    //      }
    //      printf(" ");
    //      for(int j=i;j<=5;j++){
    //          printf("%c",1);
    //      }
    //      printf("\n");
    //  }

    // pattern
    //  printf("your pattern\n");
    //  for(int i=65;i<=71;i++){
    //      for(int j=65;j<=i;j++){
    //          printf("%c",j);
    //      }
    //      for(int l=71;l>i;l--){
    //          printf(" ");
    //      }
    //      for(int l=71;l>i;l--){
    //          printf(" ");
    //      }
    //      for(int k=i;k>=65;k--){
    //          printf("%c",k);
    //      }
    //      printf("\n");
    //  }

    // table
    //  int num;
    //  printf("enter table number\n");
    //  scanf("%d",&num);
    //  for(int i=1;i<=10;i++){
    //      printf("%dX%d=%d\n",num,i,num*i);
    //  }

    // another pattern
    //  printf("your pattern\n");
    //  for(int i=71;i>=65;i--){
    //      for(int j=65;j<=i;j++){
    //          printf("%c",j);
    //      }
    //      for(int l=71;l>i;l--){
    //          printf(" ");
    //      }
    //      for(int l=71;l>i;l--){
    //          printf(" ");
    //      }
    //      for(int k=i;k>=65;k--){
    //          printf("%c",k);
    //      }
    //      printf("\n");
    //  }

    // formula
    // float x,val, sum, val1;
    // printf("enter your value\n");
    // scanf("%f", &x);
    // val1 = (x - 1) / x;
    // val = val1;
    // sum = val1;
    // for (int i = 2; i <= 7; i++)
    // {
    //     val *= val1;
    //     sum += (val / 2) ;
    // }
    // printf("sum=%f", sum);

    // pattern of pyramid
    // int num=1;
    // printf("pyramid pattern\n");
    // for(int i=1;i<=4;i++){
    //     for(int j=i;j<=4;j++){
    //         printf(" ");
    //     }
    //     for(int j=1;j<=i;j++){
    //         printf(" %d",num);
    //         num++;
    //     }
    //     printf("\n");
    // }

//     getch();
//     return 0;
// }