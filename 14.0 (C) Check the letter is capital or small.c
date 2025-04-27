/// Check the letter is capital or small?

#include <stdio.h>

int main()
{
              char ch;
              printf("Enter any letter: ");
              scanf("%c", &ch);

              if('a'<=ch && ch<='z'){
                    printf("\n Small letter \n");
              }
              else if ('A'<=ch && ch<='Z'){
                    printf("\n Capital letter \n");
              }
              else
                    printf("\n Not a letter \n");

              return 0;
}


/* ===== Output / Result:
Input:
Enter any letter: s

Output:
Small letter
*/
