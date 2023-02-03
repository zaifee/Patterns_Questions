#include <stdio.h>
/*
A B C D C B A
A B C   C B A
A B       B A 
A            A

*/
int main()
{ 
    int i, j;
    char k;
    for(int i=1; i<=4; i++){
          k = 'A';
        for(int j=1; j<=7; j++){
            if(j <= 5-i || j >= 3+i){
                printf("%c", k);
                j < 4 ? k++ : k--;
            }else{
                printf(" ");
                  if(j == 4){
                      k--;  // Here we decrement the value of k which inc. at 4 col
                  }
            }
        }
         printf("\n");
    }

    return 0;
}
