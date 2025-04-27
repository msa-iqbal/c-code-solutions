/// Create s pattern from given a flow/syntax/style
/*
                     A  B  C  D  E
                     A  B  C  D  E
                     A  B  C  D  E
                     A  B  C  D  E
                     A  B  C  D  E
*/
/*
            col1 col2 col3 col4 col5
row1    A      B      C       D      E
row2    A      B      C       D      E
row3    A      B      C       D      E
row4    A      B      C       D      E
row5    A      B      C       D      E

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
            ch=col+64;
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
 A  B  C  D  E
 A  B  C  D  E
 A  B  C  D  E
 A  B  C  D  E
 A  B  C  D  E
*/

