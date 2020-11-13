/*
using recursion
#include<iostream>
using namespace std;
  int fact(int f)
  {
  	 if(f==1)
  	 	return 1;
  	 else
  	 	return f*fact(f-1);
  }
   int main() 
   {
        int f;
       cout<<"Enter a number to find the factorial:";
        cin>>f;
        cout<<"The factorial of the number is"<<fact(f);

   }
   */
// using iteration
 #include<iostream>
 using namespace std;
 int factorial( int f)
 {
 	 int fact=1;
 	 for(int i=1;i<=f;i++)
 	 {
 	   fact=fact*i;
 	 }
 	 return fact;

 }
 int main()
 {
 	 int f;
 	 cout<<"Enter the number to find factorial";
 	 cin>>f;
 	 cout<<"The factorial of"<<f<<"="<<factorial(f)<<"\n";

}
