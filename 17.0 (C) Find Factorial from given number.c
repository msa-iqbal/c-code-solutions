/// Calculate find the factorial value from given number
/*
0!= 1
1!= 1
2!= 1x2= 2
3!= 1x2x3= 6
4!= 1x2x3x4= 24
*/
#include <stdio.h>

int main()
{
        int num, i, factorial=1;
        printf("\n Enter the any number: ");
        scanf("%d", &num);

        for(i=1; i<=num; i++){
                factorial = factorial*i;
        }
        printf(" Factorial value is: %d", factorial);

        return 0;
}

/* ===== Output / Result:
Input:
 Enter the any number: 5

Output:
Factorial value is: 120
*/




