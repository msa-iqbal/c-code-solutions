/// Writing to a file by using fputs()

/*
> Writing full string in a file
> fputs(stringName, pointerName);
*/

#include <stdio.h>

int main()
{
     FILE *file; // create a pointer for 'file operation'.

     char name[100]; // Create Character String

     file = fopen("basic.txt", "w"); // new file create

     if(file==NULL)
     {
         printf(" File doesn't exist");
     }
     else
     {
         printf(" File is created \n");

         /* ----- file written by string ----- */
         printf(" Enter the string: ");
         gets(name);   // Input String and passing to 'CharacterString'

         fputs(name, file);  // writing full string in a file
         printf(" File is written successfully \n");
         fclose(file); // file close
     }

     return 0;
}


