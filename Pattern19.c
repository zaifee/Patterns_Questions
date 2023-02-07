#include <stdio.h>
/*
Printing this Pattern for i=4 and j=7
        A 
      A B A 
    A B C B A 
  A B C D C B A

*/
int main()
{
    int i, j;
    char start ;
    for(int i=1; i<=4; i++){
           start = 'A';
        //   Here A shows the first Alphabat
          
        for(int j=1; j<=7; j++){
            if(j >= 5-i && j <= 3+i){
                printf("%c", start);
              j<4?start++:start--;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
