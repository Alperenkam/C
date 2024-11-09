#include <stdio.h>

int main() {
    float vize;
    float final;
    float sonuc;
   
    
    printf("vize notunuzu giriniz : ");
    scanf("%f",&vize);
    
    printf("final notunuzu giriniz : ");
    scanf("%f",&final);
    
    sonuc= (vize * 0.4) + (final * 0.6);
    printf("ders ortalaması %2.f\n",sonuc);
    
    if (sonuc < 40){
        printf("kaldınız !!  \n");
    
    }else{
        printf("geçtiniz !! \n");
    }

    return 0;
}