/*************************************************************
*  Program No. 27
   To implement binary tree creation and traversal
**************************************************************/

#include<iostream.h>
#include<conio.h>
#include <stdio.h>
class node
{
	int info;
	node *left,*right;
	public:
		node *create();
		void btree();
		void setleft();
		void setright();
		void search(node *);
		void preorder(node *p);
		void inorder(node *p);
		void postorder(node *p);
  }*p=NULL, *ptr=NULL,*root=NULL;
 int  data; int flag=0;

void node::btree()
{

   char ans;
   int k;
   clrscr();
   cout<<"Binary tree\n";
   cout<<"Making root\n";
   ptr=create();
   root=ptr;
   cout<<"\nDo you want a Left child";
   fflush(stdin);
   cin>>ans;
   if (ans=='y'||ans=='Y')
   setleft();
   cout<<"\nDo you want a Right child";
   fflush(stdin);
   cin>>ans;
   if (ans=='y'||ans=='Y')
   setright();

}

node *node::create()
{
	node *nptr;
	int item;

	nptr=new node;
	if(nptr==NULL)
	{
	cout<<"\n Overflow";
	}
	else
	{
	  cout<<"\n Enter the value to be inserted:";
	  cin>>item;
	  nptr->info=item;
	  nptr->left=NULL;
	  nptr->right=NULL;
	}
	return(nptr);
}

 void node :: setleft()
 {
  if (ptr==NULL)
  cout<<" Invalid insrtion.... ";
  else
   if(ptr->left!=NULL)
    {
     cout<<"\nLeft child already exist..";
     cout<<" \nThe value is  :"<<ptr->left->info;
     }
     else
     {
      p=create();
      ptr->left=p;
      }
     }

 void node::setright()
 {
   if (ptr==NULL)
   cout<<"Invalid insertion...";
   else
   if(ptr->right!=NULL)
   {
   cout<<"\nRight child exists...\nThe value is "<<ptr->right->info;
   }
   else
   {
    p=create();
    ptr->right=p;
    }

  }


 void node ::preorder(node *p)
 {
  if (p!=NULL)
   {
     cout<<p->info<<" ";
     preorder(p->left);
     preorder(p->right);
     }

 }


 void node::postorder(node *p)
  {
   if(p!=NULL)
   {
     postorder(p->left);
     postorder(p->right);
     cout<<p->info<<" ";
    }
   }


 void node::inorder(node *p)
  {
   if(p!=NULL)
   {
     inorder(p->left);
     cout<<p->info<<" ";
     inorder(p->right);
    }
   }


   void node::search(node *i)
   {
    if(i!=NULL)
       {
       if(i->info==data)
       {
	ptr=i;
	flag=1;
	}
	search(i->left);
	search(i->right);

    }

    }



 void main()
 {
   node ne;
   int ch;
   char ans;
   do
   {
   clrscr();
   cout<<"1. Create a binary tree\n ";
   cout<<"2. Add child\n";
   cout<<"3. Preorder Traversal\n";
   cout<<"4. Inorder traversal\n";
   cout<<"5. Post Order Traversal\n";
   cout<<"6. Exit\n";
   cout<<"enter the option" ;
   cin>>ch;
   switch(ch)
      {
    case 1 : ne.btree();
	     break;
    case 2 :
	      cout<<"Enter the parent node";
	      cin>>data;
	      ne.search(root);
	      if (flag==1)
	      {
	       cout<<"\nDo you want a Left child";
	       cin>>ans;
	       if (ans=='y'||ans=='Y')
		ne.setleft();
	       cout<<"\nDo you want a Right child";
	       cin>>ans;
	       if (ans=='y'||ans=='Y')
		ne.setright();
	       flag=0;
	       }
	       else
	       cout<<"Node does not exist..."  ;
	       break;
     case 3  :
	       cout<<"The Pre order Traversal is ...\n";
	       ne.preorder(root);
	       break;
     case 4  : cout<<"The Inordeer Traversal is ...\n";
	       ne.inorder(root);
	       break;
     case 5  : cout<<"The Postorer  Traversal is ...\n";
	       ne.postorder(root);
	       break;

     case 6  : break;
     default :
	       cout<<"Invalid input ";
	       break;
      }
      cout<<"\n\nPres enter key to continue... " ;
      getch();
    }while (ch!=6);



   }