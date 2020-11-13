#include<iostream>
using namespace std;
 int main()
 {
 	 int num,originalNum,remainder,result=0;
 	 cout<<"Enter the number:";
 	 cin>>num;
 	 originalNum=num;
 	 while(num!=0)
 	 {
 	 	remainder=num%10;
 	 	result=result*10+remainder;
 	 	num=num/10;
 	 	
 	 }
 	 if(result==originalNum)
 	 	 cout<<originalNum<<" is palindrome \n";
 	 
 	 else
 	 	cout<<originalNum<<"  is not palindrome \n";
 	 return 0;
 }
