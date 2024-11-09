#include <stdio.h>

int main() {
    int sayı;
    int a;
    int fak = 1;
    
   
    
    printf("Sayı faktöryel makinesi : ");
    scanf("%d",&sayı);
    
   
    
   for (a=1 ; a <= sayı ; a++){
       
       
       fak = a * fak ;
    }
   
    printf("%d faktöryel sonucu \n",fak);
    return 0;
}