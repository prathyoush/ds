/*program No 6
Program for polynomial addition using arrays*/

#include<iostream.h>
#include<conio.h>
class polyadd
{
int a[20],b[20],c[40],m,n,s;
public:
void get();
void add();
void disp();
};
void polyadd::get()
{
int i,j,k;
cout<<"how many elements for the first polynomial"<<endl;
cin>>m;
j=1;
for(i=0;i<2*m;i+=2,j++)
{
cout<<"enter the coefficent of terms"<<j<<endl;
cin>>a[i];
cout<<"enter the expotent of terms"<<j<<endl;
cin>>a[i+1];

}
j=1;
cout<<"how many elements for the second polynomial"<<endl;
cin>>n;
for(i=0;i<2*n;i+=2,j++)
{
cout<<"enter the coeffient of terms"<<j<<endl;
cin>>b[i];
cout<<"enter the expotent of terms"<<j<<endl;
cin>>b[i+1];
}
}

void polyadd::add()
{
int p=0;
int q=0;
int r=0;
while((p<2*m)&&(q<2*n))
{
if(a[p+1]==b[q+1])
{
c[r]=a[p]+b[q];
c[r+1]=a[p+1];
p=p+2;
q=q+2;
r=r+2;
}
else if(a[p+1]<b[q+1])
{
c[r]=b[q];
c[r+1]=b[q+1];
r=r+2;
q=q+2;
}
else
{
c[r]=a[p];
c[r+1]=a[p+1];
p=p+2;
r=r+2;
}
}
while(p<2*m)
{
c[r]=a[p];
c[r+1]=a[p+1];
r=r+2;
p=p+2;
}
while(q<2*n)
{
c[r]=b[q];
c[r+1]=b[q+1];
r=r+2;
q=q+2;
}
s=r/2;
}
void polyadd::disp()
{
int i;
cout<<"\n The first polynomial is"<<endl;
for(i=0;i<2*m;i+=2)
{
if(a[i]>0)
{
cout<<" + ";
}
cout<<a[i];
if(a[i+1]!=0)
cout<<"x^"<<a[i+1];
}

cout<<"\nThe Second polynomial"<<endl;
for(i=0;i<2*n;i+=2)
{
if(b[i]>0)
{
cout<<" + ";
}
cout<<b[i];

if(b[i+1]!=0)
cout<<"x^"<<b[i+1];
}

 cout<<"\nThe sum of two polynomial is"<<endl;
for(i=0;i<2*s;i+=2)
{
if (c[i]!=0)
{
if(c[i]>=0)
{
cout<<" + ";
}
cout<<c[i];
if(c[i+1]!=0 )

cout<<"x^"<<c[i+1];
 }
}
 }
void main()
{
clrscr();
polyadd s1;
s1.get();
s1.add();
s1.disp();
getch();
}

