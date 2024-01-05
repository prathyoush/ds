/* Program  no. 8
 Program for binary search*/
#include<iostream.h>
#include<conio.h>
#include <process.h>
class arr
 {
   private:
	int a[10];
	int n;
 public:

   void acc();
   void search();
  };


   void arr:: acc()
   {
    cout<<"How many elements";
    cin >>n;
    cout<<"Enter the elements in sorted order "<<endl;
    for(int i=0;i<n;i++)
     {
       cout<<"Element "<< i+1<< " ";
       cin>>a[i];
     }
    }

 void arr::search()
 {
   int ele,beg,end,mid,pos=-1;
   cout<<"Enter the element to be searched ";
   cin>>ele;
   beg=0;
   end=n-1;
   while (beg<=end)
   {

     mid=(beg+end)/2;
/*     cout<<"value of beg and end before comparision "<<endl;
     cout << "Beg = "<<beg<<" End  "<<end<< "mid  "<<mid<<endl;*/
     if (a[mid]==ele)

     {
       pos=mid;
       break;
      }
      else
      {
       if(a[mid]<ele)
       {
	beg=mid+1;
	}
       else
	{
	 end=mid-1;
	}
/*	     cout<<"value of beg and end after comparision "<<endl;
     cout << "Beg = "<<beg<<" End  "<<end<< "mid  "<<mid<<endl;
  */
      }
      };
       if (pos>=0)
	   cout<< " Element found at position "<<pos+1;
       else
	  cout<<" Element not found ";
      }
   void main()

  {
    int opt=0;
    arr a1;
    do
    {
     clrscr();
     cout<<"1. Create"<<endl;
     cout<<"2. search"<<endl;
     cout<<"3.Exit"<<endl;
     cout<<"Enter your option ";
     cin>>opt;
     switch (opt)
     {
      case 1 : a1.acc();
	       break;
      case 2 : a1.search();
	       break;
      case 3 : cout <<"exiting.....";
	       break;

      default : cout<<"Invalid option";
		break;
      }
       getch();
	  }while (opt !=3);


  }





