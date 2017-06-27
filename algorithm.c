/*
 *------------------------------------------------------------------------------------------
 * @brief
 *
 *      The test function of fibonacci algorithms.                                        
 *      When we input './fib -t alg#<number> -f filename' this function will be executed. 
 *------------------------------------------------------------------------------------------
 */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

#include "fib.h"

/*
 * @para 
       
	     command: the parameter number of command line, we restrict it below 5.
 *       b_opt_arg: pointer to alg#<number>.
 *       opt: pointer to the file which is used to store fibnacci.
 *
 */
void alg(int command, char *b_opt_arg, char *opt)
{
	void write_to_file(int id, FILE *fp, int (*f)(int x));

    int i=-3, fib_len;
	
	char result[N];

	if(command>5)
	{
		printf("Input a Error parameter.\n");
		return;
	}
	else
	{
    	FILE *fp;
    	fp=fopen(opt, "w");
   		if(fp != NULL)
   		{
			if(strcmp(b_opt_arg,"alg#0") == 0)
			{
				while(1)
				{
				//for(i=-3; i<NUMBER; i++)
				//{
						fib00(i, result);
						fib_len = strlen(result);
				//		printf("fib_len=%d\n",fib_len);
						if(fib_len > N)
						{
							fprintf(fp, "%d : %d\n\n",i,-2);
							break;
						}
						fprintf(fp, "%d : %s\n\n",i,result);
						i++;
				}
			    i--;	
				fprintf(fp,"\nFunction fib00() can calculate %d fib numbers,last one is %s.\n\n",i,result);
			}

			else if(strcmp(b_opt_arg,"alg#1") == 0)
				{
					write_to_file(ALG1, fp, fib01);
				}

			else if(strcmp(b_opt_arg,"alg#2") == 0)
				{
					write_to_file(ALG2, fp, fib02);
				}
			else if(strcmp(b_opt_arg,"alg#3") == 0)
				{
					write_to_file(ALG3, fp, fib03);
				}
			else if(strcmp(b_opt_arg,"alg#4") == 0)
				{
					write_to_file(ALG4, fp, fib04);
				}
			else 
				{
					printf("Input a Error paremeter.\n");
				}
		}
    	fclose (fp);
    }
    return;
}

/**
 * @breif 
 *       this function store the fib result except for fib00. 
 * @para
 *       id: the number of algorithm.
 *       fp: pointer to the file.
 *       f: pointer to the function of fib.
 */
void write_to_file(int id, FILE *fp, int (*f)(int x))
{
	int i,j;

	for(i=-3; (j = (*f)(i)) > -2; i++)
	{

		fprintf(fp, "%d : %d\n",i,j);
	}
	i--;
	fprintf(fp,"Function fib0%d() can calculate %d fib numbers,last one is %d.\n", id, i, (*f)(i));

	return;
}

