#include <stdio.h>
 
int main(void){
 
     int count = 1;
     int evenHap = 0, oddHap = 0;
 
     for(count = 1; count <= 100; count++){ 
         
          //짝수의 합
         if(count % 2 == 0)
              evenHap += count;
                
         //홀수의 합
         else
              oddHap += count;
     }
 
         printf("짝수의 합: %d \n", evenHap);
         printf("홀수의 합: %d \n", oddHap);
 
     return 0;
}