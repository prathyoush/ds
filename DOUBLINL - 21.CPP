/***********************************************
*   Program No. 21
    Program to implement doubly linked list
************************************************/

#include<iostream.h>
#include<conio.h>
#include<process.h>
 int count;
 class node
 {
    int info;
    node *prev, *next;
   public:
    node *create();
    void insert();
    void insertbeg();
    void insertbet();
    void insertend();
    void deletbeg();
    void deletend();
    void deletpos();
    void displaybtoe();
    void displayetob();
    void dele();
 } *start=NULL,*end=NULL;

 node *node::create()
  {
   node *nptr;
   int item;
   nptr=new node;
   if(nptr==NULL)
    {
     cout<<"\n Overflow....";
    }
   else
    {
     cout<<"\nEnter the value to be inserted : ";
     cin>>item;
     nptr->info=item;
     nptr->prev=NULL;
     nptr->next=NULL;
     count++;
    }
 return(nptr);
 }

 void node::insert()
  {
   int n;
   cout<<"How many nodes....";
   cin>>n;
   for(int i=1;i<=n;i++)
    {
      node *nptr=create();
      node *temp;
      if(start==NULL)
       {
	start=nptr;
	end=nptr;
       }
      else
       {
	end->next=nptr;
	nptr->prev=end;
	end=nptr;
       }
      cout<<"\nNode inserted...";
    }
  }

void node::insertbeg()
 {
   node *nptr=create();
   if(start==NULL)
    {
     start=nptr;
     end=nptr;
    }
   else
    {
     nptr->next=start;
     start->prev=nptr;
     start=nptr;
    }
   cout<<"\nNode inserted....";
}


 void node::insertbet()
 {
   int pos;
   cout<<"Enter the position where the node is to be inserted..";
   cin>>pos;
   if(pos>count)
    {
     cout<<"Invalid position...\n";
    }
   else
    {
     node *nptr=create();
     node *temp=next;
     if(start==NULL)
      {
       start=nptr;
       end=nptr;
      }
    else
    {
     if(pos==1)
      {
	start->prev=nptr;
	nptr->next=start;
	start=nptr;
      }
     else
     {
      temp=start;
      for(int i=1;i<pos-1;i++)
       {
	 cout<<temp->info<<" ";
	 temp=temp->next;
	}
      next=temp->next;
      nptr->next=temp->next;
      nptr->prev=next->prev;
      temp->next=nptr;
      next->prev=nptr;
   }
  }
   cout<<"\nNode inserted...";
  }
 }

void node::insertend()
  {
  node *nptr=create();
  node *temp;
  if(start==NULL)
   {
     start=nptr;
     end=nptr;
    }
  else
  {
    end->next=nptr;
    nptr->prev=end;
    end=nptr;
   }
  cout<<"\nNode inserted...";
}

void node::deletbeg()
 {
  node *temp;
  if(start==NULL)
    cout<<"\n list is empty";
  else
   {
    temp=start;
    start=temp->next;
    start->prev=NULL;
    if (temp->next==NULL)
    end=NULL;
    cout<<"The element deleted is... "<<temp->info;
    delete(temp);
    count--;
   }
 }

void node::deletpos()
 {
   int pos;
   node *temp,*prev;
   cout<<"Enter the position to be deleted\n";
   cin>>pos;
   if(pos>count)
     cout<<"Invalid position";
   else
    {
     if(start==NULL)
       cout<<"\nList is empty";
     else
      {
       temp=start;
       if (pos==1)
       { deletbeg();
       }
       else
       {
       for(int i=1;i<pos;i++)
	{
	  prev=temp;
	  temp=temp->next;
	 }
       prev->next=temp->next;
       temp->next->prev=prev;
       if (pos==count)
	end=prev;
       cout<<"deleted element is "<<temp->info;
       delete(temp);
   }
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
    temp=end,prev=end->prev;
    if (temp->prev==NULL)
    {
     start=NULL;
     end=NULL;
    }
    else
    {
     prev->next=NULL;
     end=prev;
    }
    cout<<"The element deleted is\t "<<temp->info;
    delete(temp);
    count--;
}
}
void node::displaybtoe()
{
  cout<<"\nTotal number of node is : "<<count;
  if(start==NULL)
    cout<<"\nList is empty...";
  else
   {
     node *temp=start;
     cout<<"\n The element are : ";
     while (temp!=NULL)
      {
	cout<<temp->info<<" ";
	temp=temp->next;
      }
   }
}

void node::displayetob()
 {
   cout<<"total number of node is : "<<count;
   if(end==NULL)
      cout<<"\n List is empty";
   else
   {
     node *temp=end;
     cout<<"\n the elements are: ";
     while(temp!=NULL)
      {
       cout<<temp->info<<" ";
       temp=temp->prev;
      }
    }
 }

void node::dele()
 {
   node *curr,*temp=start;
   if(temp!=NULL)
    {
     cout<<"Deleted items are ";
     do
      {
       curr=temp;
       temp=temp->next;
       cout<<curr->info<<" ";
       delete (curr);
       count--;
       } while(temp!=NULL);
       start=NULL;
       end=NULL;
      }
 }



void main()
 {
  node n;
  int ch;
  do
   {
     clrscr();
     cout<<"\n\n Doubly lined list operations\n";
     cout<<"\n1.  Create a doubly linked list";
     cout<<"\n2.  Insert at the begining";
     cout<<"\n3.  Insert at end";
     cout<<"\n4.  Insert at a particular position";
     cout<<"\n5.  Delete from beginning";
     cout<<"\n6.  Delete from end";
     cout<<"\n7.  Delete from particular position";
     cout<<"\n8.  Traverse from beginnind to end ";
     cout<<"\n9.  Traverse from end to beginning";
     cout<<"\n10. Exit\n";
     cout<<"\n    Enter your choice: ";
     cin>>ch;
     switch(ch)
      {
	case 1  : n.dele();
		  n.insert();
		  break;
	case 2  : n.insertbeg();
		  break;
	case 3  : n.insertend();
		  break;
	case 4  : n.insertbet();
		  break;
	case 5  : n.deletbeg();
		  break;
	case 6  : n.deletend();
		  break;
	case 7  : n.deletpos();
		  break;
	case 8  : n.displaybtoe();
		  break;
	case 9  : n.displayetob();
		  break;
	case 10 : exit(0);
		  break;
	default : cout<<"\n Invalid input...";
      }
      cout<<"\nPress enter key to continue...";
      getch();
   }
while(ch!=10);
}
