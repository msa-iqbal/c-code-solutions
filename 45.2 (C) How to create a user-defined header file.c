/// How to create a user-defined header file
/*
Steps:
        1. Create a header file like as "example.h"
        2. Create a preprocessor like as
                              #define PreprocessorName Code/Values (Example)
        3. Write the code/values within 'PreprocessorName' like as
                              #define name "Michael Scofield" (Example)
        4. Call the header file:
                              #include <stdio.h>
                               #include "header_location"
        5. Call the preprocessor in main source code:
                        int main(){
                                         // . . . Call the preprocessor
                                      }
       " Let's done! "
*/

#include <stdio.h>
#include "E:\DocX\Codeblocks\header\header.h" // get header file

int main()
{
    printf(" Name: %s \n", name); // call the preprocessor
    printf(" Age: %d \n", age); // call the preprocessor

    return 0;
}


/* ===== Output / Result:

 Input:
 ------------------
 > Input from "header.h" file with specific location
    Example: #include "E:\DocX\Codeblocks\header\header.h"
    Input Values:
    ------------------------------------
    #define name "Michael Scofield"
    #define age 39

 Output:
 ------------------
 Name: Michael Scofield
 Age: 39

*/











