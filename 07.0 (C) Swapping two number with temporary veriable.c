/// Swapping two number with temporary variable
#include<stdio.h>

int main()
{
    int x=10;
    int y=15;
    int temp;

    temp = x;  // Value asign || temp=10  
    x=y;       // Value swapping x and y || x=15
    y=temp;    // Value swapping y and t temp || y=10

    printf("Value of x: %d \n", x);
    printf("Value of y: %d \n", y);

    return 0;
}

/* ===== Output / Result:
Input:

Output:
Value of x: 15
Value of y: 10
*/


