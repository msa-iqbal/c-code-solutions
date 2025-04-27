/// Writing to a file by using fputc()
/*
> Writing characters, single by single in a file
> fputc(stringName, pointerName);
*/

#include <stdio.h>

int main()
{
     FILE *file; // create a pointer for 'file operation'.

     char name[20] = "Hello World!";
     int length = strlen(name); // finding string length

     file = fopen("basic.txt", "w"); // new file create

     if(file==NULL)
     {
         printf(" File doesn't exist");
     }
     else
     {
         printf(" File is created \n");

         /* ----- file written by string ----- */
         for(int i=0; i<length; i++)
         {
             fputc(name[i], file); // writing characters, single by single in a file
         }
         printf(" File is written successfully \n");
         fclose(file); // file close
     }

     return 0;
}

