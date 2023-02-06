#include <stdio.h>
/*
       1 
     1 2  
   1 2 3 
 1 2 3 4 
1 2 3 4 5
  1 2 3 4 
    1 2 3 
      1 2 
        1
   
*/

int main()
{
    int i, j, k=0, x;
    for(int i=1; i<=9; i++){
          i<=5?k++:k--;
          x=1;  //Intially printing the value of  x is 1;
        for(int j=1; j<=5; j++){
            if(j >= 6-k){
                printf("%d", x);
                x++;
               
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
