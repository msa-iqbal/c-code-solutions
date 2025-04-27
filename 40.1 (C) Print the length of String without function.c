/// Print the length of string without function

#include <stdio.h>

int main()
{
        char name [100];
        int i=0, len=0;

        printf(" Enter the string: ");
        gets(name);

        while(name[i] != '\0')
        {
            i++;
            len++;
        }
        printf(" Length: %d", len);

        return 0;
}

/* ===== Output / Result:
 Input:
 ----------------------------------------
 Enter the string: Kabir khan

 Output:
 ------------------------------
 Length: 10
*/






