#include <stdio.h>
#include <math.h>

int main() {
    float a;
    float b;
    float c;
    
    printf("Hipotenüs hesaplama kenar giriniz "); scanf("%f",&a);
    printf("b kenarını giriniz "); scanf("%f",&b);
    
    c = sqrt((a*a) + (b*b));
    printf("Hipotenüsümüz %f",c);
    
    return 0;
}
