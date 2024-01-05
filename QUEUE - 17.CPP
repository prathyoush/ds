/* Program 17
   Implementation of Queue using arrays */

#include<conio.h>
#include<iostream.h>
#define max 10
class queue
{
   int a[max],front,rear;
 public:
    queue();
    void insert();
    void deletion();
    void show();
 };

 queue::queue()
{
 front=-1;
 rear=-1;
}
 void queue::insert()
 {
   if(rear==max-1)
    cout<<"The queue is full";
   else
   {
    if(front==-1)
     front=0;
     rear++;
     cout<<"Enter the element";
     cin>>a[rear];
     cout<<"press any key....";
    }
   getch();
}
void queue::deletion()
{
 if(front==-1)
 {
 cout<<"the queue is empty";
 }
 else
{
cout<<"The element deleted is "<<a[front];
if(front==rear)
{
 front=-1;
 rear=-1;
 }
 else
 {
 front++;
 }}
getch();
}
void queue::show()
{
int i=0;
if (front<0)
cout<<"the queue is empty ";
else
{
cout<<"Elements of the queue are:";
for(i=front;i<=rear;i++)
cout<<a[i]<<"  ";
}
cout<<"\npress any key ....";
getch();

}
void main()
{

queue q;
int n=0;
while(n!=4)
{
clrscr();
cout<<"Queue Operations \n1.Insert\n2.Delete\n3.Traversal\n4.Exit\n";
cout<<"Enter your option ";
cin>>n;
switch(n)
{
case 1: q.insert();
	break;
case 2: q.deletion();
	break;
case 3: q.show();
	break;
case 4:
	break;
default : cout<<"Invalid option ";
	  getch();
}
}
cout<<"Press any key........";
getch();
}
