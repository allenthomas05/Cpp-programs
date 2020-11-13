#include <iostream>
using namespace std;
int i,pos,len,item;
 int insert(int a[],int len,int pos,int item);
 int del(int a[],int len,int pos);
 int main()
 {
     int *a;
    
 	 int choice;
 	 cout<<"Enter the length of the array: \n";
 	 cin>>len;
 	 a = new int(len);
 	 cout<<"Enter the array elements: \n";
 	 for(i=0;i<=len-1;i++)
 	 {
 	 	cin>>a[i];
 	 }
 	 cout<<"The array elements are: \n";
 	 for(i=0;i<=len-1;i++)
 	 {
 	 	 cout<<a[i]<<"\n";
 	 }
 	
 	 cout<<"--------------------------------- \n";
 	 cout<<"Select any choice: \n";
 	 cout<<"1.Insert an new element in the array: \n";
 	 cout<<"2.Delete an new element in the array: \n";
 	 cout<<"3.Traverse the array: \n";
 	 cout<<"Enter your choice: \n";
 	 cin>>choice;
 	 switch(choice)
 	 { 
 	   case 1:
 	     insert(a,len,pos,item);
 	     break;
 	  case 2:
 	      del(a,len,pos);
      
      /* case 3:
          traverse();
          */
 	}
 	delete [] a;
 }
  

  // Function declaration for the above programs

// function to insert an element in the array
 int insert(int a[],int len,int pos,int item)
 {
 	 cout<<"Enter the position of the element in the array where the elements needs to be inserted: \n";
 	 cin>> pos;
 	 if(pos>len)
 	     {
 	 	   cout<<"Insertion outside the array: \n";
 	 	    exit(1);
 	    }
 	else
 	     {
 	       cout<<"Enter  the value of the item: \n";
 	       cin>>item;
  	       for(i=len;i>=pos;i--)
 	         {
 	 	       a[i+1]=a[i];
 	          }
 	          a[pos]=item;
 	          len++;
 	          cout<<"The new array is: \n";
 	          for(i=0;i<=len-1;i++)
 	          {
 	          	cout<<a[i]<<"\n";
 	          }

 	     }
 	     return 0;
 	
 }

 //function to delete an element from the array
  int del(int a,int len,int pos)
  {
  	 int j, del_item;
  	 
  	 cout<<"Enter the position in which you want to delete the element from the array: \n";
  	 cin>>pos;
  	 //if(pos>len && pos<0)
  	// {
  	 //	cout<<"Deletion is not possible in the array: \n";

  	// }
  	 
  	// else
  	// {
  	 	del_item = a[pos];
  	 	for(j=pos;j<=len-1;j++)
  	 	{
  	 		a[j]=a[j+1];
  	 	}
  	 	len--;
  	 	cout<<"The new array is: \n";
  	 	for(i=o;i<=len-1;i++)
  	 	{
  	 		 cout<<a[i]<<"\n";
  	 	}
  	 return 0;
  }