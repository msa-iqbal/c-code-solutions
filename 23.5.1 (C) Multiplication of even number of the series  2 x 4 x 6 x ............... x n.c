/// Multiplication of even number of the series  2 x 4 x 6 x ............... x n
/*
Let, Series:  2 x 4 x 6 x ............... x n
now, Calculate:
                i. find end (n) number
                ii. different between each number
Example:
                2 x 4 x 6 x ............... x 10
            = 2 x 4 x 6 x 8 x 10
            = 3840
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
        printf(" %d x", i);
        mul=mul*i;
    }
    printf(". . . . . . . x %d(n) [here, n=%d]\n",n,n);
    printf(" Multiplication of the series: %d \n", mul);

    return 0;
}

/* ===== Output / Result:
Input:
Enter the last number of the series: 10

Output:
2 x 4 x 6 x 8 x 10 x. . . . . . . x 10(n) [here, n=10]
Multiplication of the series: 3840
*/














