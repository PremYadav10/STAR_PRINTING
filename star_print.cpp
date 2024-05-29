// star printing
//  *  *  *  *  *  *  *  *  *  * 
//  *        *        *        *       
//  *        *        *        *       
//  *        *        *        *       
//  *        *        *        *       
//  *        *        *        *       
//  *        *        *        *       
//  *        *        *        *       
//  *        *        *        *       
//  *  *  *  *  *  *  *  *  *  * 

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{  
   system("CLS");
int i,n;
 cout<<"enter the value of n"<<endl;
 cin>>n;
 for(int i=1;i<=n;i++){
if(i==1 || i==n) {
  for (int j=1; j<=n; j++)
 {
   cout<<" * "; }
   cout<<endl;
   }
   else{ 
for(int j=1;j<=n;j+=3){
cout<<" * "<<"      ";
  }
  cout<<endl;
   }
   }
   return 0;
 }
 
