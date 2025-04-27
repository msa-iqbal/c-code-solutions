/// Alphabetic left angle triangle
/*
                    A
                A B
             A B C
         A B C D
*/
/*
           col1 col2 col3 col4
row1                            A
row2                   A      B
row3           A      B      C
row4  A       B      C     D
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf(" Enter the value of n: ");
    scanf("%d", &n);

    for(row=1; row<=n; row++){

        for(col=1; col<=n-row; col++){
            printf("  ");
        }
        for(col=1; col<=row; col++){
            char ch;
            ch=col+64;           //Using ASCII Value of A
            printf(" %c",ch);
        }
        printf("\n");
    }

    return 0;
}

/* ===== Output / Result:
Input:
Enter the value of n: 5

Output:
                    A
                A B
             A B C
         A B C D
     A B C D E

*/


