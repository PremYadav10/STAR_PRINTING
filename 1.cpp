
//  * 
//  *  * 
//  *  *  * 
//  *  *  *  * 
//  *  *  *  *  * 

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
   for(int i = 1; i <= n; i++)
   {
    for(int j = 1; j <= i; j++)
    {
    cout<<" * ";
    }
    cout<<endl;
   }
}