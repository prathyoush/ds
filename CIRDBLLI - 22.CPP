/********************************************************
*  Program No. 22
*  program to implement a circular doubly linked list
**********************************************************/
#include<iostream.h>
#include<conio.h>
#include<process.h>
int count;
class node
  {
	int info;
	node *prev,*next;
	public:
		node *create();
		void insert();
		void insertbeg();
		void insertbet();
		void insertend();
		void deletbeg();
		void deletend();
		void delepos();
		void displaybtoe();
		void displayetob();
  } *start, *end;


node *node::create()
{
	node *nptr;
	int item;
	nptr=new node;
	if(nptr==NULL)
	{
	cout<<"\n Overflow";
	}
	else
	{
		cout<<"\n Enter the value to be inserted:";
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
	count=0;
	int n;
	cout<<"How many nodes ? \n"  ;
	cin>>n;
	start=NULL;
	end=NULL;
	for(int i=1;i<=n;i++)
	{
	node *nptr=create();
	node *temp;
	if(start==NULL)
	{
	   nptr->prev=nptr->next=nptr;
	   start=nptr;
	   end=nptr;
	}
	else
	 {
	   nptr->next=end->next;
	   end->next=nptr;
	   nptr->prev=end;
	   start->prev=nptr;
	   end=nptr;

	}
		cout<<"\n Node inserted ";
       }


 }

void node::insertbeg()
{
	node *nptr=create();
	if(start==NULL)
	{
	   nptr->next=nptr->prev=nptr;
	   start=nptr;
	   end=nptr;
	}
	else
	     {
	     nptr->next=start;
	     nptr->prev=end;
	     start->prev=nptr;
	     end->next=nptr;
	     start=nptr;
	      }

		cout<<"\n Node inserted";

}

void node::insertbet()
{
	int pos;
	cout<<"Enter the position where the node is to be inserted";
	cin >>pos;
	if (pos>count)
	{
	 cout<<"Invalid position";
	 }
	 else
	 {
	node *nptr=create();
	node *temp,*next;
	if(start==NULL)
	{
	   start=nptr;
	   end=nptr;
	   end->next=end->prev=nptr;
	   start->prev=start->next=nptr;
	}
	else
	{
	 if(pos==1)
	 {
	  start->prev=nptr;
	  end->next=nptr;
	  nptr->next=start;
	  nptr->prev= end;
	  start=nptr;

	}
	  else
	{       temp=start;
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
	   end=nptr;
	   end->next=end->prev=nptr;
	   start->prev=start->next=nptr;
	}
	else
	 {
	   end->next=nptr;
	   nptr->prev=end;
	   nptr->next=start;
	   start->prev=nptr;
	   end=nptr;

	}
		cout<<"\n Node inserted";

}


void node::deletbeg()
{
	if(start==NULL)
	cout<<"\n List is empty";
	else
	 {
	   node *temp=start;
	    if (start==end)
	     {
	     start=NULL;
	     end=NULL;
	     }
	    else
	    {
	   start=temp->next;
	   start->prev=end;
	   end->next=start;
	   }
	   cout<<"The element deleted is "<<temp->info;
	   delete(temp);
		count--;
	}
}


void node::delepos()
{
	 int pos;
	 cout<<"Enter the position of the element to be deleted";
	 cin>>pos;
	 if (pos>count)
	  cout<<"Invalid position" ;
	  else
	  {
	if(start==NULL)
	cout<<"\n List is empty";
	else
	 {    node *temp,*prev,*next1;
		temp=start;
	    if(pos==1)
	    {
	     deletbeg();
	     }
	   else
	   {
	   if (start==end)
	   {
	     start=NULL;
	     end=NULL;
	     }
	    else
	      {

		for(int i=1;i<pos;i++)
		 {
		  prev=temp;
		  temp=temp->next;
		  }
		   next1=temp->next;
		  prev->next=temp->next;
		  next1->prev=temp->prev;
		 }

		  cout<<"Element deleted id  :" <<temp->info;
		  delete(temp);
		 }

	}
}
}


void node::deletend()
{
	if(start==NULL)
	cout<<"\n List is empty";
	else
	{
	   node *temp=end,*prev;
	   if (start==end)
	   {
	     start=NULL;
	     end=NULL;
	     }
	   else
	   {
		prev=end->prev;
		prev->next=start;
		start->prev=end->prev;
		end=prev ;
		}
		cout<<"The element deleted is "<<temp->info;
		delete(temp);

		count--;
	}
}


void node::displaybtoe()
{       cout<<"Total number of nodes is "<<count;
	if(start==NULL)

	cout<<"\n List is empty";
	else
	{
		node *temp=start;
		cout<<"\n The elements are: ";
		while (temp->next!=start)
		{

			cout<<temp->info<<" ";
			temp=temp->next;

		}
		cout<<temp->info;

	}
}

void node::displayetob()
{       cout<<"Total number of nodes is "<<count;
	if(end==NULL)

	cout<<"\n List is empty";
	else
	{
		node *temp=end;
		cout<<"\n The elements are:";
		while(temp->prev!=end)
		{    cout<<temp->info<<" ";
		     temp=temp->prev;
		}
			cout<<temp->info<<" ";
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
		cout<<"\n\nCircular Doubly Linked list Operations\n\n";
		cout<<" 1. Create a doubly linklist\n";
		cout<<" 2. Insert at the Beginning\n";
		cout<<" 3. Insert at end\n";
		cout<<" 4. Insert at a particular position\n" ;
		cout<<" 5. Delete from beginning \n";
		cout<<" 6. Delete from particular position\n";
		cout<<" 7  Delete from end\n";
		cout<<" 8. Travese from beginning to end\n";
		cout<<" 9. Traverse from endd to bginning\n";
		cout<<"10. Exit\n";
		cout<<"\n Enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1 : n.insert();
				 break;
			case 2 : n.insertbeg();
				 break;
			case 3 : n.insertend();
				 break;
			case 4 : n.insertbet();
				 break;
			case 5 : n.deletbeg();
				 break;
			case 6 : n.delepos();
				 break;
			case 7 : n.deletend();
				 break;
			case 8 : n.displaybtoe();
				 break;
			case 9 : n.displayetob();
				 break;
			case 10: exit(0);
				 break;
			default: cout<<"\n Invalid input";
		}
       cout<<"\nPress enter key to continue" ;
       getch();
	}while(ch!=10);
}
