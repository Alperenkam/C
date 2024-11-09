#include <stdio.h>

int main(){
    int numb ,a,b,c;
    
    printf("Input number pls: ");
    scanf("%d",&numb);
    
    a = numb / 100;
    b = numb % 10;
    c = numb % 100 ;
       
    if(a!=b && b != c ) printf("this is all dif numb");
    else printf("this isnt dif numb");
        
    
     return 0;
}
