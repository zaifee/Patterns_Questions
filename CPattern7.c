
#include <stdio.h>
/*
       1 
     1 2 1 
   1 2 3 2 1 
 1 2 3 4 3 2 1

*/
int main()
{
   int i, j, k;
   for(int i=1; i<=4; i++){
           k = 1;
       for(int j=1; j<=7; j++){
           if(j >= 5-i && j <= 3+i){
               printf("%d", k);
              j<4 ? k++ : k--;   // Here if j is less than 4 then we are increm. value else decrement
              
           }else{
               printf(" ");
               
           }
       }
       printf("\n");
       
   }

    return 0;
}
