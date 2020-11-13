/*
#include<iostream>
using namespace std;
 int main()
 {
 	 int row,column,i,j,flag;
 	 cout<<"Enter the number of rows in the matrix:\n";
 	 cin>>row;
 	 cout<<"Enter the number of columns in the matrix:\n";
 	 cin>>column;
 	 int a[row][column],b[row][column];
 	 cout<<"Enter the elements of the matrix:";
 	 for(i=0;i<row;i++)
 	 {
 	 	for(j=0;j<column;j++)
 	 	{
 	 		 cin>>a[i][j];
 	 		 b[j][i]=a[i][j];

 	 	}
 	 	

 	 }
 	 cout<<"The matrix A :\n";
 	 for(i=0;i<row;i++)
 	 {
 	 	for(j=0;j<column;j++)
 	 	{
 	 		cout<<"\t"<<a[i][j];
 	 	}
 	 	cout<<endl;
 	 }
 	 cout<<"The transpose of matrix A:\n";
 	 for(i=0;i<row;i++)
 	 {
 	 	 for(j=0;j<column;j++)
 	 	 {
 	 	 	cout<<"\t"<<b[i][j];
 	 	 }
 	 	 cout<<endl;
 	 }
 	 flag=1;
 	 for(i=0;i<row;i++)
 	 {
 	 	 for(j=i+1;j<column;j++)
 	 	 {
 	 	 	if((a[i][j] - a[i][j])!=0)
 	 	 	  flag=0;
 	 	 	break;
 	 	 }
      
      }
      if(flag)
      	cout<<"A is symmetric matrix:\n";
      else
      	cout<<"A is  not symmetric matrix:\n";
 }
 */

// Efficient c++ code for check a matrix is 
// symmetric or not. 
#include <iostream> 
using namespace std; 
  
const int MAX = 100; 
  
// Returns true if mat[N][N] is symmetric, else false 
bool isSymmetric(int mat[][MAX], int N) 
{ 
    for (int i = 0; i < N; i++) 
        for (int j = 0; j < N; j++) 
            if (mat[i][j] != mat[j][i]) 
                return false; 
    return true; 
} 
  
// Driver code 
int main() 
{ 
    int mat[][MAX] = { { 1, 3, 5 }, 
                       { 3, 2, 4 }, 
                       { 5, 4, 1 } }; 
  
    if (isSymmetric(mat, 3)) 
        cout << "Yes"; 
    else
        cout << "No"; 
    return 0; 
} 