/* Program nO.26
   To arrange elements of a singly linked list in ascending order */

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
    void sort();
	void display();

 }*start=NULL;

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
      cout<<"\nEnter the value to be inserted";
      cin>>item;
      nptr->info=item;
      nptr->next=NULL;
      }
     return(nptr);
  }


void node::insert()
 {
  int i,limit;
  start=NULL;
  cout<<"Enter How many nodes ";
  cin>>limit;
  for(i=1;i<=limit;i++)
   {
     node *nptr=create();
     node *temp;
     if(start==NULL)
      {
	start=nptr;
       }
      else
      {
	temp=start;
	while(temp->next!=NULL)
	{
	 temp=temp->next;
	 }
	temp->next=nptr;
      }
    }
 }

void  node::sort()
{
  int temp;
   node *current=start, *index=NULL;
   if (start==NULL)
      cout<<"Linked list is empty ";
   else
     while (current!=NULL)
      {
       index=current->next;
	 while(index!=NULL)
	  {
	   if (current->info > index->info)
	    {
	     temp=current ->info;
	     current->info= index->info;
	     index ->info=temp;
	    }
	    index=index->next;
	   }
	 current=current->next;
	 }
	 }


void node::display()
 {

  if(start==NULL)
  cout<<"\nList is empty";
  else
   {
    node *temp=start;
    cout<<"\n The elements are:";
    while(temp!=NULL)
    {
     cout<<temp->info<<" ";
     temp=temp->next;
    }
  }
 }

void main()
 {
  clrscr();
  node n;
  int ch;
  do
   {
    cout<<"\n\nLinked list operations\n";
    cout<<"\n1. Create link list";
    cout<<"\n2. Sort the link list";
    cout<<"\n3.Traverse";
    cout<<"\n4.Exit\n";
    cout<<"\nEnter your choice... ";
    cin>>ch;
    switch(ch)
     {
      case 1 : n.insert();
	       break;
      case 2 : n.sort();
	       break;
      case 3 : n.display();
	       break;
      case 4 : exit(0);
	       break;
      default: cout<<"\nInvalid input";
    }
  cout<<"\nPress enter key to continue........";
  getch();
  clrscr();
  }while(ch!=9);
 }
