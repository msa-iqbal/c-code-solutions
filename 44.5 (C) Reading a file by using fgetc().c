/// Reading a file by using fgetc()
/*
Reading an existing file with single character by character by fgetc()
*/

#include <stdio.h>

int main()
{
     FILE *file; // create a pointer for 'file operation'.
     char ch;

     file = fopen("basic.txt", "r"); // reading existing file

     if(file==NULL)
     {
         printf(" File doesn't exist");
     }
     else
     {
         printf(" File is opened \n");

         /*  Reading a file single character by character by fgetc() */
         while( !feof(file))
         {
             ch = fgetc(file);   // reading from an existing file and pass characters to variable
             printf("%c", ch);
         }
         fclose(file); // file close
     }

     return 0;
}
