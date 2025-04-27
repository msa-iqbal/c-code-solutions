/// Calculate the summation and average from given numbers
#include <stdio.h>

int main()
{
    int x, y, z, sum;
    float avg;
    printf("Enter the 3 numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    sum = x+y+z;
    avg = (float) sum/3;  /// TypeCasting (Convert One DataType to Another DataType)

    printf("The summation is: %d \n", sum);
    printf("The Average is: %.2f \n", avg);
    return 0;
}

/* ===== Output / Result:
Input:
Enter the 3 numbers: 12 12 13

Output:
The summation is: 37
The Average is: 12.33
*/






