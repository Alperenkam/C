#include <stdio.h>
#include <math.h>
#include <string.h>


int main() {
    int katlar[1000];
    int ortalama[1000];
    int sayac = 0;

    
    for (int i=1 ; i < 100 ; i++){
        if (i % 7 == 0) {
            katlar[sayac] = i;
            ortalama[sayac] = (i * (i + 1)) / 2;
            printf("7 katları: %d ", katlar[sayac]);
            printf("Ortalama: %d\n", ortalama[sayac]);
            sayac++;
        }
    }

    return 0;
}
