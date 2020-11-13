#include<iostream>
using namespace std;
 int main()
 {
 	 int n,i,a,b, gcd,rem1,rem2;
 	 cout<<"Enter two numbers";
     cin>>a;
     cin>>b;
     if(a>b)
       n=a;
     else
     	n=b;
     for(i=1;i<=n;i++)
     {
     	rem1=a%i;
     	rem2=b%i;
       if(rem1 == 0 && rem2 ==0)
         gcd=i;	
     }
     cout<<"the gcd of both numbers is"<<gcd;
 }
