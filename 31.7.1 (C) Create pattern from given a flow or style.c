/// Create a pattern from given a flow/syntax/style
/*
            E  E  E  E  E E  E  E  E
                D D D D D D D
                    C C C C C
                        B B B
                            A
*/
/*
            col1 col2 col3 col4 col5 col6 col7 col8 col9
row5    E      E      E      E      E      E       E      E      E
row4            D     D     D      D     D       D     D
row3                    C     C      C      C       C
row2                            B      B      B
row1                                     A
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf(" Enter the value of n: ");
    scanf("%d", &n);
    printf("\n");

    for(row=n; row>=1; row--){
            // for space print
            for(col=1; col<=n-row; col++){
                    printf("  ");
            }
           // for characters print
            for(col=1; col<=2*row-1; col++){
                    char ch;
                    ch=row+64;
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
E  E  E  E  E E  E  E  E
    D D D D D D D
        C C C C C
            B B B
                A
*/













