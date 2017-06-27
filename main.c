/* 
 *-------------------------------------------------------------------------
 *
 * @brief  The main function of fibnoacci algorithms, it contains sevrel       
 *         functional module, when we input different parameters in the  
 *         command line, it will execute show the different results.     
 *
 *------------------------------------------------------------------------
 */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#include "fib.h"

int main(int argc, char *argv[])
{
	int fib, ch, fib_len;
	char *b_opt_arg;
	char result[N];

	opterr=0;

	if(argc < 2)
	{
		printf("Input a Error parameter.\n");
	}

	/* 
	 * The getopt function receive parameters from mian(), 
	 * and get the value in command line ,then matching them.
	 */
	while((ch=getopt(argc, argv, "hn:t:f:TvV")) != -1)
	{
		switch(ch)
		{ 
			/* Parameter h show the the method of application. */
			case 'h':
				fh();
				break;
				/* If the 2rd parameter is n, print the value of best algorithm. */
			case 'n':
				fib = atoi(optarg);
				//              sscanf(optarg,"%d",&fib);
				fib00(fib, result);
				fib_len = strlen(result);
				printf("\n\nThe length of fibnacci is **%d**.\n\n",fib_len);
				if(fib_len > N)
				{
					printf("%d\n",-2);
				}
				else
				{
					printf("%s\n\n",result);
				}
				break;
			case 'v':
				printf("************\n");
				printf("*   v2.0   *\n");
				printf("************\n");
				break;
				/* 
				 *  When parameter 't' exist in the command line, 
				 *  store its option value into b_opt_arg. 
				 */
			case 't':
				b_opt_arg=optarg;
				break;

				/* Through parameter 'f' we can execute different algorithms. */
			case 'f':
				alg(argc, b_opt_arg, optarg);
				break;

				/* When 2rd parameter is T, print the test result of each algorithm. */     
			case 'T':
				fT();
				break;
			case 'V':
				fV();
				break;      
			default:
				printf("Input a Error parameter.\n");
				break;
		}
	}
	return 0;
}

