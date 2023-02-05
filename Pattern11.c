#include <stdio.h>
// Taking the Input from the User 
/* 
Printing this Pattern if rows = 7;
* 
* * 
* * *
* * * *
* * *
* *
*

*/
int main()
{
   int i, j, k=0, rows;
   printf("Enter the Number of rows : ");
   scanf("%d", &rows);
   int n = (rows+1)/2;
   for(int i=1; i<=rows; i++){
        if(rows % 2 == 0){  //Handling the even Case condition
            if(i <= n) k++;
            if(i > n+1) k--;
        }else
          i<=n?k++:k--;
       for(int j=1; j<=rows; j++){
           if(j <= k){
               printf("*");
           }else{
               printf(" ");
           }
       }
       printf("\n");
   }
    return 0;
}
