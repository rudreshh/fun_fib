
/*
 *----------------------------------------------------------------------------
 *
 * @brief  Algorithm 0 of fibnacci, it can calculate max number.               
 *         In this algorithm, character string array is used to store number,  
 *         so fibonacci number will be more bigger.                            
 *----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <string.h>
#include <assert.h>

#include "fib.h"

/*
 * @para 
 *       n: the index fibonacci number.
 *       result: pointer result store the result of fibonacci.
 */
char *fib00(int n, char *result)
{
	void cpy(int len, char *src, char *dest);
	void fib_num(char *s1, char *s2, char *ret);

	int i;

	/* Set two initial value of fib. */
	char fib1[N] = {"1"};
	char fib2[N] = {"1"};
	
	if(n <= 0 )
	{
		sprintf(result, "%d", -1);
	}
	else if(n <= 2)
	{
		sprintf(result, "%d", 1);
	}
	else
	{
		for(i=3; i <= n; i++)
		{
			int len1, len2;
			
			/* Calculate the sum of fib1 and fib2, and return the result. */
			fib_num(fib1, fib2, result);

			len1 = strlen(fib2);
			len2 = strlen(result);

			cpy(len1, fib1, fib2);
			cpy(len2, fib2, result);

		}
	}
	return result;
}

/*
 * @para 
 *       fib1,fib2: represent the fibonacci number will be used to plus.
 *       ret: return fib1 + fib2.
 */
void fib_num(char *fib1, char *fib2, char *ret)
{
	/* 
	 * Beacuse of the number are stored in character string,
	 * so before make a plus, reverse the number.
	 */
	void reverse(char *s);

	int len, tmp, acc=0;

	int len1 = strlen(fib1);
	int len2 = strlen(fib2);

	if(fib1 == NULL || fib2 == NULL || ret == NULL)
	{
		return;
	}

	reverse(fib1);
	reverse(fib2);
	
	/* 
	 * In this algorithm, the idea of bit by bit addition is adopted.
	 * If bit add bit bigger than 10, set acc=1.
	 * Through the length of fib as the limit of recycle.
	 */
	for(len = 0; (len < len1) && (len < len2); len++)
	{
		tmp = fib1[len] - '0' + fib2[len] - '0' + acc;
		ret[len] = tmp % 10 + '0';
  		
		if(tmp >= 10)
		{
			acc = 1;
		}
		else
		{
			acc = 0;
		}
	}

	if(len < len1)
	{
		for(; len < len1; len++)
		{
			tmp = fib1[len] - '0' + acc;
			ret[len] = tmp%10 + '0';
			if(tmp >= 10)
			{
				acc = 1;
			}
			else
			{
				acc = 0;
			}
		}
	}

	if(len < len2)
	{
		for(; len < len2; len++)
		{
			tmp = fib2[len] - '0' + acc;
			ret[len] = tmp%10 + '0';
			if(tmp >= 10)
			{
				acc = 1;
			}
			else
			{
				acc = 0;
			}
		}
	}
	
	/* If acc=1, the highest of ret is set to 1. */
	if(acc == 1)
	{
		ret[len++] = '1';
	}
	ret[len] = '\0';
	
	/* Recover the order of fib after a plus calculate. */
	reverse(ret);
	reverse(fib2);
	
	return;
}

/* 
 * @brief
 *       Reverse the oder of fibonacci number. 
 * @para
 *       s: the fibonacci number.
 */
void reverse(char *s)
{
	int i = 0, len;
	char tmp;

	len = strlen(s);

	while(i < len-i-1)
	{
		tmp = s[i];
		s[i] = s[len-i-1];
		s[len-i-1] = tmp;
		i++;
	}
	return;
}

/*
 * len is the length of src.
 */
void cpy(int len, char *dest, char *src)
{
	int i;

	assert((dest != NULL) && (src != NULL));
	for(i=0; i<len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return;
}

