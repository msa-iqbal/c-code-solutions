/// Calculate the Quadratic Equation
/* Quadratic Equation: a*x*x + b*x + c      OR
                                      x = (-b+-sqrt(b*b - 4*a*c)) / (2*a)
                         Here, x1 =  (-b+sqrt(b*b - 4*a*c)) / (2*a)
                                   x2 =  (-b-sqrt(b*b - 4*a*c)) / (2*a)
                                   -----------------------------------
                        now, let,  d (discrimen) =  sqrt(b*b - 4*a*c)
                        now, x1 =  (-b+d) / (2*a)
                                 x2 =  (-b-d) / (2*a)
                    // Print: x1, x2
*/
#include<stdio.h>

int main()
{
    double a, b, c, d, x1, x2;
    printf("Enter the value of a, b, c are: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d=sqrt(b*b - 4*a*c);

    x1=(-b+d) / (2*a);
    x2 =(-b-d) / (2*a);

    printf("The value of x1 is: %.2lf \n", x1);
    printf("The value of x2 is: %.2lf \n", x2);

    return 0;
}

/* ===== Output / Result:
Input:
Enter the value of a, b, c are: 2 5 3

Output:
The value of x1 is: -1.00
The value of x2 is: -1.50
*/



