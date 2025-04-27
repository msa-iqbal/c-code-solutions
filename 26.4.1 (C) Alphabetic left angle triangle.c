/// Alphabetic left angle triangle
/*
         D D D D
             C C C
                B B
                    A
*/
/*
           col1 col2 col3 col4
row4   D      D      D     D
row3            C      C     C
row2                     B     B
row1                             A
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf(" Enter the value of n: ");
    scanf("%d", &n);

    for(row=n; row>=1; row--){

        for(col=1; col<=n-row; col++){
            printf("  ");
        }
        for(col=1; col<=row; col++){
            char ch;
            ch=row+64;           //Using ASCII Value of A
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
E  E  E    E  E
    D  D  D  D
         C  C  C
              B  B
                   A
*/



