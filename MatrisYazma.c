#include <stdio.h>

int main() {
    int x,y,row,col;
    
    printf("enter how many row ");
    scanf("%d",&row);
    
    printf("enter how many col ");
    scanf("%d",&col);
    
    
    int a[row][col];
    printf("enter row col values \n");
    
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
        scanf("%d",&a[i][j]);
        }
    }
    
    printf("matrix; \n");
     for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            printf("%d ",a[i][j]);
        }
    
        printf("\n");
    }
    
  
    
    return 0;
}