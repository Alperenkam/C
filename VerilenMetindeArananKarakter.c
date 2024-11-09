
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char metin[]="selamlar sevgilerz arkadaşlar";
    char aranan = 'z' ;
    int sayac = 0;
    bool bulundu;
    
    
    while (sayac < strlen(metin)) {
        
        if (metin[sayac]== aranan){
            bulundu =true ;
            
            printf("karakterin bulunduğu pozisyon %d\n",sayac);
            
        }
        sayac ++ ;
        
    }
        
    if (bulundu != true) {
        printf("karakter '%c' bulunamadı.\n", aranan);
    }   
       

    return 0;
}
