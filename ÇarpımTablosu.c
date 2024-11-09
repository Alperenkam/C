#include <stdio.h>

int main() {
    int sayı=1,i,sonuc;
    
    
    for (i=0  ; i < 11 ; i++){
        sonuc = i * sayı ;
        
        printf("%d",sayı);
        printf(" x %d",sonuc);
        printf(" = %d\n",sayı*sonuc);
        
    }
    return 0;
}