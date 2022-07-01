#include <stdio.h>
 #include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int x;
    printf("enter the value of n:");
    scanf("%d", &n);
	if(n>0){
        printf("the no entered is a positive integer %d", n);
        }
        else if(n<0){
        printf("the no entered is a negative integer %d", n);
        }
        else{
        printf("the no entered is zero");
        }

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
    
        
        
    
    

