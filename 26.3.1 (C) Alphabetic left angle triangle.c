/// Alphabetic left angle triangle
/*
        A B C D
           A B C
               A B
                   A
*/
/*
           col1 col2 col3 col4
row4   A      B      C     D
row3            A     B      C
row2                    A     B
row1                            A
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
            ch=col+64;           //Using ASCII Value of A
            printf(" %c",col+64);
        }
        printf("\n");
    }

    return 0;
}

/* ===== Output / Result:
Input:
Enter the value of n: 5

Output:
 A B  C D  E
     A B  C D
         A B  C
             A  B
                  A
*/





