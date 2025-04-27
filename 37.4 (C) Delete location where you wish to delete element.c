/// Delete location where you wish to delete element

#include <stdio.h>

int main()
{
    int arr[100], position, i, n;
    int var;

    while(var=arr[100])
    {
        printf("\n Enter number of elements in array: ");
        scanf("%d", &n);

        printf("\n Enter %d elements of the positions: \n", n);
        for(i=0; i<n; i++)
        {
            printf(" Enter: ");
            scanf("%d", &arr[i]);
        }

        /* ----- where you wish to delete element ----- */
        printf("\n Enter the location where you wish to delete element: ");
        scanf("%d", &position);

        if(position >= n+1)
        {
            printf(" Deletion not possible \n");
        }
        else
        {
            printf("\n");
            for (i=position-1; i<n-1; i++)
            {
                arr[i] = arr[i+1];
                printf(" Resultant array: \n");
            }
            for(i=0; i<n-1; i++)
            {
                printf(" %d \n",  arr[i]);
            }
        }
    }
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 Enter number of elements in array: 5
 Enter 5 elements of the positions:
 Enter: 11
 Enter: 12
 Enter: 13
 Enter: 14
 Enter: 15
 Enter the location where you wish to delete element: 2

 Output:_________________
 Resultant array:
 Resultant array:
 Resultant array:
 11
 13
 14
 15

*/
