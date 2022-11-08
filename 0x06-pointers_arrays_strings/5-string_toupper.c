#include "main.h"
/**
 * *string_toupper - capitalize a string
 * @str: pointer
 * Return: capitalzied string
*/

<<<<<<< HEAD
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
	}
	return (str);
=======
char *string_toupper(char *str){
    int i;
    for(i=0; str[i]!='\0'; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    return(str);
>>>>>>> 03e1cb80954f27c69388e51c73646263bd6a070e
}

