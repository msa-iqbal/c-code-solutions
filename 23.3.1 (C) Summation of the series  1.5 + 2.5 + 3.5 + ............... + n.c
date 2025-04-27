/// Summation of the series  1.5 + 2.5 + 3.5 + ............... + n
/*
Let, Series:  1.5 + 2.5 + 3.5 + ............... + n
now, Calculate:
                i. find end (n) number
                ii. different between each number
Example:
               1.5 + 2.5 + 3.5 + ............... + 5.5
            = 1.5 + 2.5 + 3.5 + 4.5 + 5.5
            = 15
*/

#include <stdio.h>

int main()
{
    float n, i, sum=0;

    printf(" Enter the last number (float) of the series (n): ");
    scanf(" %f", &n);

    printf("\n");
    for(i=1.5; i<=n; i++)
    {
        printf(" %.1f + ", i);
        sum=sum+i;
    }
    printf(". . . . . . . + %.1f(n) [here, n=%.1f]\n",n,n);
    printf(" Summation of the series: %.1f \n", sum);

    return 0;
}

/* ===== Output / Result:
Input:
Enter the last number of the series: 5.5

Output:
1.5 +  2.5 +  3.5 +  4.5 +  5.5 + . . . . . . . + 5.5(n) [here, n=5.5]
Summation of the series: 17.5
*/






