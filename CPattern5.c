
#include <stdio.h>
/*
      * 
    *   * 
  *   *   *  
 *   *    *   *
*  *   *    *   *

*/


int main()
{
   int i,j;
   for(int i=1; i<=5; i++){
       for(int j=1; j<=9; j++){
           if(j >= 6-i && j <= 4+i && (i+j)%2 == 0){
               printf("*");
           }else{
               printf(" ");
           }
       }
       printf("\n");
   }

    return 0;
}
