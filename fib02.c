/*
 *---------------------------------------------------- 
 * @para
 *       The algorithm 2 of fibonacci series.      
 *----------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>

#include "fib.h"

/** 
 * @para
 *      n is the number of fibnacci. 
 */
int fib02(int n)
{
    int i;
    int result;

    if(n <= 0)
	{
    	return -1;
	}
    else
    {
        int *p = (int *)malloc(sizeof(int)*(n+1));

        p[0]=0;
        p[1]=1;
        /* 
         * A 'for' loop is used to fib number.
         * When n=1, return p[1] directory.
         * When n >= 1, return the final p[i].
         * When the p[1]<0, retrun -2.  
         */
        for(i=2; i <= n; i++)
        {
            p[i] = p[i-1]+p[i-2];
            if(p[i] < 0)
			{
            	return -2;
			}
        }
    
        result = p[n];
        free(p);
    }
    return result;
}

