#include <stdio.h>
int main() {
    int x;
    printf("enter the value of x:");
    scanf("%d", &x);
        if(x>0){
        printf("the no entered is a positive integer %d", x);
        }
        else if(x<0){
        printf("the no entered is a negative integer %d", x);
        }
        else{
        printf("the no entered is zero");
        }
        
    
    
    return 0;
}
