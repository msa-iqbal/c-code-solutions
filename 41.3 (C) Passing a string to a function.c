/// Passing a string to a function

#include <stdio.h>

void display (char str[]){          //User-defined Function
        int i=0;
        while( str[i] != '\0'){
            printf("%c", str[i]);
            i++;
        }
}

int main()              //Main Function & starts to run a program
{
        char str_word[] = "Michael Scofield";
        display(str_word);

        return 0;
}

/* ===== Output / Result:
 Input: (attached)
 -------------------
 Michael Scofield

 Output:
 -------------------
 Michael Scofield
*/
