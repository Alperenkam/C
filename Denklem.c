
#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int b;
    int c;
    int vari;
    
    printf("a değişkeni için sayı giriniz :");
    scanf("%d",&a);
    
    printf("b değişkeni için sayı giriniz :");
    scanf("%d",&b);
    
    printf("c değişkeni için sayı giriniz :");
    scanf("%d",&c); 
    
    vari = (3*a*2) + 5*b +3*c;
    printf("sonucumuz %d: ",vari);
    
    return 0;
}
