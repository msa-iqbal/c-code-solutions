  /// Print the characters from given string

#include <stdio.h>

int main()
{
        char name [50];
        int i=0;

        printf("Enter the string: ");
        gets(name);

        while(name[i] != '\0')
        {
            printf(" %c \n", name[i]);
            i++;
        }
        return 0;
}

/* ===== Output / Result:
 Input:
 ----------------------------------------
Enter the string: Nazrull Islam

 Output:
 ------------------------------
 N
 a
 z
 r
 u
 l
 l

 I
 s
 l
 a
 m
*/






