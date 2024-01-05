/* Program no. 10
   Program for selection sort*/
#include<iostream.h>
#include<conio.h>
#include <process.h>
class arr
 {
   private:
	int a[20];
	int n;
 public:

   void acc();
   void selsort();
  };


   void arr:: acc()
   {
    cout<<"How many elements";
    cin >>n;
    for(int i=0;i<n;i++)
     {
       cout<<"Enter the Element "<< i+1<< " ";
       cin>>a[i];
     }
    }
/*********************/
 void arr::selsort()
/**********************/
 {
   int i,j, temp,loc=0;
   cout<<"the array before sorting is "<<endl;
     for(i=0;i<n;i++)
   {
      cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n-1;i++)
    {
	 temp=a[i];loc=i;

     for(j=i+1;j<n;j++)
     {
      if (temp>a[j])
      {
       temp=a[j];
       loc=j;
       }
       }
	a[loc]=a[i];
	a[i]=temp;
	}
   cout<<"Array after sorting is "<<endl;
     for(i=0;i<n;i++)
   {
     cout<<a[i]<<" ";

    }

   }

/**********************/
   void main()
/************************/
  {
    int opt=0;
    arr a1;
    do
    {
     clrscr();
     cout<<"1. Create"<<endl;
     cout<<"2. selection Sort"<<endl;
     cout<<"3.Exit"<<endl;
     cout<<"Enter your option";
     cin>>opt;
     switch (opt)
     {
      case 1 : a1.acc();
	       break;
      case 2 : a1.selsort();
	       break;
      case 3 : cout <<"exiting.....";
	       break;

      default : cout<<"Invalid option";
		break;
      }
       getch();
	  }while (opt !=3);


  }





