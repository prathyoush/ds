/* Program - 4
  Program for addition of two 
  sparse matrices */
#include<iostream.h>
#include<conio.h>
class sparseadd
{
public:
int a[10][3], b[10][3],s[15][3];
int a1,b1,s1,m,n;

int get(int a1[][3]);
void sparsead(void);
void put(int a2[][3],int p, int q);
};
/**********************/
sparseadd::get(int q[][3])
/***********************/
{
int i,j,ele;
int  a=1;
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
  {
  cin>>ele;
  if(ele!=0)
{
   q[a][0]=i+1;
   q[a][1]=j+1;
   q[a][2]=ele;
   a++;
 }
 }
 q[0][0]=m;
 q[0][1]=n;
 q[0][2]=a-1;
 }
return a;
}

void sparseadd::put(int a2[][3],int k, int l)
{
 int i,j;
  for(i=0;i<k;i++)
   {
    for(j=0;j<l;j++)
    {
      cout<<a2[i][j]<<"\t";
     }
    cout<<"\n";
    }
cout<<"Press any key to continue......\n";
getch();
}

void sparseadd::sparsead()
{
 int i,j,p,q;
 i=j=s1=1;
  while((i<a1)&&(j<b1) )
  {
   if(a[i][0]==b[j][0])
    {
     if(a[i][1]==b[j][1])
     {
      s[s1][0]=a[i][0];
      s[s1][1]=a[i][1];
      s[s1][2]=a[i][2]+b[j][2];
      i++;
      j++;
      if (s[s1][2]!=0)
	 s1++;
      }

     else
     {
      if(a[i][1]<b[j][1])
      {
	s[s1][0]=a[i][0];
	s[s1][1]=a[i][1];
	s[s1][2]=a[i][2];
	i++;
	s1++;
       }
       else
       {
	s[s1][0]=b[j][0];
	s[s1][1]=b[j][1];
	s[s1][2]=b[j][2];
	j++;
	s1++;
       }
      }
      }
    else
     {
      if (a[i][0]<b[j][0])
      {
       s[s1][0]=a[i][0];
       s[s1][1]=a[i][1];
       s[s1][2]=a[i][2];
       i++;
       s1++;
       }
      else
      {
       s[s1][0]=b[j][0];
       s[s1][1]=b[j][1];
       s[s1][2]=b[j][2];
       j++;
       s1++;
      }
     }
   }
   if(i<a1)
    {
     for(p = i;p<a1;p++)
     {
       s[s1][0]=a[p][0];
       s[s1][1]=a[p][1];
       s[s1][2]=a[p][2];

       s1++;
     }
    }
    else if (j<b1)
    {
      for(p=j;p<b1;p++)
      {
       s[s1][0]=b[p][0];
       s[s1][1]=b[p][1];
       s[s1][2]=b[p][2];
       s1++;

      }
     }
	  s[0][0]=m;
	  s[0][1]=n;
	  s[0][2]=s1-1;


 }

void main()
{
clrscr();
sparseadd s;
cout<<"Enter the number of rows of the matrix\n";
cin>>s.m;
cout<<"enter the number of columns of the matrix\n";
cin>>s.n;
cout<<"Enter the elements of the first matrix"<<endl;
s.a1=s.get(s.a);
cout<<"Enter the elements of the second matrix"<<endl;
s.b1=s.get(s.b);
s.sparsead();
cout<<"The first matrix in sparse form\n";
s.put(s.a,s.a1,3);
cout<<"The second matrix in sparse form\n";
s.put(s.b,s.b1,3);
cout<<"The sum of the matrices in sparse form\n";
s.put(s.s,s.s1,3);
getch();
}

