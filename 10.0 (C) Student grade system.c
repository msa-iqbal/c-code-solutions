/// Student grade system 

/* Student's mark --- Grade
    80-100                    A+
    70-89                      A
    60-69                      A-
    50-59                      B
    40-49                      C
    33-39                      D
    0-32                        F
*/

/* ----------------------- Program code: 01 ------------------------*/
#include<stdio.h>

int main()
{
    int num;
    printf("Enter the exam mark: ");
    scanf("%d", &num);

    if(80<=num && num<=100)
    {
        printf("\n\tThe Student's exam mark: %d and grade: 'A+' \n", num);
    }
    else if(70<=num && num<80)
    {
        printf("\n\tThe Student's exam mark: %d and grade: 'A' \n", num);
    }
    else if(60<=num && num<70)
    {
        printf("\n\tThe Student's exam mark: %d and grade: 'A-' \n", num);
    }
    else if(50<=num && num<60)
    {
        printf("\n\tThe Student's exam mark: %d and grade: 'B' \n", num);
    }
    else if(40<=num && num<50)
    {
        printf("\n\tThe Student's exam mark: %d and grade: 'C' \n", num);
    }
    else if(33<=num && num<40)
    {
        printf("\n\tThe Student's exam mark: %d and grade: 'D' \n", num);
    }
    else if(0<=num && num<32)
    {
        printf("\n\tThe Student's exam mark: %d and grade: 'F' \n", num);
    }
    else{
        printf("\n\tThis mark doesn't accepted!");
    }

    return 0;
}

/* ===== Output / Result:
Input:
Enter the exam mark: 65

Output:
The Student's exam mark: 65 and grade: 'A-'
*/

/* ----------------------- Program code: 02 ------------------------/
#include<stdio.h>

int main()
{
    int num;
    printf("Enter the exam mark: ");
    scanf("%d", &num);

    if (80<=num && num<=100)
    {
        printf("\n\tThe Student's exam mark: %d and grade: 'A+' \n", num);
    }
    else if (num>=70)
    {
        printf("\n\tThe Student's exam mark: %d and grade: 'A' \n", num);
    }
    else if (num>=60)
    {
        printf("\n\tThe Student's exam mark: %d and grade: 'A-' \n", num);
    }
    else if(num>=50)
    {
        printf("\n\tThe Student's exam mark: %d and grade: 'B' \n", num);
    }
    else if(num>=40)
    {
        printf("\n\tThe Student's exam mark: %d and grade: 'C' \n", num);
    }
    else if(num>=33)
    {
        printf("\n\tThe Student's exam mark: %d and grade: 'D' \n", num);
    }
    else if(0<=num && num<32)
    {
        printf("\n\tThe Student's exam mark: %d and grade: 'F' \n", num);
    }
    else{
        printf("\n\tThis mark doesn't accepted!");
    }
    return 0;
}

/* ===== Output / Result:
Input:
Enter the exam mark: 65

Output:
The Student's exam mark: 65 and grade: 'A-'
*/





