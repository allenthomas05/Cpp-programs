#include<iostream>
using namespace std;
int main()
{
	int n,sumEven,sumOdd,rem,div;
	cout<<"Enter a number  ";
	cin>>n;
	sumOdd=0;
	sumEven=0;
	while(n!=0)
	{
		rem=n%10;
		div=rem%2;
		if(div == 0)
			sumEven=sumEven+rem;
		else
			sumOdd=sumOdd+rem;
	n=n/10;	
	}
	cout<<"The sum of even digits are"<<sumEven;
	cout<<endl<<"The sum of odd digits are"<<sumOdd;
	return 0;
}
