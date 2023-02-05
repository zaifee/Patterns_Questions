// Taking the user Input from the user
// In case of even the code is not working properly and printing less rows
//In case of odd is not working properly
#include <stdio.h>
/* 
Printing this Pattern if rows = 7;
      * 
    * * *
  * * * * *
 * * * * * * *
   * * * * *
     * * *
       *

*/

int main()
{
    int i, j, k=0, rows, n;
    printf("Enter the Number of Rows : " );
    scanf("%d", &rows);
    n = (rows+1)/2;  //In case of decrementing the rows value
    for(int i=1; i<=rows; i++){
        if(rows%2 == 0){
            if(i <= n) k++;  //5th and sixth row printing the same * in case rows=10
            if(i > n+1) k--;  //Here from 7value we are going to decrementing the value
        }else
        i <= n ? k++ : k--; 
        for(int j=1; j<=rows; j++){
            if(j>=n+1-k && j<=n-1+k){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
