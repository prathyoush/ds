/*****************************************
  Program No. 19
  To implement singly linked list
******************************************/

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
      cout<<"\nNode inserted";
    }
 }


void node::insertbeg()
  {
   node *nptr=create();
   if(start==NULL)
    {
     start=nptr;
    }
   else
    {
     nptr->next=start;
     start=nptr;
    }
     cout<<"\nNode inserted";
   }

 void node::insertbet()
  {
   int pos;
   cout<<"Enter the position where the node is to be inserted";
   cin>>pos;
   if(pos>count)
    {
     cout<<"\ninvalid position";
    }
   else
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
      for(int i=1;i<pos-1;i++)
       {
	 cout<<temp->info<<" " ;
	 temp=temp->next;
	}
       nptr->next=temp->next;
       temp->next=nptr;
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
     cout<<"\nNode inserted";
 }


void node::deletbeg()
 {
   if(start==NULL)
   cout<<"\nList is empty";
   else
   {
    node *temp=start;
    start=temp->next;
    cout<<"The element deleted is:\n"<<temp->info;
    delete(temp);
    count--;
   }
  }


void node::deletpos()
  {
   int pos;
   cout<<"Enter the position of the element to be deleted";
   cin>>pos;
   if(pos>count)
     cout<<"Invlaid position";
   else
     {
      if(start==NULL)
       cout<<"\nList is empty";
      else
       {
	node *temp,*prev;
	temp=start;
	for(int i=1;i<pos;i++)
	 {
	  prev=temp;
	  temp=temp->next;
	  }
	prev->next=temp->next;
	 cout<<"The element deleted is"<<temp->info;
	delete(temp);
	count--;
       }
    }
  }


void node::deletend()
 {
   if(start==NULL)
   cout<<"\nList is empty";
   else
    {
     node *temp,*prev;
     temp=start;
     while(temp->next!=NULL)
      {
	prev=temp;
	temp=temp->next;
       }
     prev->next=NULL;
     cout<<"The element deleted is"<<temp->info;
     delete(temp);
     count--;
   }
 }

void node::dele()
 {
   node *curr,*temp=start;
   start=NULL;
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
       } while(temp!=NULL);
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
    cout<<"\n1. Create new link list";
    cout<<"\n2.insert at the begening";
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
  clrscr();
  }while(ch!=9);
 }
