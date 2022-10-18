#include <iostream>

using namespace std;

int main()
{
	int n;
    
    printf("enter a random no");
    scanf("%d",&n);
     if(n==0){
        printf("%d is zero\n", n);
    }
    else if(n<0){
     printf("%d is negative\n", n);

    }
    else{
	printf("%d is positive", n );
	}

	}
