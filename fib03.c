/*
 *--------------------------------------------------
 * @brief
 *       Algorithm 3 calculate the  fib number.   
 *--------------------------------------------------
 */

#include <stdio.h>
#include "fib.h"

/* 
 * @para
 *       n: the number of fibnacci. 
 */
int fib03(int n)
{
    int i;
    int fib1 = 1, fib2 = 1;

    if(n <= 0)
	{
    	return -1;
	}
    else if(n < 3) 
	{
        return 1; 
	}
    else
	{
        for(i=2; i<n; i++)
        {
            fib2 = fib1 + fib2;
            if(fib2 < 0) 
			{ 
				return -2; 
			}
            fib1 = fib2 - fib1;
        } 
     }   
    return fib2;
}

