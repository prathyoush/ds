/* program  No. 13
Stack implementation using arrays */
#include<iostream.h>
#include<conio.h>
#define MAX 10
class stack
{
 int arr[MAX],top;
 public:
    stack();
    void push();
    void pop();
    void traverse();
    };

 stack::stack()
 {
  top=-1;
  }

 void stack::push()
 {
  int ele;
  if (top==MAX-1)
  cout<<" Stack is full.... Overflow ...";
  else
  {
   cout<<"enter the item ";
   cin>>ele;
   arr[++top]=ele;
   cout<<"Item pushed ....:";
   }
   }

 void stack::pop()
 {
  if (top==-1)
  cout<<"\n Underflow..... ";
  else
  cout<<"\nThe popped element is.."<< arr[top--];

 }

 void stack::traverse()
 {

  if (top==-1)
  cout<<"\nStack is empty....";
  else
  {
   cout<< "\nThe stack is ....\n";
   for(int i=top;i>=0;i--)
   cout<<arr[i]<<"  ";
   }
   }

 void main()
  {
   stack s;
   int ch=0;
   while(ch!=4)
   {
    clrscr();
    cout<<"Stack operations\n" ;
    cout<<"1. Push \n";
    cout<<"2. Pop \n";
    cout<<"3. Traverse \n";
    cout<<"4. Exit\n";
    cout<<"Enter your option ...." ;
    cin>>ch;
    switch(ch)
    {
     case 1 : s.push();
	      s.traverse();
	      getch();
	      break;
     case 2 : s.pop();
	      s.traverse();
	      getch();
	      break;
     case 3 : s.traverse();
	      getch();
	      break;
     default : "Invalid option.....\n";
	      getch();
   }
}   }