/// Swapping two numbers by using pointer and function

#include <stdio.h>

void swap(int *p1, int *p2) // Create pointer variable p1 and p2
{
    int temp;

    // Swapping x and y
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(){
     int x = 5;
     int y = 10;

     printf(" Before swapping: x = %d, y = %d \n", x, y);

     swap(&x, &y);
     printf(" After swapping : x = %d, y = %d \n", x, y);

    return 0;
}


/* ===== Output / Result:

 Input:
 ------------------
 // (Initialization values within a program code)

 Output:
 ------------------
 Before swapping: x = 5, y = 10
 After swapping : x = 10, y = 5

*/

