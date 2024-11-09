#include <stdio.h>

int main() {
    float inch,cm,foot;
    
    printf("enter a inch: ");
    scanf("%f",&inch);
    
    foot = inch / 12 ;
    cm = inch * 2.54;
    
    printf("your foot is %f\n",foot);
    printf("your cm is %f",cm);
    

    return 0;
}
