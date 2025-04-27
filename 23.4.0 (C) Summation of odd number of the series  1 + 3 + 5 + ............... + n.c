/// Summation of odd number of the series  1 + 3 + 5 + ............... + n
/*
Let, Series:  1 + 3 + 5 + ............... + n
now, Calculate:
                i. find end (n) number
                ii. different between each number
Example:
               1 + 3 + 5 . . . . + 9
            = 1 + 3 + 5 + 7 + 9
            = 25
*/

#include <stdio.h>

int main()
{
    int n, i, sum=0;

    printf(" Enter the last number of the series (n): ");
    scanf(" %d", &n);

    printf("\n");
    for(i=1; i<=n; i=i+2)
    {
        printf(" %d +", i);
        sum=sum+i;
    }
    printf(". . . . . . . + %d(n) [here, n=%d]\n",n,n);
    printf(" Summation of the series: %d \n", sum);

    return 0;
}

/* ===== Output / Result:
Input:
Enter the last number of the series: 9

Output:
1 + 3 + 5 + 7 + 9 + . . . . . . . + 9(n) [here, n=9]
Summation of the series: 25
*/








