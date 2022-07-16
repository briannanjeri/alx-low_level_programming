#include "main.h"
#include <unistd.h>
/*
 * _abs absolute value of a number
 * -abs -> abdolute value
 */
int _abs(int n)
{
	if (n < 0)
	n = -n;
	return (n);
}
