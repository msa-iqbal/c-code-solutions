/// Calculate factorial by using recursion function
/*
 Explain:
              let, n=5 (find factorial)
              5! = 5 x 4!
              4! = 4 x 3!
              3! = 3 x 2!
              2! = 2 x 1!
              1! = 1
              now, n = n * (n-1)!
                 so, n = n * fact(n-1)     [here, fact(n-1) is recursive function]

            Recursive function:
                     n = n * fact(n-1)!
                        = 5 * fact(5-1)! = 5x4! = (5x24) =120 [Recursive call]       (Step 5)
                        = 4 * fact(4-1)! = 4x3! = (4x6) = 24 [Recursive call]          (Step 4)
                        = 3 * fact(3-1)! = 3x2! = (3x2) = 6  [Recursive call]           (Step 3)
                        = 2 * fact(2-1)! = 2x1! = (2x1) = 2  [Recursive call]           (Step 2)
                        = 1 * fact(1-0)! = 1x1! = (1x1) = 1  [Base Case]                 (Step 1)
             here, fact() == fact(n-1) is the process of repeating items in a self-similar way.
*/

#include <stdio.h>

int fact(int n){           // User-defined Function
        if(n==1){      // Base case of recursion function
             return 1;
        }
        else{
            return n * fact(n-1);       // Recursive Call
        }
}

int main()              //Main Function & starts to run a program
{
         int factorial, result;

         printf(" Enter the value: ");
         scanf("%d", &factorial);

         result=fact(factorial);


        printf(" %d factorial is : %d \n",factorial, result);

        return 0;
}

/* ===== Output / Result:
 Input:
 ------------------
 Enter the value: 5

 Output:
 ------------------
 5 factorial is : 120
*/
