/// Check the letter is vowel or consonant

#include <stdio.h>

int main()
{
              char ch;
              printf("Enter the letter: ");
              scanf("%c", &ch);

              if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                    printf("This letter is vowel \n");
              }
              else if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
                    printf("This letter is vowel \n");
              }
              else
                    printf("This letter is consonant \n");

              return 0;
}


/* ===== Output / Result:
Input:
Enter the letter: y

Output:
This letter is consonant
*/


