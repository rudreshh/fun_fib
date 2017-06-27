/*
 *-----------------------------------------------------------------------
 * @brief
 *  
 *        When we input './fib -T', this function will be executed.  * 
 *        This function can print the result of all algorithms.      *
 *        The result contain the number of algorithm, the max fib.   *
 *
 *----------------------------------------------------------------------
 **/

#include <stdio.h>

#include "fib.h"

void fT()
{
	void print_info(int id, int (*f)(int x));

    int i=1;

    char result[N];

    do
    {
        fib00(i, result);
    }while(i<NUMBER && i++);
    printf("Function fib00() can calculate %d fib numbers, last one is %s.\n",i,result);
    
	print_info(ALG1, fib01);
	print_info(ALG2, fib02);
	print_info(ALG3, fib03);
	print_info(ALG4, fib04);


    return;
}

/*
 * @para
 *      id: the number of algorithm.
 *      f: is a pointer function, recive the address of different fib functions.
 */
void print_info(int id, int (*f)(int x))
{
	int i=1, j;
	
	do
	{
		j = (*f)(i);
	}while(j>0&&i++);
	i--;
    printf("Function fib0%d() can calculate %d fib numbers, last one is %d.\n",id, i, (*f)(i));

	return;
}

