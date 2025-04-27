/// Multiplication of the series  1^2 x 2^2 x 3^2 x ............... x n^2
/*
Let, Series:  1^2 x 2^2 x 3^2 x ............... x n^2
now, Calculate:
                i. find end (n) number
                ii. different between each number
Example:
                1^2 x 2^2 x 3^2 x ............... x 5^2
            = 1^2 x 2^2 x 3^2 x 4^2 x 5^2
            = 14400
*/

#include <stdio.h>

int main()
{
    int n, i, mul=1;

    printf(" Enter the last number of the series (n): ");
    scanf(" %d", &n);

    printf("\n");
    for(i=1; i<=n; i++)
    {
        printf(" %d^2 x ", i);
        mul= mul*i*i;
    }
    printf(". . . . . . . x %d(n)^2 [here, n=%d]\n", n, n);
    printf(" Multiplication of the series: %d \n", mul);

    return 0;
}

/* ===== Output / Result:
Input:
Enter the last number of the series (n): 5

Output:
1^2 x  2^2 x  3^2 x  4^2 x  5^2 x . . . . . . . x 5(n)^2 [here, n=5]
Multiplication of the series: 14400
*/


