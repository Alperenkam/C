#include <stdio.h>

void equal(int a[],int b[]);



int main() {
    int a[5],b[5];
    
   
    for (int i=0 ;i<5 ; i++){
        printf("\nA ve B i�in 2 say� giriniz ");
        
        scanf("%d %d",&a[i],&b[i]);
        
         }
    equal(a,b) ;
    
    return 0;
}

void equal(int a[],int b[]){
    for (int i=0 ;i<5 ; i++){
        if(a[i]==b[i])
            printf("\na[%d] is equal to b[%d],%d= %d",i , i , a[i], b[i]);
        else
             printf("\na[%d] isnt equal to b[%d],%d= %d",i , i , a[i] , b[i]);
        }
    }   

