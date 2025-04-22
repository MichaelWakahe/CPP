#include <stdio.h> // This directive tells the precompiler to fetch the header file, stdio.h. The header file is
                   // required in order to use the printf() function.

int main()
{
    printf("4 times 5 is %d\n", 4 * 5);
    // All functions must be declared before use, and the stdio.h file contains the declaration for printf().

    return (0);
}