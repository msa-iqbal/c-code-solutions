  /// Alphabetic left-right angle triangle
/*
                         A   A
                     A B    A  B
                 A B  C   A  B  C
             A B C  D   A  B  C  D
         A B C D  E    A  B  C  D  E
            A B  C  D   A  B  C  D
                A B   C   A  B  C
                    A  B    A  B
                         A   A
*/
/*
            col1 col2 col3 col4 col5 col1 col2 col3 col4 col5
row1                                    A      A
row2                             A    B       A      B
row3                   A      B     C       A       B      C
row4             A   B      C     D       A       B      C      D
row5    A      B    C      D     E       A       B      C      D      E
row4             A   B      C     D       A       B      C      D
row3                   A      B     C       A       B      C
row2                             A    B       A      B
row1                                    A      A


*/

#include <stdio.h>

int main()
{
        int n, row, col;

        printf(" Enter the value of n: ");
        scanf("%d", &n);

        for(row=1; row<=n; row++){
                 /* -----------Part: 01----------- */
                for(col=1; col<=n-row; col++){
                    printf("  ");
                }
                for(col=1; col<=row; col++){
                    char ch;
                    ch=col+64;           //Using ASCII Value of A
                    printf(" %c",ch);
                }
               /* -----------Part: 02----------- */
                for(col=1; col<=row; col++){
                    char ch;
                    ch=col+64;           //Using ASCII Value of A
                    printf(" %c ",ch);
                }
                printf("\n");
        }

        for(row=n-1; row>=1; row--){
                /* -----------Part: 03----------- */
                for(col=1; col<=n-row; col++){
                    printf("  ");
                }
                for(col=1; col<=row; col++){
                    char ch;
                    ch=col+64;           //Using ASCII Value of A
                    printf(" %c",col+64);
                }
                /* -----------Part: 04----------- */
                for(col=1; col<=row; col++){
                    char ch;
                    ch=col+64;           //Using ASCII Value of A
                    printf(" %c ",col+64);
                }
                printf("\n");
        }

        return 0;
}

/* ===== Output / Result:
Input:
Enter the values of centigrade: 5

Output:
                         A   A
                     A B    A  B
                 A B  C   A  B  C
             A B C  D   A  B  C  D
         A B C D  E    A  B  C  D  E
            A B  C  D   A  B  C  D
                A B   C   A  B  C
                    A  B    A  B
                         A   A
*/

