#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char metin[40];
    char aranan;
    int sayac = 0;
    bool bulundu = false;
    
    printf("metinde aranan karakter makinesi bit metin gir: ");
    fgets(metin, sizeof(metin), stdin); 
    
    
    printf("karakter gir: ");
    scanf(" %c", &aranan); 
    
    while (sayac < strlen(metin)) {
        if (metin[sayac] == aranan) {
            bulundu = true;
            printf("karakterin bulunduğu pozisyon %d\n", sayac);
            break; 
        }
        sayac++;
    }
    
    if (bulundu == false) {
        printf("karakter '%c' bulunamadı.\n", aranan);
    }   
       
    return 0;
}