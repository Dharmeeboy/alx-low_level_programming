#ifndef CALC_H_
#define CALC_H_

#include <stdlib.h>
#include <stdio.h>

/**
* struct op - Struct op
*
* @op: The operator
* @f: The function associated
*/

typedef struct op
{
char *op;
int (*f)(int, int);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif /* CALC_H_ */
