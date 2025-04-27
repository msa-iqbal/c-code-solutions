/// Summation of the series  1 + 2 + 3 + ............... + n
/*
Let, Series:  1 + 2+ 3 + ............... + n
now, Calculate:
                i. find end (n) number
                ii. different between each number
Example:
               1 + 2 + 3 . . . . + 5
            = 1 + 2 + 3 + 4 + 5
            = 15
*/

#include <stdio.h>

int main()
{
    int n, i, sum=0;

    printf(" Enter the last number of the series: ");
    scanf(" %d", &n);

    printf("\n");
    for(i=1; i<=n; i++)
    {
        printf(" %d + ", i);
        sum=sum+i;
    }
    printf(". . . . . . . + %d(n) [here, n=%d]\n",n,n);
    printf(" Summation of the series: %d \n", sum);

    return 0;
}

/* ===== Output / Result:
Input:
Enter the last number of the series: 5

Output:
1 +  2 +  3 +  4 +  5 + . . . . . . . + 5(n) [here, n=5]
Summation of the series: 15
*/





