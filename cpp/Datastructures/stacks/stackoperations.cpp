#include<iostream>

 using namespace std;
 #define MAXSIZE 20
 int Top=-1,stack[MAXSIZE];
 void push();
 int pop();
 void display();
  int main()
  {
  	 int ch;
  	 while(1)
  	 {
  	 	cout<<"Stack Menu \n";
  	 	cout<<"\n\n 1.Push(Insert an element to the stack):\n";
  	 	cout<<"\n 2.Pop(Delete an element to the stack):\n";
  	 	cout<<"\n 3.Display(Traverse the element of the stack):\n";
  	 	cout<<"\n 4. Quit\n";
  	 	cout<<"Enter your choice:";
  	 	cin>>ch;
  	 	switch(ch)
  	 	{
  	 		case 1:
  	 		  push();
  	 		  break;
  	 		case 2:
  	 		   pop();
  	 		   break;
  	 		case 3:
  	 		   display();
  	 		case 4:
  	 		   exit(0); 
  	 		 default:
  	 		   cout<<"Wrong choice:\n";  			    
  	 	}
  	 }
  	 	
  }
  void push()
  {
  	int item;
  	if(Top==MAXSIZE-1)
  	{
  		cout<<"The stack is full:\n";
  		//exit(0);
  	}
  	else
  	{
  		cout<<"Enter the element to be inserted:\n";
  	    cin>>item;
  	    Top=Top+1;
  	    stack[Top]=item;
  	}
  }
   int pop()
   {

   	   int item;
   	   if(Top==-1)
   	   {
   	   	cout<<"The stack is empty:\n";
   	   	//exit(0);
   	   }
   	   else
   	   {
   	   	 item=stack[Top];
   	   	 Top=Top-1;
   	   }
   	   return item;
   }
   void display()
   {
   	 int i;
   	  if(Top==-1)
   	   {
   	   	cout<<"The stack is empty:\n";
   	   	//exit(0);
   	   }
   	   else{
   	   	for(i=Top;i>=0;i--)
   	   	{
   	   		cout<<endl<<stack[i];
   	   	}
   	   }

   }