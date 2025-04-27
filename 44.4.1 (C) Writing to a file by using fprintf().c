/// Writing to a file by using fprintf()

/*
Written by more than variable by one function
*/

#include <stdio.h>

int main()
{
     FILE *file; // create a pointer for 'file operation'.

     char fname[50]; // Create Character String
     char lname[50]; // Create Character String
     int age;

     file = fopen("basic.txt", "w"); // new file create

     if(file==NULL)
     {
        printf(" File doesn't exist");
     }
     else
     {
        printf(" File is created \n");

        /* ----- file written by user and passing file ----- */
        printf(" Enter the first name: ");
        gets(fname);   // Input String and passing to 'CharacterString'

        printf(" Enter the last name: ");
        gets(lname);   // Input String and passing to 'CharacterString'

        printf(" Enter Age: ");
        scanf("%d", &age);

        fprintf(file, "Full Name: %s %s \nAge: %d", fname, lname, age);

        printf(" File is written successfully \n");
        fclose(file); // file close
     }

     return 0;
}



