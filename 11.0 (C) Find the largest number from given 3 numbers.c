/// Find the largest number from given 3 numbers
#include<stdio.h>

int main()
{
    int x, y, z;
    printf("Enter the 1st number: "); // 1st number
    scanf("%d", &x);
    printf("Enter the 2nd number: "); // 2nd number
    scanf("%d", &y);
    printf("Enter the 3rd number: ");  // 3rd number
    scanf("%d", &z);

    if(x>y && x>z)
    { 
        printf("\n The largest number is: %d\n", x);
    }
    else if(y>x && y>z){
        printf("\n The largest number is: %d\n", y);
    }
    else
        printf("\n The largest number is: %d \n", z);

    return 0;
}

/* ===== Output / Result:
Input:
Enter the 1st number: 25
Enter the 2nd number: 36
Enter the 3rd number: 14

Output:
The largest number is: 36
*/




