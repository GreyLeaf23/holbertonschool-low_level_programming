#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet times 10.
 */

void print_alphabet_x10(void)

{

	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet * '9');


_putchar('\n');

}
