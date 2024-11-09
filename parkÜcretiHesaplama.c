#include <stdio.h>

int main() {
    int süre;
    int ücret;
    
   
    
    printf("kalıcağınız saati giriniz : ");
    scanf("%d",&süre);
    
   
    
   if (süre < 3 ){
        ücret = 15 ;
        printf("%d  TL ödeyeceğiniz ücret \n",ücret);
    
    } else if(süre >= 3 && süre < 7){
        ücret = 30 ;
        printf("%d  TL ödeyeceğiniz ücret \n",ücret);
    
        
    } else if(süre >= 7 && süre < 12){
        ücret = 45 ;
        printf("%d TL ödeyeceğiniz ücret \n",ücret);
    
    }else{
        ücret = 60 + (süre - 9) * 5 ;
        printf("%d TL ödeyeceğiniz ücret \n",ücret);
    }
    
    return 0;
}