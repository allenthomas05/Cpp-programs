#include<iostream>
using namespace std;
int main()
{
   int n,f1=0,f2=1,nxt=0;
   cout<<"Enter the number: \n";
   cin>>n;
   cout<<"Fibonacci series is";
   for(int i=0;i<=n;i++)
   {
   cout<<f1;
   	nxt=f1+f2;
     f1=f2;
     f2=nxt;
     
   }
}