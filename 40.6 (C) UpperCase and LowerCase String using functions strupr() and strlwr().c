/// UpperCase and LowerCase String using functions strupr() and strlwr()

#include <stdio.h>

int main()
{
        char str [20] = "Michael Scofield";

        printf("\n\n Original String: %s\n", str);

        //UpperCase
        strupr(str);
        printf("\n\n UpperCase: %s \n", str);

        //LowerCase
        strlwr(str);
        printf(" LowerCase: %s \n", str);

        return 0;
}

/* ===== Output / Result:
 Output:
 ------------------------------
 Original String: Michael Scofield

 UpperCase: MICHAEL SCOFIELD
 LowerCase: michael scofield
*/
