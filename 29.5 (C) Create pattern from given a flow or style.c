/// Create a pattern from given a flow/syntax/style
/*
                 A  A  A  A  A
                 B  B   B  B  B
                 C  C  C  C  C
                 D  D  D  D  D
                 E   E   E  E   E
*/
/*
            col1 col2 col3 col4 col5
row1    A      A      A       A      A
row2    B      B       B       B      B
row3    C      C      C       C      C
row4    D      D      D       D      D
row5    E       E      E        E       E
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf(" Enter the value of n: ");
    scanf("%d", &n);
    printf("\n");

    for(row=1; row<=n; row++){
        for(col=1; col<=n; col++){
            char ch;
            ch=row+64;
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
 A  A  A  A  A
 B  B   B  B  B
 C  C  C  C  C
 D  D  D  D  D
 E   E   E  E   E
*/





