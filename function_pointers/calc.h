#ifndef calc_h
#define calc_h
/**
 * struct op - structure holding variables
 * @op: pointer for operations.
 * @f: pointer for calc.
 *
 */

/*Create structure with sub-name.*/
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

/*Prototypes*/
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif
