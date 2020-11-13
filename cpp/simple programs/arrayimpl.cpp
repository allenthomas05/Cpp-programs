#include<iostream>
using namespace std;
int sumfunc(int a[],int len)
{
	 
	 int sum =0,i;
	 cout<<"The array elements are:";
	 for(i=0;i<=len-1;i++)
	 {
	 	cout<<a[i] <<"\t";
	 }
	 for(i=0;i<=len-1;i++)
	{
		 sum=sum+a[i];
	}


	
		return sum;
}
int main()
{
	 int *a;
	 int len,i,result;
	 cout<<"Enter the length of the array:";
	 cin>>len;
	 a = new int(len);
	 for(i=0;i<=len-1;i++)
	 {
	 	cin>>a[i];
	 }
	 result=sumfunc(a,len);
	  cout<<" \n The sum of array elements are ="<<result<<"\n";
	 delete[] a;
	 return 0;
}