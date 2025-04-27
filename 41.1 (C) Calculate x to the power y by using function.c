/// Calculate x to the power y by using function
/*
Explain:
             Base *  Exponent
             2 * 3 = 2 x 2 x 2 = 8
             2 * 4 = 2 x 2 x 2 x 2 = 16

             Base^Exponent = x^y = 2^3 = 8
*/

#include <stdio.h>

void power_cal (double b, double ex){
        double result=1, i;
        for(i=1; i<=ex; i++){
            result = result * b ;
        }
        printf("\n Result (x^y): %.2lf \n", result );
}

int main()
{
       double base, exp;

       printf(" Enter value of Base (x): ");
       scanf("%lf", &base);
       printf(" Enter value of Exponent (y): ");
       scanf("%lf", &exp);

       power_cal(base, exp); //Set the values of  the arguments and called the function
}

/* ===== Output / Result:
 Input:
 ----------------------------------------
 Enter value of Base (x): 2
 Enter value of Exponent (y): 3

 Output:
 ------------------------------
 Result (x^y): 8.00
*/

