#include <stdio.h>

int main() {
    int tv,laptop,blue,sonuc;
    
    
    printf("tv  adetini giriniz: ");
    scanf("%d",&tv);
    
    printf("laptop adeti giriniz: ");
    scanf("%d",&laptop);
    
    printf("bluetooth adetini giriniz: ");
    scanf("%d",&blue);
    
    sonuc = tv *200 + laptop * 100 + blue * 50 ;
    
    printf("fiyatımz %d\n\n ",sonuc);
    
    printf("tv adeti %d\n ",tv);
    printf("laptop adeti %d\n ",laptop);
    printf("bluetooth adeti %d\n",blue);
    
    
     return 0;
}