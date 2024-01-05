/* Program No. 20
  Implement circular singly linked list */

#include<iostream.h>
#include<conio.h>
#include<process.h>
int count;
class node
 {
     int info;
     node *next;
   public:
     node *create();
     void insert();
     void display();
     void insertbeg();
     void insertbet();
     void insertend();
     void deletbeg();
     void deletend();
     void deletpos();
     void dele();
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
      count++;
     }
     return(nptr);
  }

void node::insert()
 {
  int i,limit;
  cout<<"Enter How many nodes ";
  cin>>limit;
  for(i=1;i<=limit;i++)
   {
     node *nptr=create();
     node *temp;
     if(start==NULL)
      {
	start=nptr;
	nptr->next=start;
       }
      else
      {
	temp=start;
	while(temp->next!=start)
	{
	 temp=temp->next;
	 }
	temp->next=nptr;
	nptr->next=start;
       }
      cout<<"\nNode inserted";
    }
 }


void node::insertbeg()
  {
   node *nptr=create();
   node *temp=start;
   if(start==NULL)
    {
     start=nptr;
     nptr->next=start;
    }
   else
    {
    while(temp->next!=start)
     {
      temp=temp->next;
      }
      temp->next=nptr;
      nptr->next=start;
      start=nptr;
     }
     cout<<"\nNode inserted";
   }


 void node::insertbet()
  {
   int pos;
   cout<<"Enter the position where the node is to be inserted : ";
   cin>>pos;
   if(pos>count)
    {
     cout<<"\ninvalid position";
    }
   else
   {
     node *nptr=create();
     node *temp=start;
     if(start==NULL)
      {
       start=nptr;
       nptr->next=start;
      }
     else
     {
      if(pos==1)
      {
       while(temp->next!=start)
     {
      temp=temp->next;
      }
      temp->next=nptr;
      nptr->next=start;
      start=nptr;
      }
      else
      {
       temp=start;
       for(int i=1;i<pos-1;i++)
	{
	 cout<<temp->info<<" " ;
	 temp=temp->next;
	}
       nptr->next=temp->next;
       temp->next=nptr;
     }
   }
    cout<<"\n Node inserted";
   }
  }

void node::insertend()
 {
   node *nptr=create();
   node *temp;
   if(start==NULL)
    {
      start=nptr;
      nptr->next=start;
     }
    else
     {
      temp=start;
      while(temp->next!=start)
       {
	temp=temp->next;
	}
       nptr->next=start;
       temp->next=nptr;
    }
     cout<<"\nNode inserted";
 }


void node::deletbeg()
 {
   node *temp=start;
   if(start==NULL)
   cout<<"\nList is empty";
   else
   {
     if(temp->next==start)
      {
       temp=temp->next;
       start=NULL;
      }
     else
     {
      while(temp->next!=start)
       {
	temp=temp->next;
       }
      temp->next=start->next;
      temp=start;
      start=start->next;
      }
    cout<<"The element deleted is:\n"<<temp->info;
    delete(temp);
    count--;
   }
 }

void node::deletpos()
  {
   int pos;
   node *temp=start,*prev;
   cout<<"Enter the position of the element to be deleted :";
   cin>>pos;
   if(pos>count)
     cout<<"Invlaid position";
   else
     {
      if(start==NULL)
       cout<<"\nList is empty";
      else
       {
	 if(temp->next==start)
	  {
	   temp=temp->next;
	   start=NULL;
	  }
	else
	{
	  if (pos==1)
	  {
	   while(temp->next!=start)
	    {
	     temp=temp->next;
	     }
	      temp->next=start->next;
	      temp=start;
	      start=start->next;
	     }

	  else
	  {
	   for(int i=1;i<pos;i++)
	   {
	    prev=temp;
	    temp=temp->next;
	   }
	   }
	prev->next=temp->next;
	}
	 cout<<"The element deleted is "<<temp->info;
	 }
	delete(temp);
	count--;
     }
   }

void node::deletend()
 {
   node *prev,*temp=start;
   if(start==NULL)
   cout<<"\nList is empty";
   else
    {
      if(temp->next==start)
     {
       start=NULL;
     }
     else
    {
     temp=start;
     while(temp->next!=start)
      {
	prev=temp;
	temp=temp->next;
       }
     prev->next=start;
     }
     cout<<"The element deleted is"<<temp->info;
     delete(temp);
     count--;
  }
 }

void node::dele()
 {
   node *curr,*temp=start;

   if(temp!=NULL)
    {
     cout<<"deleted items are ";
     do
      {
       curr=temp;
       temp=temp->next;
       cout<<curr->info<<" ";
       delete (curr);
       count--;
       } while(temp!=start);
       start=NULL;
   }
 }


void node::display()
 {
  cout<<"\ntotal number of nodes is : "<<count;
  if(start==NULL)
  cout<<"\nList is empty";
  else
   {
    node *temp=start;
    cout<<"\n The elements are:";
    while(temp->next!=start)
    {
     cout<<temp->info<<" ";
     temp=temp->next;
    }
     cout<<temp->info ;
  }
 }

void main()
 {
  clrscr();
  node n;
  int ch;
  do
   {
    clrscr();
    cout<<"\n\nCircular Linked list operations\n";
    cout<<"\n1. Create new link list";
    cout<<"\n2.Insert at the begening";
    cout<<"\n3.Insert at the end";
    cout<<"\n4.insert at a perticular position";
    cout<<"\n5.Delete from begening";
    cout<<"\n6.Delete from particular position";
    cout<<"\n7.Delete from end";
    cout<<"\n8.Traverse";
    cout<<"\n9.Exit\n";
    cout<<"\nEnter your choice... ";
    cin>>ch;
    switch(ch)
     {
      case 1 : n.dele();
	       n.insert();
	       break;
      case 2 : n.insertbeg();
	       break;
      case 3 : n.insertend();
	       break;
      case 4 : n.insertbet();
	       break;
      case 5 : n.deletbeg();
	       break;
      case 6 : n.deletpos();
	       break;
      case 7 : n.deletend();
	       break;
      case 8 : n.display();
	       break;
      case 9 : exit(0);
	       break;
      default: cout<<"\nInvalid input";
    }
  cout<<"\nPress enter key to continue........";
  getch();
  }while(ch!=9);
 }
