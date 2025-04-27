/// Create a pattern from given a flow/syntax/style (Pyramid)
/*
                             A
                         A B C
                     A B C D E
                 A B C D E F G
             A B C D E F G H I
*/
/*
            col1 col2 col3 col4 col5 col6 col7 col8 col9
row1                                      A
row2                              A     B      C
row3                      A     B      C     D       E
row4              A     B      C     D      E       F      G
row5      A     B      C     D      E      F       G     H      I
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf(" Enter the value of n: ");
    scanf("%d", &n);
    printf("\n");

    for(row=1; row<=n; row++){
            // for space print
            for(col=1; col<=n-row; col++){
                    printf("  ");
            }
           // for characters print
            for(col=1; col<=2*row-1; col++){
                    char ch;
                    ch=col+64;
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
             A B C
         A B C D E
     A B C D E F G
 A B C D E F G H I
*/











