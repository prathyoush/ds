#include<iostream.h>
#include<conio.h>
class search
{
int i,n1,n2,a[10],flag;
public:
void getdata();
void displaydata1();
void search1();
};
void search::getdata()
{
cout<<"enter the no of elements"<<endl;
cin>>n1;
cout<<"enter the elements"<<endl;
for(i=0;i<n1;i++)
{
cin>>a[i];
}
cout<<"enter the element to searched  "<<endl;
cin>>n2;
}
void search::search1()
{
//flag=0;

for(i=0;i<n1;i++)
if(a[i]==n2)
{
flag=1;
break;
}

}
void search::displaydata1()
{
if(flag==1)
cout<<"Search successful ....\nThe element is present at position "<<i+1;
else
cout<<"The element is not present in the array..."<<endl;
}

void main()
{
clrscr();
search s;
s.getdata();
s.search1();
s.displaydata1();
getch();
}

