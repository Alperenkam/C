#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num,users,i;
    
    printf("how many users ın thıs raffle ");
    scanf("%d",&users);
    
    num = rand()%users;
    
    for(i= 0 ; i < users; i++){
        if (i == num){
            printf("the winner is %d\n",i+1);
            break;
            
        }
    }
    
    return 0;
}