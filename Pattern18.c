#include <stdio.h>
/*
Printing this Pattern for i=5 and j=9
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *         
        *  
          */
int main()
{ 
    int i, j;
    for(i=1; i<=5; i++){
       
        for(j=1; j<=9; j++){
            if(j >= i && j <= 10-i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
