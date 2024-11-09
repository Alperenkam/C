#include <stdio.h>

int main() {
    int num1,num2,num3,max;
    
    
    printf("sayı 1 giriniz: ");
    scanf("%d",&num1);
    
    printf("sayı 2 giriniz: ");
    scanf("%d",&num2);
    
    printf("sayı 3 giriniz: ");
    scanf("%d",&num3);
    
    if (num1 > num2 && num1 > num3){
        max = num1 ;
        
    }else if(num2 > num1 && num2 > num3){
        max = num2 ;
      
    }else{
        max = num3 ;
        
    }
    
    
    printf("en büyük sayı %d\n ",max);
    
    
     return 0;
}