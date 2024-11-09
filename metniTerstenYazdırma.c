#include <stdio.h>
#include <string.h>


int main() {
    char string[25] = "Acu bilgisayar muh";
    char ters[25] = " ";
    int c = strlen(string);
    
    
    
    for (int i = c-1 ; i >= 0 ; i--)
    {
    ters[c-i] = string[i];
    }
    
    printf("%s\n", ters);
    
    return 0;
    

}