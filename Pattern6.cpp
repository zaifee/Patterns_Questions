/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    /*  Printing Counting triangle Pattern   n = 4 
     1
     2 3  
     4 5 6
     7 8 9 10
 */
 int i = 1;
 int count = 1;
 while(i <= n){
     int j = 1;
     while(j <= i){
         cout<<count<<" ";
         count++;
         j++;
     }
     cout<<endl;
     i++;
 }
 
 
    

    return 0;
}
