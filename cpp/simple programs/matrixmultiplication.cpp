#include<iostream>
 using namespace std;
  int main()
  {
  	int row1,column1,row2,column2,i,j,k;
  	cout<<"Enter the total number of rows:\n";
  	cin>>row1;
  	cout<<"Enter the number of columns:\n";
    cin>>column1;
    cout<<"Enter the total number of rows:\n";
    cin>>row2;
    cout<<"Enter the number of columns:\n";
    cin>>column2;
  	int a[row1][column1],b[row2][column2],result[row2][column2];
     cout<<"Enter the elements of first matrix:\n";
  	     for(i=0;i<row1;i++)
  	      {
  	    	for(j=0;j<column1;j++)
  	  	     {
  	  		     cin>>a[i][j];
  	  	     }
  	      }
  	  cout<<"Enter the elements of second matrix:\n";
  	      for(i=0;i<row2;i++)
  	        {     
  	         	for(j=0;j<column2;j++)
  	            	{
  	  		           cin>>b[i][j];
  	  	             }
  	        }

  	   cout<<"Multiplication of two matrix: \n";
  	     for(i=0;i<row1;i++)
  	        {     
  	         	for(j=0;j<column1;j++)
  	            	{
                    result[i][j]=0;
                    for(k=0;k<row2;k++)
                      {
                        result[i][j]=result[i][j]+a[i][k]*b[k][j];
                       }
  	  		         
  	  	           }
             }
  	        
       cout<<"The result of addition of two matrix is:\n";
        for(i=0;i<row2;i++)
        {
        	for(j=0;j<column2;j++)
        	{
        		cout<<"\t"<<result[i][j];
        	}
  	        cout<<endl;
         }
    } 
