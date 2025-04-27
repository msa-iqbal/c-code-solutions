/// How to create a simple preprocessor by using #define

#include <stdio.h>
#define word1 printf(" Stay Hungry, \n");  // Create a preprocessor
#define word2 " Stay Foolish." // Create a preprocessor

int main()
{
    word1 //call the preprocessor
    printf(" %s \n", word2);
    return 0;
}

/* ===== Output / Result:

 Input:
 ------------------
 // (Initialization values/data within a program code)

 Output:
 ------------------
 Stay Hungry,
   Stay Foolish.

*/


