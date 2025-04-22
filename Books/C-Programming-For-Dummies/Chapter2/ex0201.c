/*
Compile with this command:
clang -c -Wall ex0201.c

The -Wall switch to report all warnings.

From the clang man page:
-c     Run  all  of  the above, plus the assembler, generating a target “.o” object file.

The name "a.out" is the default C program filename. You can reset this name by specifying the -o (“little o”) switch
followed by the desired output filename when building. For example:

clang -Wall ex0201.c -o ex0201
*/
#include <stdio.h>

int main()
{
    puts("Greetings, human.");
    return 0;
}