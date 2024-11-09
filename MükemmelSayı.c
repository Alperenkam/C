#include <stdio.h>

int main(){
    int number, i, sum=0;
    
    printf("Input number pls: ");
    scanf("%d",&number);
    for(i=1 ; i < number ; i ++){
        if (number%i == 0 )
        sum +=i ;
    }
       
    if(sum == number) printf("this is a perfect number");
    else printf("this isnt a perfect number");
        
    
     return 0;
}
