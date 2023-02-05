#include <stdio.h>
/* 
Printing this Pattern if rows = 7;
* * * * * * *
  * * * * *
    * * *
      *

*/
int main()
{ 
    int i, j, rows;
    // int n = (2*n-1); //Changing for the Number of columns
    printf("Enter the Number of Rows: ");
    scanf("%d", &rows);
   for(i = 1; i<=rows; i++){
       for(int j=1; j<=2*rows-1; j++){
           if(j >= i && j <= 2*rows-i){  //Changing 8-i into 2^n in case of 7 col
               printf("*");
           }else{
               printf(" ");
           }
       }
       printf("\n");
   }

    return 0;
}
