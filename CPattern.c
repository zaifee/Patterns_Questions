/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
/* Printing this Pattern
* * * * *
  * * * *
     * * * 
       * *
         *
         
         */
int main()
{
    int n = 5;
    for(int i =1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(j >= i){
                printf("*");
                
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

