/*****************************************************
* Program No 24
  Progam to implement Queue using singly linked list
******************************************************/

#include<iostream.h>
#include<conio.h>
#include<process.h>
class node
 {
    int info;
    node *next;
  public:
    node *create();
    void insert();
    void traverse();
    void dele();
 }*front=NULL;

node *node::create()
  {
    node *nptr;
    int item;
    nptr=new node;
    if(nptr==NULL)
     {
      cout<<"\nOverflow....";
     }
    else
     {
      cout<<"\nEnter the value to be inserted : ";
      cin>>item;
      nptr->info=item;
      nptr->next=NULL;
      }
     return(nptr);
  }


void node::insert()
 {
   node *nptr=create();
   node *temp;
   if(front==NULL)
    {
      front=nptr;
     }
    else
     {
      temp=front;
      while(temp->next!=NULL)
       {
	temp=temp->next;
	}
       temp->next=nptr;
    }
     cout<<"\nNode inserted.....";
 }


void node::dele()
 {
   if(front==NULL)
   cout<<"\nQueue is empty....";
   else
   {
    node *temp=front;
    front=temp->next;
    cout<<"The element deleted from the queue is: \n"<<temp->info;
    delete(temp);
   }
  }




void node::traverse()
 {
  if(front==NULL)
  cout<<"\nQueue is empty....";
  else
   {
    node *temp=front;
    cout<<"\n The elements of the queue are : ";
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
    cout<<"\n\nQueue using Linked list \n";
    cout<<"\n1. Insert ";
    cout<<"\n2. Delete ";
    cout<<"\n3 .Traverse";
    cout<<"\n4 .Exit\n";
    cout<<"\nEnter your choice... ";
    cin>>ch;
    switch(ch)
     {
      case 1 : n.insert();
	       break;
      case 2 : n.dele();
	       break;
      case 3 : n.traverse();
	       break;
      case 4 : break;
      default: cout<<"\nInvalid input....";
    }
  cout<<"\nPress enter key to continue........";
  getch();
  } while(ch!=4);
 }
