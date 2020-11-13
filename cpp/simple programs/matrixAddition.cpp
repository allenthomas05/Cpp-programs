#include<iostream>
 using namespace std;
  int main()
  {
  	int row,column,i,j;
  	cout<<"Enter the total number of rows:\n";
  	cin>>row;
  	cout<<"Enter the number of columns:\n";
    cin>>column;
  	int a[row][column],b[row][column],result[row][column];
     cout<<"Enter the elements of first matrix:\n";
  	     for(i=0;i<row;i++)
  	      {
  	    	for(j=0;j<column;j++)
  	  	     {
  	  		     cin>>a[i][j];
  	  	     }
  	      }
  	  cout<<"Enter the elements of second matrix:\n";
  	      for(i=0;i<row;i++)
  	        {     
  	         	for(j=0;j<column;j++)
  	            	{
  	  		           cin>>b[i][j];
  	  	             }
  	        }

  	   cout<<"Addition of two matrix: \n";
  	     for(i=0;i<row;i++)
  	        {     
  	         	for(j=0;j<column;j++)
  	            	{
  	  		          result[i][j]=a[i][j]+b[i][j];
  	  	             }
  	        }
       cout<<"The result of addition of two matrix is:\n";
        for(i=0;i<row;i++)
        {
        	for(j=0;j<column;j++)
        	{
        		cout<<"\t"<<result[i][j];
        	}
  	        cout<<endl;
         }
    } 
