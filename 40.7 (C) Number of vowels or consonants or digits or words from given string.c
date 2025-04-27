/// Number of vowels or consonants or digits or words from given string

#include <stdio.h>

int main()
{
        char str_name [50];
        int i=0, vowel=0, consonant=0, digits=0, word=0;
        char ch=0;

        printf(" Enter the string: ");
        gets(str_name);

        printf("\n");
        while((ch=str_name[i]) != '\0'){
                if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
                    vowel++;
                }
                else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
                    consonant++;
                }
                else if(ch>='0' && ch<='9'){
                    digits++;
                }
                else if(ch==' '){
                    word++;
                }
                i++;
        }
        word++;

        printf(" Number of Vowels: %d \n", vowel);
        printf(" Number of Consonants: %d \n", consonant);
        printf(" Number of Digits: %d \n", digits);
        printf(" Number of Words: %d \n", word);

        return 0;
}

/* ===== Output / Result:
 Input:
 ----------------------------------------
 Enter the string: Hello 2k16

 Output:
 ------------------------------
 Number of Vowels: 2
 Number of Consonants: 4
 Number of Digits: 3
 Number of Words: 2
*/


