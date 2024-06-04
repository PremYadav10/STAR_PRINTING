//        *
//       **
//      ***
//     ****
//    *****
//   ******
//  *******
// ********

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{  
    int n;
   system("CLS");
   cout<<"ENTER A NUMBER : ";
   cin>>n;
   cout<<endl;
   for(int k=1; k<=n; k++)
   {
   for(int i = 1; i<= n-k; i++)
   {
    cout<<" ";
   }
    for(int j = 1; j <=k ; j++)
    {
    cout<<"*";
    }
    cout<<endl;
   }
   
}