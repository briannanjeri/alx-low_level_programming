#include "main.h"

/**
 * *cap_string - capitalize words
 * @str: pointer
 * Return: capitalzied string
*/

char *cap_string(char *str)
{
	char sep[] = ",\t;\n; .!?\"(){}";
<<<<<<< HEAD
	int flag, i, ii;

	for (i = 0; str[i] != '\0'; i++)
	{
		flag = 0;

		if (i == 0)
		{
			flag = 1;
=======
	int count, i, ii;

	for (i = 0; str[i] != '\0'; i++)
	{
		count = 0;

		if (i == 0)
		{
			count = 1;
>>>>>>> 03e1cb80954f27c69388e51c73646263bd6a070e
		}
		else
		{
			for (ii = 0; sep[ii] != '\0'; ii++)
			{
				if (str[i - 1] == sep[ii])
				{
<<<<<<< HEAD
					flag = 1;
=======
					count = 1;
>>>>>>> 03e1cb80954f27c69388e51c73646263bd6a070e
					break;
				}
			}
		}

<<<<<<< HEAD
		if (flag == 1)
=======
		if (count == 1)
>>>>>>> 03e1cb80954f27c69388e51c73646263bd6a070e
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] -= ('a' - 'A');
			}
		}
	}
	return (str);
}

