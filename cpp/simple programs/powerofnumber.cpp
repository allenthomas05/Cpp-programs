/*#include<iostream>
using namespace std;
class example
{ 
public:
	 int power(int n, int p)
	 {
	 	static int r=1;
	 	if(p==0)
	 	{
	 		return (1);

	 	}
	 	else
	 	{
	 		r=r*n;
	 		power(n,p-1);

	 	}
        return (r);
	 }
};
 int main()
 {
 	example pow;
 	 int base,exponential,result;
 	 cout<<"Enter the base and exponential value:";

 	 cin>>base>>exponential;
 	 result=pow.power(base,exponential);
     cout<<"The power of "<<base<<"^"<<exponential<<"="<<result;
 }
 */








#include<iostream>
using namespace std;


 	 int power(int n, int p)
	 {
	 	 static int r;
	 	 r=1;
	 	if(p==0)
	 	{
	 		return (1);

	 	}
	 	else
	 	{
	 		r=r*n;
	 		power(n,p-1);

	 	}
        return (r);
	 }

 int main()
 {
 	
 	 int base,exponential,result;
 	 cout<<"Enter the base and exponential value:";

 	 cin>>base>>exponential;
 	 result=power(base,exponential);
     cout<<"The power of "<<base<<"^"<<exponential<<"="<<result;
 }