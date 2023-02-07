#include <stdio.h>
/*
Printing this Pattern for i=9 and j=9
* * * * * * * * *
* * * *   * * * *
* * *       * * *
* *           * *
*               *
* *           * *
* * *       * * *
* * * *   * * * *
* * * * * * * * *


*/
int main()
{ 
    int i, j, k=0;
    for(i=1; i<=9; i++){
        i<=5?k++:k--;
        for(j=1; j<=9; j++){
            if(j <= 6-k || j >= 4+k){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
