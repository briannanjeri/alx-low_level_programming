#include "main.h"
/*
 * _isalpha -checks for alphabetical letters
 * @c: character to be checked
 * return: return 0 or 1 based on the outcome value
 * _isalpha -> alphabetical check
 */
int _isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
