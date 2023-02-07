#include <stdio.h>
 /*
Printing this Pattern for i=4 and j=8
        A 1
      A B 1 2 
    A B C 1 2 3 
  A B C D 1 2 3 4

*/
int main()
{
    int i, j;
    char k;
    for(int i=1; i<=4; i++){
         k = 'A';
        for(int j=1; j<=8; j++){
            if(j >= 5-i && j <= 4+i){
                 if(j==5)
                   k = '1';
                printf("%c", k);
                k++;
               
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
