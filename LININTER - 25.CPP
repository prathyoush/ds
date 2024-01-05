/******************************************************
* Program No. 25
  Progam to interchange nodes in a singly linked list
*******************************************************/
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
    void interchange();
    void display();
 }*start=NULL;

node *node::create()
  {
    node *nptr;
    int item;
    nptr=new node;
    if(nptr==NULL)
     {
      cout<<"\nMemory overflow.....";
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
  start=NULL;
  count=0;

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
void node::interchange()
{
 int n1, n2,i;
 node *prev1, *prev2, *temp1, *temp2, *temp;
 cout <<"Enter the position of the nodes to be interchanged";
 cout<< "\nNode 1 : " ;
 cin>>n1;
 cout<< "\nNode 2 : "  ;
 cin>>n2;
 if(n1>count || n2 > count)
  {
   cout<<"Invalid position......";
   return;
  }
   prev1= prev2= temp1=temp2=start, *temp;
 if (start==NULL)
    {
      cout<<"List is empty.....";
      return;
     }

   if (n1==1)
     {
	  temp1=temp2=prev1=prev2=start;
	  for(i=1;i<n2-1;i++)
	    prev2=prev2->next;
	  temp2=prev2->next;

	  temp->next=temp2->next;
	  temp2->next=temp1->next;
	  temp1->next=temp->next;
	  prev2->next=temp1;
	  start=temp2;
	}
     else
     {
      if(n2==1)
	{
	   temp1=temp2=prev1=prev2=start;
	   for(i=1;i<n1-1;i++)
	     prev1=prev1->next;
	   temp1=prev1->next;

	   temp->next=temp1->next;
	   temp1->next=temp2->next;
	   temp2->next=temp->next;
	   prev1->next=temp2;
	   start=temp1;
	  }
      else
	{
	  for(i=1;i<n1-1;i++)
	    prev1=prev1->next;
	  temp1=prev1->next;
	  for(i=1;i<n2-1;i++)
	    prev2=prev2->next;
	  temp2=prev2->next;

	  temp->next =prev1->next;
	  prev1->next=prev2->next;
	  prev2->next=temp->next;

	  temp->next=temp1->next;
	  temp1->next=temp2->next;
	  temp2->next=temp->next;
	 }
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
  node n;
  int ch;
  do
   {
     clrscr();
     cout<<"\n\nInterchanging nodes in a Linked list\n";
    cout<<"\n1. Create new link list";
    cout<<"\n2. Interchange";
    cout<<"\n3.Traverse";
    cout<<"\n4.Exit\n";
    cout<<"\nEnter your choice... ";
    cin>>ch;
    switch(ch)
     {
      case 1 : n.insert();
	       break;
      case 2 : n.interchange();
	       break;
      case 3 : n.display();
	       break;
      case 4 : break;
      default: cout<<"\nInvalid input";
    }
  cout<<"\nPress enter key to continue........";
  getch();
  }while(ch!=4);
 }
