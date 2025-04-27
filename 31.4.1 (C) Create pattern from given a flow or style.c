/// Create a pattern from given a flow/syntax/style
/*
            1 0 1 0 1 0 1 0 1
               1 0 1 0 1 0 1
                  1 0 1 0 1
                     1 0 1
                        1
*/
/*
            col1 col2 col3 col4 col5 col6 col7 col8 col9
row5    1      0       1      0      1      0       1       0       1
row4             1      0      1      0      1       0       1
row3                     1      0      1      0       1
row2                             1      0      1
row1                                     1
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
           // for binary number print
            for(col=1; col<=2*row-1; col++){
                 int bin;
                 bin=col%2;
                 printf(" %d", bin);
            }
            printf("\n");
    }

    return 0;
}

/* ===== Output / Result:
Input:
Enter the value of n: 5

Output:
1 0 1 0 1 0 1 0 1
   1 0 1 0 1 0 1
      1 0 1 0 1
         1 0 1
            1
*/










