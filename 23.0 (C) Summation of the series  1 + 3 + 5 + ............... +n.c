/// Summation of the series  1 + 3 + 5 + ............... +n
/*
Let, Series:  1 + 3 + 5 + ............... +n
now, Calculate:
                i. find end (n) number
                ii. different between each number
*/

#include <stdio.h>

int main()
{
    int n, sum=0;

    printf(" Enter the last number of the series: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i=i+2)
    {
        sum=sum+i;
    }

    printf("\n 1+3+5+. . . . . .+%d \n", n);
    printf(" Summation of the series: %d \n", sum);

    return 0;
}

/* ===== Output / Result:
Input:
Enter the last number of the series: 15

Output:
1+3+5+. . . . . .+15
Summation of the series: 64
*/



