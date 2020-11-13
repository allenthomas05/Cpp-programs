#include<iostream>
using namespace std;
 int main() 
 {
 	 int i,j ,row,column;
 	
 	 cout<<"Enter the number of rows in the matrix: \n" ;
 	 cin>>row;
 	 cout<<"Enter the number of columns in the matrix: \n";
 	 cin>>column;
 	 int a[row][column];
 	 cout<<"Enter the elements of the matrix: \n";
 	 for(i=0;i<=row-1;i++)
 	 {
 	 	 for(j=0;j<column-1;j++)
 	 	 {
 	 	 	cin>>a[i][j] ;
 	 	 }
 	 }
 	 cout<<"The entered array elements are: \n";
 	 for(i=0;i<row-1;i++)
 	 {
 	 	for(j=0;j<column-1;j++)
 	 	{
 	 		cout<<'\t'<<a[i][j];
 	 	}
 	 	cout<<endl;
 	 }
 }
