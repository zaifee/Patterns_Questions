#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    /*  Printing the triangle Pyramid with row no.
    = 4 
     1
     2 2  
     3 3 3
     4 4 4 4
 */
 int i = 1;
 while(i <= n){
     int j = 1;
     while(j <= i){
         cout<<i<<" ";
         j++;
     }
     cout<<endl;
     i++;
 }
 
 
    

    return 0;
}
