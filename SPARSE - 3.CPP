/*  Porgram - 3
    Pogram for sparse matrix representation */
#include<iostream.h>
#include<conio.h>
class sparse
{
int a[10][3];
int k,m,n;
public:
void get(void);
void put(void);
};
void sparse::get()
{
int i,j,ele;
cout<<"Enter the number of rows of the matrix\n";
cin>>m;
cout<<"enter the number of columns of the matrix";
cin>>n;
cout<<"Enter the elements of the matrix"<<endl;
k=1;
for(i=0;i<m;i++)

{
 for(j=0;j<n;j++)
  {
  cin>>ele;
  if(ele!=0)
{
   a[k][0]=i+1;
 a[k][1]=j+1;
 a[k][2]=ele;
 k++;
 }
 }
 a[0][0]=m;
 a[0][1]=n;
 a[0][2]=k-1;
 }
 }
void sparse::put()
{
int i,j;
cout<<"The sparse matrix representation\n";
for(i=0;i<k;i++)
{
for(j=0;j<3;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<"\n";
}
}
void main()
{
clrscr();
sparse s;
s.get();
s.put();
getch();
}

