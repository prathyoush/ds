/*  program Nom 11
    Program for insertion sort */
#include<iostream.h>
#include<conio.h>
class arr
{
int a[10],n;
public:
void accept();
void insort();
};
void arr::accept()
{
 int i;
cout<<"enter the number of elements";
cin>>n;
cout<<"enter the elements";
for(i=0;i<n;i++)
{
cin>>a[i];
}
}

void arr::insort()
{
 int temp,i,j=0;
cout<<"The array before sorting is\n " ;
for(i=0;i<n;i++)
 {
 cout<< a[i]<<" ";
 }
 cout<<endl;
for(i=1;i<n;i++)
{
/*for(int k=0;k<i;k++)
cout <<" "<<a[k];
cout <<endl;    */
temp=a[i];
j=i-1;
while(j>=0 && a[j]>temp)
{
a[j+1]=a[j];
j=j-1;

}
a[j+1]=temp;

}
cout<<"The sorted array is \n";
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
}
void main()
{
clrscr();
arr i;
int opt;

   do
    {
     clrscr();
     cout<<"1. Create"<<endl;
     cout<<"2. Insort"<<endl;
     cout<<"3.Exit"<<endl;
     cout<<"Enter your option";
     cin>>opt;
     switch (opt)
     {
      case 1 : i.accept();
	       break;
      case 2 : i.insort();
	       cout<<"Press any key to continue....";
	       getch();
	       break;
      case 3 : cout <<"exiting.....";
	       break;

      default : cout<<"Invalid option";
		break;
      }

	  }while (opt !=3);
  getch();
}