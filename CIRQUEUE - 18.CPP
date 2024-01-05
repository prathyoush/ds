/* Program No. 18
   Implementation of Circular queue */

#include<iostream.h>
#include<conio.h>
#define size 5
class cqueue
{
int item,cq[5],front, rear;
public:
cqueue();
void insert();
void del();
void traverse();
};

cqueue::cqueue()
{
 front=rear=-1;
 }

void cqueue::insert()
{
if(((front==0) && (rear==size-1)) ||(front==rear+1))
 {
  cout<<"circular queue is full"<<endl;
 }
 else
 {
 if((front==-1)&&(rear==-1))
 {
 front=0;
 }
cout<<"enter the item to insert";
cin>>item;
rear=(rear+1)%size;
cq[rear]=item;
}
}

void cqueue::del()
{
if((front==-1)&&(rear==-1))
{
cout<<"The circular queue is empty";
}
else
{
 cout<<"The element deleted is "<<cq[front]<<endl;
 }
if(front==rear)
{
front=rear=-1;
}
else
 {
 front=(front %size)+1;
 }
 }
void cqueue::traverse()
{
 int i;
 if((front==-1)&&(rear==-1))
 {
  cout<<" The circular queue is empty";
  }
 else
  {
   cout <<"The circular queue is "<<endl;
     if(front<=rear)
      {
	for(i=front;i<=rear;i++)
	{
	  cout<<cq[i]<<" ";
	 }
      }
      else

       {
	 for(i=front;i<size;i++)
	{
	  cout<<cq[i]<< " ";
	 }
	  for(i=0;i<=rear;i++)
	  {
	   cout<<cq[i]<<" ";
	  }
	}
    }
 }

void main()
{
clrscr();
int x;
cqueue op;
do
{
clrscr();
cout<<"circular queue operation"<<endl;
cout<<"1.insertion"<<endl;
cout<<"2.deletion"<<endl;
cout<<"3.traverse"<<endl;
cout<<"4.exit"<<endl;
cout<<"enter the option "<<endl;
cin>>x;
switch(x)
{
case 1: op.insert();
	break;
case 2: op.del();
	break;
case 3: op.traverse();
	break;
case 4: break;

default: cout<<"wrong entry"<<endl;
	 break;
}
getch();
}
while(x!=4);
}


