/// Swapping two numbers by using pointer

#include <stdio.h>

int main(){
     int x = 5;
     int y = 10;
     int temp;

     int *p1, *p2; // Create pointer variable

     p1=&x;   // assign 'x' variable_address to pointer_variable.
     p2=&y;   // assign 'y' variable_address to pointer_variable.

     // Swapping x and y
     temp = *p1;
     *p1 = *p2;
     *p2 = temp;

     printf(" Value of x = %d \n", x);
     printf(" Value of y = %d \n", y);

     return 0;
}



/* ===== Output / Result:

 Input:
 ------------------
 // (Initialization values within a program code)

 Output:
 ------------------
  Value of x = 10
  Value of y = 5

*/
