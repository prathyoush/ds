/*  Program No. 12
    Program for quick sort*/
#include<iostream.h>
#include<conio.h>
class QuickSort

 {
    public:
	int limit;
	int arr[10];
	void get();
	void sort(int [], int, int);
	void partition(int [],int ,int,int&);
	void display();
};
void QuickSort::get()

 {
    cout<<"How many elements (Maximum 10) ? ";
    cin>>limit;
    cout<<"Enter the  array elements to sort:\n ";
    for(int i=0;i<limit;i++)
    {
	cin>>arr[i];
    }
}
void QuickSort::sort(int x[], int lb, int ub)
  {
    int j;
    if(lb >= ub)
    return;
    partition(x,lb,ub,j);
    sort(x,lb,j-1);
    sort(x,j+1,ub);
}
void QuickSort::partition(int x[],int lb,int ub,int &pj)

 {
    int a, down, temp, up;
    a = x[lb];
    up = ub;
    down = lb;
    while(down < up)
    {
       while(x[down] <= a)
	 down++;
	while(x[up]  > a)
	  up--;
	if(down < up)
	{
	  temp = x[down];
	  x[down] = x[up];
	  x[up] = temp;
	}
    }
    x[lb] = x[up];
    x[up] = a;
    pj = up;

}
void QuickSort::display()
{
    for(int i = 0 ; i < limit; i++)
    {
	cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void main()

 {
    clrscr();
    QuickSort QS;
    QS.get();
    cout<<"The array before sorting is \n";
    QS.display();
    QS.sort(QS.arr,0,QS.limit-1);
    cout<<"The array after sorting is \n";
    QS.display();
    getch();
}