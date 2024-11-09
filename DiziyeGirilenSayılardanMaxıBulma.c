#include <stdio.h>

int main() {
    int sayilar[5],max=0;
    
   
    for (int i=0 ;i<5 ; i++){
        printf("sayı giriniz ");
        scanf("%d",&sayilar[i]);
        if(sayilar[i]>max){
            max = sayilar[i];
         }
    }

printf("%d en büyük sayı",max);    

    return 0;
}
