/// String swapping

#include <stdio.h>

int main()
{
        char str1 [20] = "Michael Scofield";
        char str2 [20] = "Junior Lincon";
        char temp [20];

        printf(" Before Swapping: \n");
        printf(" str1 = %s \n", str1);
        printf(" str2 = %s \n", str2);

        // String swapping
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);

        printf("\n\n After Swapping: \n");
        printf(" str1 = %s \n", str1);
        printf(" str2 = %s \n", str2);

        return 0;
}

/* ===== Output / Result:
 Output:
 ------------------------------
 Before Swapping:
 str1 = Michael Scofield
 str2 = Junior Lincon


 After Swapping:
 str1 = Junior Lincon
 str2 = Michael Scofield
*/

