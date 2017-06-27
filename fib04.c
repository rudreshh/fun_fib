/*
 *-----------------------------------------------
 * @brief Algorithm 4: 
 *        Recursive fibnacci algorithm.               
 *-----------------------------------------------
 */

#include <stdio.h>

#include "fib.h"

int fib04( int n)
{
	int fibnacci;

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
		fibnacci = fib04(n-2) + fib04(n-1);
		if(fibnacci < 0)
		{
			return -2;
		}
		else
		{
			return fibnacci;
		}
//		return(fib04(n-2) + fib04(n-1));
	}
}
