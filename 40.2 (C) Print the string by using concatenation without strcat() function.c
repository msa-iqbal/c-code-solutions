/// Print the string by using concatenation without strcat() function

#include <stdio.h>

int main()
{
        char name1[50] = "Michael ";
        char name2[] = "Scofield";
        int len=0, i=0, j=0;

        while(name1[i] != '\0')
        {
            i++;
            len++;
        }

        while(name2[j] != '\0')
        {
            name1[len+j] = name2[j];
            j++;
        }
        printf(" The string concatenation is: %s \n", name1);

        return 0;
}

/* ===== Output / Result:
 Output:
 ------------------------------
 The string concatenation is: Michael Scofield
*/
