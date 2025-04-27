/// Calculate Fibonacci series of the given values
/*
Fibonacci series,
Let, initial 1st_no=0, 2nd_no=1  [first & second number are always constant]
Formula:
               Fibonacci Value (n) = Summation of previous 2 values
Example:
               Fibonacci Value (0) = 1st_no = 0
               Fibonacci Value (1) = 2nd_no = 1
               Fibonacci Value (2) = 1st_no + 2nd_no = 0+1 = 1  (3rd_no)
               Fibonacci Value (3) = 2nd_no + 3rd_no = 1+1 = 2 (4th_no)
               Fibonacci Value (4) = 3rd_no + 4th_no = 1+2 = 3  (5th_no)
               Fibonacci Value (5) = 4th_no + 5th_no = 2+3 = 5  (6th_no)
               Fibonacci Value (5) = 4th_no + 5th_no = 3+5 = 8  (7th_no)
*/

#include <stdio.h>

int main()
{
        int n, i, first=0, second=1, count=0, fibo;

        printf(" Enter the Fibonacci value (n): ");
        scanf(" %d", &n);

        printf("\n");
        while(count<=n){
                if(count<=1){
                    fibo=count;
                }
                else{
                    fibo=first+second;
                    first=second;   //Swapping second to first
                    second=fibo;   //Swapping fibo to second
                }
                printf(" Fibonacci Value (%d): %d\n", count, fibo);

                count++;
        }

        return 0;
}

/* ===== Output / Result:
Input:
Enter the Fibonacci value (n): 5

Output:
Fibonacci Value (0): 0
Fibonacci Value (1): 1
Fibonacci Value (2): 1
Fibonacci Value (3): 2
Fibonacci Value (4): 3
Fibonacci Value (5): 5
*/





