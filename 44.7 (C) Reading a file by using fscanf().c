/// Reading a file by using fscanf()
/*
Read single/multiple word(s) by single/multiple FormatSpecifier (with _var) by fscanf()
*/

#include <stdio.h>

int main()
{
     FILE *file; // create a pointer for 'file operation'.
     char ch[50];

     file = fopen("basic.txt", "r"); // reading existing file

     if(file==NULL)
     {
         printf(" File doesn't exist");
     }
     else
     {
         printf(" File is opened \n");

         /* Read single/multiple word(s) by single/multiple FormatSpecifier (with _var) */
         while( !feof(file))
         {
             fscanf(file, "%s", &ch);   // read an existing file & pass String to StringVar.
             printf("%s \n", ch);
         }
         fclose(file); // file close
     }

     return 0;
}

