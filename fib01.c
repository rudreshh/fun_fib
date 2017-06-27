/* 
 *---------------------------------------------------------
 * @brief
 *       The algorithm 1 of fibonacci series. 
 *---------------------------------------------------------
 */

#include <stdio.h>
#include <string.h>

#include "fib.h"
   
int fib01(int n)
{
    int i, fib3;
    int fib1=1, fib2=1;

    if(n <= 0)
	{
    	return -1;
	}
    else if(n <= 2)
	{
    	return 1;
	}
    else
	{
    	for (i=1; i<n-1; i++)
        {
            fib3 = fib1 + fib2;
            if(fib3 < 0)
			{
            	return -2;
			}
            fib1 = fib2;
            fib2 = fib3;
        }
		return fib3;
	}
}

