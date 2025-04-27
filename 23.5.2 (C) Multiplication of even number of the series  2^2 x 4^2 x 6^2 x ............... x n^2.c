/// Multiplication of even number of the series  2^2 x 4^2 x 6^2 x ............... x n^2
/*
Let, Series:  2^2 x 4^2 x 6^2 x ............... x n^2
now, Calculate:
                i. find end (n) number
                ii. different between each number
Example:
                2^2 x 4^2 x ............... x 8^2
            = 2^2 x 4^2 x 6^2 x 8^2
            = 147456
*/

#include <stdio.h>

int main()
{
    long int n, i, mul=1;

    printf(" Enter the last number of the series (n): ");
    scanf(" %d", &n);

    printf("\n");
    for(i=2; i<=n; i=i+2)
    {
        printf(" %d^2 x", i);
        mul=mul*i*i;
    }
    printf(". . . . . . . x %d(n)^2 [here, n=%d]\n",n,n);
    printf(" Multiplication of the series: %d \n", mul);

    return 0;
}

/* ===== Output / Result:
Input:
Enter the last number of the series (n): 8

Output:
2^2 x 4^2 x 6^2 x 8^2 x. . . . . . . x 8(n)^2 [here, n=8]
Multiplication of the series: 147456
*/
















