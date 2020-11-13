#include<iostream>
using namespace std;
 int findMin(int a[],int n)
 { 
 	int i,min,max;
 	min=a[0];
 	
 	for(i=0;i<=n-1;i++)
 	{
 		
 		  if(min>a[i])
 		    min=a[i];
 	     	 
     }
     return min;

 }
 int findMax(int a[],int n)
 {
 	 int i,max;

 	max=a[0];
 	for(i=0;i<=n-1;i++)
 	{
 		if(max<a[i])  
 		  max=a[i];
 	}
 	return max;
 }
 int main()
 {
 	int n,i,max,min;
 
 	cout<<"Enter the size of the array:\n";
 	cin>>n;
 	int a[n];
 	cout<<"Enter the elements of the array:\n";
 	for(i=0;i<=n-1;i++)
 	{
 		 cin>>a[i];
 	}
 	max=findMax(a,n);
 	min=findMin(a,n);
 	//min=a[0];
 	
 	   cout<<"The largest number in the array is  :"<< max << "\n";
 	
 	cout<<"The smallest number in the array is   : "<<min<<"\n";
 
 }