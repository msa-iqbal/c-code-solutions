/// File Create and Close

#include <stdio.h>

int main()
{
     FILE *file; // create a pointer for 'file operation'.

     file = fopen("basic.txt", "w"); // new file create

     if(file==NULL)
     {
         printf(" File doesn't exist");
     }
     else
     {
         printf(" File is created");
         fclose(file); // file close
     }

     return 0;
}
