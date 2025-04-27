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
    int start=1, end, sum=0;

    printf(" Enter the last number of the series: ");
    scanf("%d", &end);

    while(start<=end)
    {
        sum=sum+start;
        start=start+2;
    }

    printf("\n 1+3+5+. . . . . .+%d \n", end);
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




