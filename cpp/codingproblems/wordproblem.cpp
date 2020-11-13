#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
	 char a[10],b[10],c[10];
	 int x,y,z;
	 int i,j;
	 cout<<"Enter the first word:\n";
	 cin>>a;
	 cout<<"Enter the second word:\n";
	 cin>>b;
	 cout<<"Enter the third word:\n";
	 cin>>c;
	 x=strlen(a);
	 y=strlen(b);
	 z=strlen(c);
	 for(i=0;i<x;i++)
	 {
	 	 if((a[i]=='a') || (a[i]=='e') || (a[i]=='i') || (a[i]=='o') || (a[i]=='u'))
	 	 {
	 	 	 a[i]= '%';
	 	 }
	 }
   for(j=0;j<y;j++)
   {
   	 if(b[j] != 'a' || b[j] !='e' || b[j] !='i' || b[j] !='o' || b[j] !='u')
	 	 {
	 	  b[j]= '#';
	 	 }
	 }
	
   
   	 //toupper(c);
	 

  cout<<a << b << c;
}