/// Area of the triangle by using function

#include <stdio.h>

double triangle (double b, double h){
        return 0.5 * b * h;
}

int main()
{
       double base, height;

       printf(" Enter value of Base: ");
       scanf("%lf", &base);
       printf(" Enter value of Height: ");
       scanf("%lf", &height);

       double area = triangle(base, height);

       printf("\n The area of triangle: %.2lf", area );
}

/* ===== Output / Result:
 Input:
 ----------------------------------------
 Enter value of base: 3
 Enter value of height: 5

 Output:
 ------------------------------
 The area of triangle: 7.50
*/
