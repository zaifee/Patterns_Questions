#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    /*  Printing Reverse Pattern   n = 4 
     1
     2 1  
     3 2 1
     4 3 2 1
 */
 int row = 1;
 
 while(row <= n){
     int col = 1;
     
     while(col <= row){
         cout<<row-col+1<<" ";
         
         col++;
     }
     cout<<endl;
     row++;
 }
 
 
    

    return 0;
}
