/* Program no.9
 Program for sorting array elements using bubble sort */
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
   void bubsort();
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
 void arr::bubsort()
/**********************/
 {
   int i,j, temp;
   cout<<"the array before sorting is "<<endl;
     for(i=0;i<n;i++)
   {
    cout<<a[i]<<" ";

    }
   for (i=0;i<n;i++)
   for (j=0;j<n-i-1;j++)
   if(a[j]>a[j+1])
    {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
      }

   cout<<"\nThe array after sorting is"<<endl;
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
     cout<<"2. Bubble Sort"<<endl;
     cout<<"3.Exit"<<endl;
     cout<<"Enter your option";
     cin>>opt;
     switch (opt)
     {
      case 1 : a1.acc();
	       break;
      case 2 : a1.bubsort();
	       break;
      case 3 : cout <<"exiting.....";
	       break;

      default : cout<<"Invalid option";
		break;
      }
       getch();
	  }while (opt !=3);


  }





