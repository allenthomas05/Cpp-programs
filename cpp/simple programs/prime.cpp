/* Program which print prime numbers and its series withina  specific logic*/

#include<iostream>
using namespace std;
 int main()
 {
 	int isprime(int);
    int nextprime(int);
 	int a,N;
 	int term ,diff=2,i;
 	cin>>a>>N;
 	term =a+diff;
 	for(i=2;i<N;i++)
 	{
 		diff=nextprime(diff);
 		term+=diff;
 	//	cout<<term;
	 }
 	cout<<term;
 
  //  cout<<nextprime(N);
 	return 0;
 }
 int isprime(int N)
 {
 	 int i;
 	 if(N< 1)
 	 {
 	 	return -1;
	  }
	  for(i=2;i<=N/2;i++)
	  {
	  	if(N%i==0)
	  	  return -1;
	  }
	  return 1;
 }
 int nextprime(int n)
 {
 	int isprime(int);
 	n++;
 	while(1)
 	{ 
 	  if(isprime(n)==1)
 	     return n;
 	  n++;   
 		
	 }
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
