/*#include<iostream>
using namespace std;
#define MAXSIZE 20
class menuqueue
{
	 int front,rear;
	 int queue[10];
public:
    void qinsert();
    int qdelete();
    void qdisplay();
    menuqueue(){
    	front=-1;
    	rear=-1;
    }	 

} ;
void menuqueue::qinsert()
{
	  int item;
	  if(rear==(MAXSIZE-1))
	  {
	  	cout<<"The queue is already full::\n";
	  	return;
	  }
	  else
	  {
	  	cout<<"Enter the item that you want to insert:\n";
	  	cin>>item;
	  	rear=rear+1;
	  	queue[rear]=item;

	  	if(front==-1){
	  		front =front+1;
	  	}
	  }
	  return;
}
int menuqueue::qdelete()
{
 int item;
 if(front==-1)
  { 		                             
	 	 cout<<"The queue is already empty:\n";
	 	return 1;
	 }
	 else
	 {
	    if(front==rear)
	 	front=rear=-1;
	 
	 else
	 {
        item =queue[front];
        front++;

        cout<<"The deleted item is "<<queue[front];
	 }
   }
   return(item);
}
void menuqueue::qdisplay()
{
	 int i;
	 if(front==-1)
	 {
	 	cout <<"The queue is empty:\n";
	 	return;
	 }
	 else
	 {
	 	cout<<"The elements of the queue are:\n";
	 	 for(i=front;i<=rear;i++)
	 	 {
	 	 	cout<<endl<<queue[i];
	 	 }
	 }
}
 int main()
 {
 	while(1)
   {
 	    menuqueue mq;
 	    int choice;
 	    cout<<"1->Insert a new element from the queue:\n";
 	    cout<<"2->Delete a element from the queue:\n";
 	    cout<<"3->Display All items of the queue:\n";
 	    cout<<"Enter your choice:\n";
 	    cin>>choice;
 	    switch(choice)
 	     {
 	         	 case 1:
 	 	             mq.qinsert();
 	 	              break;
 	 	          case 2:
 	 	              cout<<"The deleted item is"<<mq.qdelete();
 	 	              break;
 	 	          case 3:
 	 	               mq.qdisplay();
 	 	               break;
 	               default:
 	                   cout<<"You entered an invalid choice:\n";	             
 	        }

 	 }       
 }
 */
#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void Insert() {
   int val;
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}