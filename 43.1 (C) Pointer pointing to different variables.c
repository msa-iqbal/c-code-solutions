/// Pointer pointing to different variables

#include <stdio.h>

int main(){
     int x = 5;
     int y = 10;
     int z = 15;

     int *p; // Create pointer variable

     p=&x;   // assign 'x' variable_address to pointer_variable.
     printf(" Value of x = %d \n", *p);

     p=&y;  // assign 'y' variable_address to pointer_variable.
     printf(" Value of y = %d \n", *p);

     p=&z;   // assign 'z' variable_address to pointer_variable.
     printf(" Value of z = %d \n", *p);

    return 0;
}

/* ===== Output / Result:

 Input:
 ------------------
 // (Initialization values within a program code)

 Output:
 ------------------
 Value of x = 5
 Value of y = 10
 Value of z = 15

*/



