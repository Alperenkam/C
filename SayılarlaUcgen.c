#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int sayi1;
    int sayi2;
    
    printf("bir sayı giriniz: ");
    scanf("%d", &sayi2);
    
    if (sayi2 <= 0) {
        printf("pozitif bir sayı girin");
        return 0;
    }
    
    for (int i = 1; i <= sayi2; i++) {
        for (int j = 1; j < i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    for (int i = sayi2 - 1; i >= 1; i--) {
        for (int j = 1; j < i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;

}