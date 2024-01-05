/* Program  No. 5
 Program for sparse matrix transpose representation*/

#include<iostream.h>
#include<conio.h>
class sparse
{
int a[10][3], trans[10][3];
int k,m,n;
public:
void get(void);
void transp(void);
void put(void);
};
/**********************/
void sparse::get()
/***********************/
{
int i,j,ele;
cout<<"Enter the number of rows of the matrix\n";
cin>>m;
cout<<"enter the number of columns of the matrix\n";
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
    cout<<"Press any key.....\n ";
 getch();

   cout<<"The sparse representation form of the transpose is \n";
  for(i=0;i<k;i++)
{
for(j=0;j<3;j++)
{
cout<<trans[i][j]<<"\t";
}
cout<<"\n";
}

}

void sparse::transp()
{
 int i,j,q=0;

 trans[q][0]=a[0][1];
 trans[q][1]=a[0][0];
 trans[q][2]=a[0][2];
 q++;
 if (k>0)
  {
 for (i=1;i<=n;i++)
   {
    for(j=1;j<=k;j++)
    {
     if(a[j][1]==i)
     {
      trans[q][0]=a[j][1];
      trans[q][1]=a[j][0];
      trans[q][2]=a[j][2];
      q++;
    }
   }
  }
 }
}

void main()
{
clrscr();
sparse s;
s.get();
s.transp();
s.put();
getch();
}

