#include <stdio.h>
#include <stdbool.h>

int main() {
    int n = 1 ;
    int sonuc;
    bool b = true;
    

    
    while (b) {
        sonuc = (n) * (n +1) / 2 ;
        if (n == 100 ) {
            printf("%d",sonuc);
            b=false;
            
        }
        n += 1;
        
    }
    return 0;
}
