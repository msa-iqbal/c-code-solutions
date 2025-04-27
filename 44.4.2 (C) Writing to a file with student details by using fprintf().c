///  Writing to a file with student details by using fprintf()

#include <stdio.h>

int main()
{
     FILE *file; // create a pointer for 'file operation'.

     char name[50];
     int age, num;
     double phone;

     file = fopen("student_details.txt", "a"); // new file create

     if(file==NULL)
     {
            printf(" File doesn't exist");
     }
     else
     {
            printf(" File is created \n");

            /* ----- writing to a file with student details ----- */
            printf(" Enter the the total number of students: ");
            scanf("%d", &num);

            for(int i=1; i<=num; i++)
            {
                printf(" Enter the name: ");
                scanf("%s", &name);

                printf(" Enter the age: ");
                scanf("%d", &age);

                printf(" Enter the phone number: ");
                scanf("%lf", &phone);

                fprintf(file, "\n No. of Student: %d\n", i);
                fprintf(file, " ----------------------\n", i);
                fprintf(file, " Name: %s\n", name);
                fprintf(file, " Age: %d\n", age);
                fprintf(file, " Phone (+880): 0%.0lf\n", phone);

            }
            printf(" \n\n\tFile is written successfully \n");
            fclose(file); // file close
     }

     return 0;
}

