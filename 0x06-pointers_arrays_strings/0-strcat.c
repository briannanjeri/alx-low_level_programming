#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/

<<<<<<< HEAD
char *_strcat(char *dest, char *src)
{
int a = -1, i;
for (i = 0; dest[i] != '\0'; i++)
;

do {
	a++;
	dest[i] = src[a];
	i++;
} while (src[a] != '\0');

return (dest);
=======
char *_strcat(char *dest, char *src){
    char i,j; 
    for(i=0; dest[i]!='\0'; i++);
    for(j=0; src[j]!='\0'; j++, i++){
        dest[i]=src[j];
    }
    dest[i]='\0';
    return(dest);
>>>>>>> 03e1cb80954f27c69388e51c73646263bd6a070e
}

