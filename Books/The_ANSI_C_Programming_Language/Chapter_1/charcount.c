//
// Created by Michael on 08-Jun-20.
//

#include <stdio.h>
/* count characters in input; 1st version */

main()
{
    long nc;
    nc = 0;

    while (getchar() != EOF)
        ++nc;

    printf("%ld\n", nc);
}