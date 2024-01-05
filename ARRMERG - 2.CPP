/******************************
*  Program No. 2
*  Program to merge two arrays
*********************************/
#include<iostream.h>
#include<conio.h>
class merge
{
int a[10],b[10],c[20],m,n,i,j,k;
public:
void getdata1();
void getdata2();
void displaydata1();
};
void merge::getdata1()
{
cout<<"enter the no of elements";
cin>>m;
cout<<"\nenter the elements in sorted order";
for(i=0;i<m;i++)
{
cin>>a[i];
}
}
void merge::getdata2()
{
cout<<"enter the no of elements";
cin>>n;
cout<<"enter the elements in sorted order";
for(j=0;j<n;j++)
{
cin>>b[j];
}
}
void merge::displaydata1()
{
i=0,j=0,k=0;
while((i<m)&&(j<n))
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
k++;
}
else
{
c[k]=b[j];
j++;
k++;
}
}
while(i<m)
{
c[k++]=a[i++];
}
while(j<n)
{
c[k++]=b[j++];
}
cout<<"the elements after merging is" <<endl;
for(k=0;k<m+n;k++)
{
cout<<c[k]<<" ";
}
}

void main()
{
clrscr();
merge m;
cout<<"enter the elements of the first array in sorted order\n";

m.getdata1();
cout<<"enter the elements of the second array in sorted order\n";
m.getdata2();
m.displaydata1();
getch();
}




