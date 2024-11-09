
#include <stdio.h>

int main() {
    int kare,taban,yksk,daire,numara,sonuc;
    
    
    printf("Alan hesaplama 1- kare  2- ucgen  3- daire : ");
    scanf("%d",&numara);
    
   
    switch(numara){
      
      case 1:
      
      printf("karenin kenarını giriniz ");
      scanf("%d",&kare);
      sonuc = kare * kare ;
      printf("karenin alanı %d\n",sonuc);
      break;
      
      
      
     case 2:
      
      printf("üçgenin taban kenarını girin ");
      scanf("%d",&taban);
      
      printf("üçgenin yüksekliğini girin ");
      scanf("%d",&yksk);
      
      
      sonuc = taban * yksk / 2 ;
      printf("Üçgenin alanı %d\n",sonuc);
      
      break;
      
      
      
      case 3:
      
      printf("Dairenin yarıçapını giriniz ");
      scanf("%d",&daire);
      
      sonuc = 3 * (daire * daire);
      
      printf("dairenin alanı %d\n",sonuc);
      break;
      
      default:
      printf("geçerli giriş yapılmadı tekrar deneyiniz");
      
      
      
    }
  
  
    return 0;
}
