/// Swapping two number without temporary variable
#include<stdio.h>

int main()
{
    int x=10;
    int y=15;

    x = x - y;      // x=10-15=-5 || x=-5
    y = x + y;     // y=-5+15=10 || y==10
    x = y - x;      // x=10-(-5)=15 || x==15

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



