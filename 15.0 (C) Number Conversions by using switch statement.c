///  Number Conversions by using switch statement
#include <stdio.h>

int main()
{
        int choose, num;
        printf("----- Number Conversions ----- \n");
        printf("Press 1: Decimal to Octal \n");
        printf("Press 2: Decimal to Hexa-decimal \n");
        printf("Press 3: Hexa-decimal to Decimal \n");
        printf("Press 4: Octal to Decimal \n");
        printf("Press 5: Octal to Hexa-decimal \n");
        printf("Enter your choose: ");
        scanf("%d", &choose);

        switch(choose)
        {
                case 1:
                            printf("Enter the decimal number: ");
                            scanf("%d", &num);
                            printf("Octal number is: %o", num);
                            break;
                case 2:
                            printf("Enter the decimal number: ");
                            scanf("%d", &num);
                            printf("Hexa-decimal number is: %x", num);
                            break;
                case 3:
                            printf("Enter the hexa-decimal number: ");
                            scanf("%x", &num);
                            printf("Decimal number is: %d", num);
                            break;
                case 4:
                            printf("Enter the octal number: ");
                            scanf("%o", &num);
                            printf("Decimal number is: %d", num);
                            break;
                case 5:
                            printf("Enter the octal number: ");
                            scanf("%o", &num);
                            printf("Hexa-decimal number is: %x", num);
                            break;

                default:
                             printf("Not a number");
                             break;
        }

        return 0;
}

/* ===== Output / Result:
Input:
----- Number Conversions -----
Press 1: Decimal to Octal
Press 2: Decimal to Hexa-decimal
Press 3: Hexa-decimal to Decimal
Press 4: Octal to Decimal
Press 5: Octal to Hexa-decimal
Enter your choose: 1
Enter the decimal number: 25

Output:
Octal number is: 31
*/




