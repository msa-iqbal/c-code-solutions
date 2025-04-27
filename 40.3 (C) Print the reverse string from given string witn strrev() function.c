/// Print the reverse string from given string witn strrev() function

#include <stdio.h>

int main()
{
        char name1[] = "Michael Scofield";
        char name2[50];
        int len=0, i=0, j=0;

        while(name1[i] != '\0')
        {
            i++;
            len++;
        }

        for(j=0, i=len-1;  i>=0; i--, j++)
        {
            name2[j] = name1[i];
        }
        name2[j] = '\0';

        printf(" The normal string is : %s \n", name1);
        printf(" The reverse string is: %s \n", name2);

        return 0;
}

/* ===== Output / Result:

 Output:
 --------------------------------------------
 The normal string is : Michael Scofield
 The reverse string is: dleifocS leahciM
*/


