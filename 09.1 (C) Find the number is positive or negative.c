/// Find the number is positive or negative

#include<stdio.h>

int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);

    if(x>0)
    {
        printf("The number is positive \n");
    }
    else if(x<0){
        printf("The number is negative \n");
    }
    else
        printf("The number is not positive or negative \n");

    return 0;
}

/* ===== Output / Result:
Input:
Enter the number: 5

Output:
The number is positive
*/






