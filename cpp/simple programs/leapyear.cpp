#include<iostream>
 using namespace std;
 bool isLeapYear(int year);
  int main() 
  {
  	 int year;
  	 cout<<"Enter a year:";
  	 cin>>year;
  	 isLeapYear(year)? cout<<year<<"is a leap year": cout<<year<<"is not a leap year";
  }
  bool isLeapYear(int year)
  {
  	 if(year%400==0)
  	 	return true;
  	 if(year%100==0)
  	 	return false;
  	 if(year%4==0)
  	 	return true;
  	 return false;
  }