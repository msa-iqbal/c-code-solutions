/// Checking a string is Palindrome or not
/*
Condition:
              - Input string == Reverse string
			    If, both result are same then the input number is Palindrome string.
			    else, the input string isn't Palindrome string.
*/

#include <stdio.h>

int main()
{
        char name1[100];
        char name2[100];
        int len=0, i=0, j=0;
        int compare;

        printf(" Enter the string: ");
        gets(name1);

        // Calculate the string length
        while(name1[i] != '\0')
        {
            i++;
            len++;
        }

        // Calculate for reverse string
        for(j=0, i=len-1;  i>=0; i--, j++)
        {
            name2[j] = name1[i];
        }
        name2[j] = '\0';

        printf("\n The normal string is : %s \n", name1);
        printf(" The reverse string is: %s \n", name2);

        // Compare both strings for they are same or not
        compare = strcmp(name1, name2); //If both string are same then return '0'
        if(compare == 0)
            printf("\n The string is Palindrome \n");
        else
           printf("\n The string isn't Palindrome \n");

       return 0;
}

/* ===== Output / Result:
 Input:
 ------------------------------
 Enter the string: Michael Scofield

 Output:
 ------------------------------
 The normal string is : Michael Scofield
 The reverse string is: dleifocS leahciM
 The string isn't Palindrome
*/


