//       *
//      ***
//     *****
//    *******
//   *********
//  ***********
// *************

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{  
    int n,op=1;
   system("CLS");
   cout<<"ENTER A NUMBER : ";
   cin>>n;
   cout<<endl;
   for(int k=1; k<=n; k++)
   {
   for(int i = 1; i <= n-k; i++)
   {
    cout<<" ";
   }
    
    for(int j = 1; j <= op ; j++)
    {
    cout<<"*";
    
    }
    op=op+2;
    cout<<endl;
   }
   
}