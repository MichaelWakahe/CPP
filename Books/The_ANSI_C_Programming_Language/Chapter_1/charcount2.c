//
// Created by Michael on 08-Jun-20.
//

#include <stdio.h>
/* count characters in input; 2nd version */

main()
{
    double nc;

    for (nc = 0; gechar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}