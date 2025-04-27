/// Find the number is even or odd

#include<stdio.h>

int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);

    if(x%2 == 0)
    {
        printf("The number is even \n");
    }
    else{
        printf("The number %d is odd \n", x);
    }

    return 0;
}

/* ===== Output / Result:
Input:
Enter the number: 5

Output:
The number 5 is odd
*/



