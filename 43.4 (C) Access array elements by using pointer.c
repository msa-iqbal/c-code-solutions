///  Access array elements by using pointer

#include <stdio.h>

int main()
{
     int arr[5] = {10, 20, 30, 40, 50};
     int *p;

     p = &arr[0]; // initialize address of array element

     for(int i=0; i<5; i++)
     {
         printf(" %d \n", *p);
         p++;  // move next index
     }

     return 0;
}


/* ===== Output / Result:

 Input:
 ------------------
 // (Initialization values within a program code)

 Output:
 ------------------
 10
 20
 30
 40
 50

*/

