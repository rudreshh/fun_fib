/*
 *---------------------------------------------------------- 
 * @brief Header file:

 *        The header file of all fibnacci function.         
 *----------------------------------------------------------
 */

#ifndef FIB_H
#define FIB_H

#define N         500  /* Define the number of string in fib00. */
#define NUMBER    1000   /* Define a max fibnacci number for fib00, we can change it. */

#define ALG1      1
#define ALG2      2
#define ALG3      3
#define ALG4      4

void fh();

/* algorithm 0 */
char *fib00(int n, char *result);

/* algorithm 1 */
int fib01(int n); 

/* algorithm 2 */
int fib02(int n);

/* algorithm 3 */
int fib03(int n); 

int fib04(int n);

/* Store algorithm results in a file. */
void alg(int command, char *b_opt_arg, char *opt);

/* Test algorithm results. */
void fT(); 

/* Print imprint details about algorithms. */
void fV();

#endif

