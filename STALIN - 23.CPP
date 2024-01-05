/****************************************************
* Program No. 23
  Progam to implement stack using singly linked list
*****************************************************/
#include<iostream.h>
#include<conio.h>
#include<process.h>
class node
 {
    int info;
    node *next;
  public:
    node *create();
    void push();
    void pop();
    void traverse();
 }*top=NULL;

node *node::create()
  {
    node *nptr;
    int item;
    nptr=new node;
    if(nptr==NULL)
     {
      cout<<"\nOverflow";
     }
    else
     {
      cout<<"\nEnter the value to be pushed : ";
      cin>>item;
      nptr->info=item;
      nptr->next=NULL;
      }
     return(nptr);
  }


void node::push()
  {
   node *nptr=create();
   if(top==NULL)
    {
     top=nptr;
    }
   else
    {
     nptr->next=top;
     top=nptr;
    }
     cout<<"\nNode inserted....";
   }



void node::pop()
 {
   if(top==NULL)
   cout<<"\nStack is empty......";
   else
   {
    node *temp=top;

    top=temp->next;
    cout<<"The element popped is : "<<temp->info;
    delete(temp);
   }
  }

void node::traverse()
 {
  if(top==NULL)
  cout<<"\nThe stack is empty......";
  else
   {
    node *temp=top;
    cout<<"\n The elements in the stack are : ";
    while(temp!=NULL)
    {
     cout<<temp->info<<" ";
     temp=temp->next;
    }
  }
 }

void main()
 {
  node n;
  int ch;
  do
   {
    clrscr();
    cout<<"\n\nStack using Linked list\n";
    cout<<"\n1. Push";
    cout<<"\n2. Pop";
    cout<<"\n3. Traverse";
    cout<<"\n4. Exit";
    cout<<"\nEnter your choice... ";
    cin>>ch;
    switch(ch)
     {
      case 1 : n.push();
	       break;
      case 2 : n.pop();
	       break;
      case 3 : n.traverse();
	       break;
      case 4 : exit(0);
	       break;
      default: cout<<"\nInvalid input.....";
    }
  cout<<"\nPress enter key to continue........";
  getch();

  }while(ch!=4);
 }
