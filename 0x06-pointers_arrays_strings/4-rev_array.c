#include "main.h"
/**
 * reverse_array - reverse a int array
 * @a: pointer
 * @n: array length
 * Return: void
*/

<<<<<<< HEAD
void reverse_array(int *a, int n)
{
	int i = 0, half;

	for (half = n / 2; half > 0; half--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
=======
void reverse_array(int *a, int n){
    int i,temp;
   for(i=0; i<n/2; i++){
   	temp=a[i];
   	a[i]=a[n-i-1];
   	a[n-i-1]=temp;
   }
  
>>>>>>> 03e1cb80954f27c69388e51c73646263bd6a070e
}

