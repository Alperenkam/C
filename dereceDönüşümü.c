#include <stdio.h>										

int main() {
    int celcius;
    int fahrenheit;
    
    printf("celcius to fahrenheit converter: ");
    
    scanf("%d",&celcius, &fahrenheit);
    
    fahrenheit = 32 + (celcius * 180/100);
    
    printf("F %d",fahrenheit);

    return 0;
}