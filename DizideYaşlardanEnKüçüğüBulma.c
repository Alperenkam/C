#include <stdio.h>

int main() {
   
  int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
  float avg, sum = 0;
  int i;
  
  int length = sizeof(ages) / sizeof(ages[0]);
  
  int lowestAge = ages[0];

 
  for (int i = 0; i < length; i++) {
  for (int a = 0; i < length; i++) {
      
  sum += ages[i];
  avg = sum / length;
  
  }
  
  if (lowestAge > ages[i]) {
        lowestAge = ages[i];
    }
  }
 
  printf("The average age is: %.2f\n", avg);
  printf("The lowest age in the array is: %d\n", lowestAge);
   
  return 0;
}