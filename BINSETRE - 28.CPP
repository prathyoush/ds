/******************************************
* Program No. 28
  To implement the creation of Binary search tree
*******************************************/
#include<iostream.h>
#include<conio.h>
class node
{
	int info;
	node *left,*right;
	public:

		node *create();
		void insert();
		void preorder(node *p);
		void inorder(node *p);
		void postorder(node *p);
}*x, *ptr=NULL,*root=NULL;


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

 void node::insert()
 {
  node ne;
  int flag;
  ptr=ne.create();
  if (root==NULL)
  {
  root=ptr;
  cout<<"root created";
  }
  else
  {
  x=root;
  flag=1;

  while(flag==1)
  {
  if(ptr->info<x->info)
  {
   if(x->left!=NULL)
   {
   x=x->left;
   continue;
   }
   else
   {
   x->left=ptr;
   cout<<"Node inserted as left child of "<<x->info;
   flag=0;
   }
    }
   else
   {
   if(x->right!=NULL)
   {
   x=x->right;
   continue;

   }
  else
  {
  x->right=ptr;
  cout<<"Node inserted as right child of "<<x->info;
  flag=0;
  }
  }


  }
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




 void main()
 {
  node ne;
  char ans;
  int ch,k;
  do
  {
   clrscr();
   cout<<"BInary Searcch Tree\n";
   clrscr();
   cout<<"1. Add Node\n";
   cout<<"2. Preorder Traversal\n";
   cout<<"3. Inorder traversal\n";
   cout<<"4. Post Order Traversal\n";
   cout<<"5. Exit\n";
   cout<<"enter the option" ;
   cin>>ch;
   switch(ch)
      {
    case 1:
	    ne.insert();
		     break;
     case 2: cout<<"The Pre order Traversal is ...\n";
	     ne.preorder(root);
	     break;
     case 3:cout<<"The Inordeer Traversal is ...\n";
	     ne.inorder(root);
	     break;
     case 4: cout<<"The Postorer  Traversal is ...\n";
	      ne.postorder(root);
	     break;

     case 5:
	       break;
     default : cout<<"Invalid option ";

      }
      cout<<"\n\nPres enter key to continue... " ;
      getch();
    }while (ch!=5);



   }