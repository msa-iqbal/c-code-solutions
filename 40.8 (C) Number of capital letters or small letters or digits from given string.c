/// Number of capital letters or small letters or digits from given string

#include <stdio.h>

int main()
{
        char str_name [50];
        int i=0, capital=0, small=0, digits=0;

        printf(" Enter the string: ");
        gets(str_name);

        printf("\n");
        while(str_name[i] != '\0'){
                if(str_name[i]>=65 && str_name[i]<=90){     //Using ASCII Values
                    capital++;
                }
                else if(str_name[i]>=97 && str_name[i]<=122){   //Using ASCII Values
                    small++;
                }
                else if(str_name[i]>=48 && str_name[i]<=57){    //Using ASCII Values
                    digits++;
                }
                i++;
        }

        printf(" Number of Capital Letters: %d \n", capital);
        printf(" Number of Small Letters: %d \n", small);
        printf(" Number of Digits: %d \n", digits);

        return 0;
}

/* ===== Output / Result:
 Input:
 ----------------------------------------
 Enter the string: Hello 2k16

 Output:
 ------------------------------
 Number of Capital Letter: 1
 Number of Small Letter: 5
 Number of Digits: 3
*/









