#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if matching, and ns1 - ns2 if not matching
*/

int _strcmp(char *s1, char *s2)
{
	int i;

<<<<<<< HEAD
	/**
	 * We have reached the end of S1 OR we have reached the end of S2
	*/

=======
>>>>>>> 03e1cb80954f27c69388e51c73646263bd6a070e
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

