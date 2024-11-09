#include <stdio.h>

int main(){
	int m1,m2,m3,x1,y1,z1,x2,y2,z2,x3,y3,z3,pislem,nislem;
	
	printf("1. matrisi giriniz ve en son kaça eşit olduğunu\n");
	scanf("%d%d%d",&x1 ,&y1 ,&z1);
	
	printf("2. matrisi giriniz ve en son kaça eşit olduğunu\n");
	scanf("%d%d%d",&x2 ,&y2 ,&z2);
	
	printf("3. matrisi giriniz ve en son kaça eşit olduğunu\n");
	scanf("%d%d%d",&x3 ,&y3 ,&z3);
	
	
	printf("A matrisi \n");
	printf("%dx %dy %dz  \n",x1,y1,z1);
	printf("%dx %dy %dz  \n",x2,y2,z2);
	printf("%dx %dy %dz  \n",x3,y3,z3);
	
	printf("A-1 ters matrisi\n");
	printf("%dx %dy %dz  \n",x1,x2,x3);
	printf("%dx %dy %dz  \n",y1,y2,y3);
	printf("%dx %dy %dz  \n",z1,z2,z3);
	
	pislem = (x1 *y2 *z3 + x2 * y3 * z1 +x3 *y1 *z2);
        nislem = (z1 *y2 *x3 + z2 *y3 *x1 + z3 *y1 *x2 );
    
        printf("determinant sonuc %d",pislem - nislem);
}
