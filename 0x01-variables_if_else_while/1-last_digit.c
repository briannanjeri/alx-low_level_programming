#include <stdio.h>
 #include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n, num;	
srand(time(0));
n = rand() - RAND_MAX / 2;
 num = n%10;

if(num>5){
	printf("the last digit of %d is %d and is greater than 5", n, num);
}
if(num==0){
	printf("the last digit of %d is %d and is 0", n, num);
}
if(num<6&&num!=0){
	printf("the last digit of %d is %d and is less than 6 and not 0", n, num);
	
}

return 0;
}
