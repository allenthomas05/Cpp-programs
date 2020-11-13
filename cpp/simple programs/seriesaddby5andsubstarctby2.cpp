#include<iostream>
using namespace std;
 int main()
 {
 	 int a ,N;
 	 int i,term;
 	 cin>>a>>N;
 	 term=a;
 	 for(i=2;i<=N;i++)
 	 {
 	 	if(i%2==0)
 	 	  term +=5;
 	 	else
		  term-=2;
		//cout<<" "<<term;    
	  }
	  cout<<" "<<term;
 }
