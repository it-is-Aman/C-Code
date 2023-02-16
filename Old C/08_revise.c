// #include <stdio.h>                       //input char by char and string
// #include <string.h>
// int main(){
// char str1[10];
// char str2[10];
// char c;
// int i=0;
// printf("enter your name\n");
// scanf("%s",str1);

// printf("enter your name");
// for(i=0;c!='\n';i++){
// fflush(stdin);
// scanf("%c",&c);
// str2[i]=c;

// }
// str2[i-1]='\0';
// printf("your name is :%s\n",str1);
// printf("your name is :%s\n",str2);
// int a = strcmp(str2,str1);
// printf("%d\n",a);

//     return 0;
// }

// #include <stdio.h>                                       //length using function
// #include <string.h>
// int proto(char *str)
// {
//     int i = 0;
//     int l = 0;
//     while (*str != '\0')
//     {
//         str++;
//         l++;
//     }
//     return l;
// }
//     int main()
//     {
//         int l;
//         char str[] = "qwerty";
//         int a = strlen(str);
//         printf("length is:%d\n", a);
//         l = proto(str);
//         printf("length is:%d\n", l);

//         return 0;
//     }

// #include <stdio.h>                                          //slice
// #include <string.h>
// void slice(char *str,int m,int n){
//     int i=0;
//     while((i+m)<n){
//         str[i]=str[i+m];
//         i++;
//     }
//     str[i]='\0';
// }
// int main(){
// char str1[]="qwertyasdasd";
// slice(str1,1,5);
// printf("now is: %s",str1);
//     return 0;
// }

// #include <stdio.h>                                               //copy function
// #include <string.h>
// void proto(char str1[],char str2[]){
//     strcpy(str2,str1);
// }
// int main(){
// char str1[]="qwerty";
// char str2[10];
// proto(str1,str2);
// printf("vlaue of str1 is: %s\n",str1);
// printf("vlaue of str1 is: %s\n",str2);
//     return 0;
// }

// #include <stdio.h>                                               //encrypt
// #include <string.h>
// void proto(char str[])
// {
//     for (int i = 0; str[i] != '\0'; i++)        or         while(*str!='\0')
//     {                                                    {
//         str[i] += 1;                                     *str += 1;
//     }                                                      str++;}
// }
// int main()
// {
//     char str[] = "qwerty";
//     proto(str);
//     printf("encrypt value will be :%s", str);
//     return 0;
// }

// #include <stdio.h>                                               //decrypt
// #include <string.h>
// void proto(char str[])
// {
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         str[i] -= 1;
//     }
// }
// int main()
// {
//     char str[] = "rxfsuz";
//     proto(str);
//     printf("encrypt value will be :%s", str);
//     return 0;
// }

// #include <stdio.h>                                           //occrance
// #include <string.h>
// int proto(char str[], char c)
// {
//     int i = 0;
//     int o = 0;
//     while (str[i] != '\0')
//     {
//         if (str[i] == c)
//         {
//             o++;
//         }
//         i++;
//     }
//     return o;
// }
// int main()
// {
//     int o;
//     char str[] = "qwerty777";
//     o=proto(str, '7');
//     printf("occrance is :%d", o);
//     return 0;
// }

// #include <stdio.h>                                           //whether char is present or not
// #include <string.h>
// void proto(char str[], char c)
// {
//     int i = 0, o = 0;
//     while (str[i] != '\0')
//     {
//         if (str[i] == c)
//         {
//             printf("yes there is an character\n");
//             o++;
//         }

//         i++;
//     }
//     printf("occrance is :%d\n", o);
// }
// int main()
// {
//     char c;
//     char str[] = "whatdoesitmean";
//     printf("enter character to see if it there or not\n");
//     scanf("%c", &c);
//     proto(str, c);
//     return 0;
// }