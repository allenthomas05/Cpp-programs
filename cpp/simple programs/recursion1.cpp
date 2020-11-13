#include<iostream>
using namespace std;
	 int sum(int y)
{
	 if(y==0)
	 	return 0;
	 else{
	   return(y+sum(y-1));
	 }
}
int main()
{

	
	 int y;
	 
	 cout<<"Enter any positive integer number";
	 cin>>y;
	 cout<<" The sum of first"<<y<<"integers ="<<sum(y)<<endl;
	 return 0;

}
