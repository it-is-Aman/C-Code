// #include<stdio.h>
// #include<conio.h>
// void main()
// {
    // 1.
    // int bs,gs,da,hr;
    //     printf("enter your bs\n");
    //     scanf("%d",&bs);
    //     da=.4*bs;
    //     hr=.2*bs;
    //     gs=bs-da-hr;
    //     printf("your gs is %d",gs);

    // 2.
    // int d1;
    // printf("enter your distance in km\n");
    // scanf("%d",&d1);
    // printf("your distance \n m=%d,\ncm=%d,\nfeet=%d,\ninch=%d\n",d1*1000,d1*100000,d1*3280,d1*39370);

    // 3.
    // int m1,m2,m3,m4,m5,total;
    // float per;
    // printf("enter your marks\n");
    // scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    // total=m1+m2+m3+m4+m5;
    // per=total/5;
    // printf("your total marks and per are %d and %f",total,per);

    // 6.
    // int n1=2,n2=4,c;
    // printf("before interchange %d and %d\n",n1,n2);
    // // c=n1;
    // // n1=n2;
    // // n2=c;
    // n1=n1*n2;
    // n2=n1/n2;
    // n1=n1/n2;
    // printf("after interchange %d and %d\n",n1,n2);

    //7.
    // int num,sum=0,a,b,c,d,e;
    // printf("enter your 5 digit number\n");
    // scanf("%d",&num);
    // a=num%10;
    // num=num/10;
    // b=num%10;
    // num=num/10;
    // c=num%10;
    // num=num/10;
    // d=num%10;
    // num=num/10;
    // e=num%10;
    // sum=a+b+c+d+e;
    // // while(num>0)
    // // {
    // //     sum=sum+num%10;
    // //     num=num/10;
    // // }
    // printf("sum is %d\n",sum);
    // printf("reverse order %d%d%d%d%d\n",a,b,c,d,e);

    //8.
    // int num,rev=0,n1,n2,n3,n4,n5;
    // printf("enter number");
    // scanf("%d",&num);
    //     n1=num%10;
    //     num=num/10;
    //     rev=rev+n1*10000;
    //     n2=num%10;
    //     num=num/10;
    //     rev=rev+n2*1000;
    //     n3=num%10;
    //     num=num/10;
    //     rev=rev+n3*100;
    //     n4=num%10;
    //     num=num/10;
    //     rev=rev+n4*10;
    //     n5=num%10;
    //     num=num/10;
    //     rev=rev+n5;
    // printf("reverse is %d",rev);

    //10.
    // //men 52    litrate men 35 of total population
    // //total litracy 48  total population 80000
    //illiterate men and women
    // int pop,litpop,illpop,litmen,illmen,litwomen,illwomen,totmen;
    // pop=80000/100;
    // litpop=48*pop;
    // litmen=35*pop;
    // litwomen=litpop-litmen;
    // illpop=52*pop;
    // totmen=52*pop;
    // illmen=totmen-litmen;
    // illwomen=illpop-illmen;
    // printf("your illiterate men is %d and women %d",illmen,illwomen);

    //11.
    // int num,hun,fif,ten;
    // printf("enter number in hundread\n");
    // scanf("%d",&num);
    // hun=num/100;
    // num=(num%100);
    // fif=num/50;
    // ten=(num%50)/10;
    // printf("your cash %d and hundred=%d, fifty=%d, ten=%d",num,hun,fiv,ten);

    //12.
    // int total,profit,price,price1;
    // printf("enter total and profit\n");
    // scanf("%d%d",&total,&profit);
    // price=total-profit;
    // price1=price/15;
    // printf("your cost of 1 peice is %d",price1);

    //13.
    // int num,n1,n2,n3,n4,n5,sum=0;
    // printf("enter your 5 digit number\n");
    // scanf("%d",&num);
    // n1=num%10;
    // num=num/10;
    // n1++;
    // n2=num%10;
    // num=num/10;
    // n2++;
    // n3=num%10;
    // num=num/10;
    // n3++;
    // n4=num%10;
    // num=num/10;
    // n4++;
    // n5=num%10;
    // n5++;
    // sum=sum+n5*10000;
    // sum=sum+n4*1000;
    // sum=sum+n3*100;
    // sum=sum+n2*10;
    // sum=sum+n1;
    // printf("your new digit is %d",sum);

//     getch();
// }