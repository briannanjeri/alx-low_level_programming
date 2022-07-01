#include <stdio.h>
 #include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n,num;	
srand(time(0));
n = rand() - RAND_MAX / 2;
num = n%RAND_MAX;

print("the last digit of %d\n", n, "is");
if(num>5){
	print("the last digit of %d\n", n, "is greater than 5\n");
}
if(num==0){
	print("the last digit of %d\n", n, "is zero\n");
}
if(num<6&&num!=0){
	print("the last digit of %d\n", n, "is less than 6 and not zero\n");
	
}

return 0;


}
        
        
    
    

