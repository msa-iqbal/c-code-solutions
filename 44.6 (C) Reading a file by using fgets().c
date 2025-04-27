/// Reading a file by using fgets()
/*
How many string (length) can be reading in a line from an existing file.
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

         /*  Reading a file single line by line with string length by fgetc() */
         while(!feof(file))
         {
             fgets(ch, 20, file);   // reading from an existing file and pass String to StringVar.
             printf("%s \n", ch);
         }
         fclose(file); // file close
     }

     return 0;
}
