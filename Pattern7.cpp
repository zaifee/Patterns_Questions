
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    /*  Printing Reverse Pattern   n = 4 
     1
     2 3  
     3 4 5
     4 5 6 7
 */
 int i = 1;
 
 while(i <= n){
     int j = 1;
     int value = i;
     while(j <= i){
         cout<<value<<" ";
         value++;
         j++;
     }
     cout<<endl;
     i++;
 }
 
 
    

    return 0;
}
