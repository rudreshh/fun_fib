/**************************************************************** 
 *  When we input './fib -h', this function will be executed.   *
 *  This function will print the introductions of command line. *
 ****************************************************************/

#include <stdio.h>

#include "fib.h"

void fh()
{
    printf("(c) Copyright 2015, Sercomm. All rights reserved.\n");
    printf("fib v2.0 (for Linux) @ 2015-07-29 designed by Matthew Mei\n");
    printf("Usage: fib -n <number>\n");
    printf("       fib -t <alg #> -f <filename>\n");
    printf("       fib -[hTvV]\nOption Description:\n");
    printf("  -n <number> : Caculate fib(n)\n");
    printf("  -h : Show help informations.\n");
    printf("  -t : Test algorithm #, out to file.\n");
    printf("       0 means the best algorithm.\n");
    printf("  -T : Test all algorithms.\n");
    printf("  -v : Show simple version number.\n");
    printf("  -V : Show detail version informations.\n");

    return;
}

