#include <stdio.h>

int main() {
    int dizi[10], islem[10];
    for (int i = 0; i < 10; i++) {
        printf("10 tane sayı giriniz: ");
        scanf("%d", &dizi[i]);
    
        if (dizi[i] < 0) { 
            islem[i] = 0; 
        } else {
            islem[i] = dizi[i]; 
        }
        
    }
    for (int k = 0; k < 10; k++) {
        printf("%d ", islem[k]);
    }
    printf("\n");

    return 0;
}