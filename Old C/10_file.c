// #include <stdio.h>                                           //reading a file
// int main()
// {
//     int num;
//     FILE *fptr;
//     fptr = fopen("fornuminput.txt", "r");
//     if (fptr == NULL)
//     {
//         printf("sorry not found");
//     }
//     else
//     {
//         fscanf(fptr, "%d", &num);
//         printf("value in file would be: %d", num);
//     }
//     fclose(fptr);
//     return 0;
// }

// #include <stdio.h>                                           //print to file
// int main(){
//     int num=123;
// FILE *fptr;
// fptr = fopen("asd123.txt","w");
// fprintf(fptr,"%d\n",num);
// fprintf(fptr,"Tutorial");
// fclose(fptr);
//     return 0;
// }

// #include <stdio.h>                                           //fgetc
// int main(){
// FILE *fptr;
// fptr=fopen("qwerty.txt","r");
// printf("%c\n",fgetc(fptr));
// printf("%c\n",fgetc(fptr));
// printf("%c\n",fgetc(fptr));
// printf("%c\n",fgetc(fptr));

// fptr=fopen("lol.txt","w");
// fputc('t',fptr);                                             //putc 
// fputc('h',fptr);
// fputc('i',fptr);
// fputc('s',fptr);
// fputc('\n',fptr);
// fputc('i',fptr);
// fputc('s',fptr);
// fclose(fptr);
//     return 0;
// }


// #include <stdio.h>                                           //EOF
// int main(){
// FILE *fptr;
// fptr=fopen("qwerty.txt","r");
// char c=fgetc(fptr);
// while(c!=EOF){
//     printf("%c",c);
//     c=fgetc(fptr);
// }
// do{                                                      //or using do while loop
//     c=fgetc(fptr);
//     printf("%c",c);
// }while(c!=EOF);
//     return 0;
// }

