/// Alphabetic right angle triangle
/*
        A
        B B
        C C C
        D D D D
        C C C
        B B
        A
*/
/*
           col1 col2 col3 col4
row1  A
row2  B       B
row3  C       C       C
row4  D       D      D     D
row3  C       C       C
row2  B       B
row1  A
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf(" Enter the value of n: ");
    scanf("%d", &n);

    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            char ch;
            ch=row+64;           //Using ASCII Value of A
            printf(" %c ",ch);
        }
        printf("\n");
    }

    for(row=n-1; row>=1; row--){
        for(col=1; col<=row; col++){
            char ch;
            ch=row+64;           //Using ASCII Value of A
            printf(" %c ",ch);
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
B  B
C  C  C
D  D  D  D
E  E  E  E  E
D  D  D  D
C  C  C
B  B
A
*/





