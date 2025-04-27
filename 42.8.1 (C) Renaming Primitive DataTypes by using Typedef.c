/// Renaming Primitive DataTypes

#include <stdio.h>

int main(){

    typedef char Letter; // Renaming 'char' to 'Letter'.
    Letter ch;
    ch='A';
    printf(" Ch = '%c' \n", ch);

    return 0;
}

/* ===== Output / Result:

 Input:
 ------------------
 // (Initialization values within a program code)

 Output:
 ------------------
 Ch = 'A'

*/
