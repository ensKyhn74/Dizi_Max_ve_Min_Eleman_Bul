#include <stdio.h>
// dizinin max ve min elemanını bulur

int main() 

{
    
 int dizi[10] = {1,3,0,2,5,9,4,7,6,8};    
 
 int max = dizi[0]; // gibi kabul et
 int min = dizi[1]; // gibi kabul et
  
 int i;
 
 for(i = 0 ; i < 10 ; i++)
 {
  if(max < dizi[i])
  {
   max = dizi[i];
  }
  
  if(min > dizi[i])
  {
   min = dizi[i];
  }
 }
 
 printf("dizinin en buyuk elemani: %d\n",max);
 printf("dizinin en kucuk elemani: %d\n\n",min);
 
 return 0;
  
}