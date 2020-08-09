#include<iostream>
#include<conio.h>
using namespace std;
typedef struct node
{
int info;
struct node *left,*right;
}node;

node *root=NULL,*paptr=NULL,*chptr=root,*ptr;
void insertion(int item);
void preorder(node *ptr);
void postorder(node *ptr);
void inorder(node *ptr);
int choice,val; char ch;
int main()
{abc:
    do{
            cout<<"Enter your choice \n1. To insert \n2. To print in preorder \n3. To print in postorder\n4. To print in inorder"<<endl;
    cin>>choice;
      switch(choice)
      {
          case 1 : { cout<<"Enter value to insert"<<endl;
          cin>>val;
              insertion(val);          }
          break;
          case 2 : { preorder(root);}
          break;
           case 3 : { postorder(root);}
          break;
           case 4 : { inorder(root);}
          break;
          default : {cout<<"Wrong choice"<<endl;
          goto abc;}
          break;
      }
      cout<<"Press Y to quit or any other key to continue" <<endl;
      ch=getch();
    }while(ch!='Y' || ch!='y');
}

void insertion(int item)
{


ptr = new node;
ptr->left=NULL;
    ptr->right=NULL;
    ptr->info=item;
if(root==NULL)
{
    root=ptr;
    return ;

}
paptr=NULL;
chptr=root;

while(chptr!=NULL)
{
    paptr=chptr;
    if(item<chptr->info)
    {
        chptr=chptr->left;
    }
    else{
        chptr=chptr->right;
    }
}
if(item<paptr->info)
{
    paptr->left=ptr;
}
else
{
    paptr->right=ptr;
}

}


void preorder(node *ptr)
{
if(ptr!=NULL)
{
    cout<<ptr->info<<endl;
    preorder(ptr->left);
    preorder(ptr->right);
}}
void postorder(node *ptr)
{
if(ptr!=NULL)
{

    postorder(ptr->left);
    postorder(ptr->right);
     cout<<ptr->info<<endl;
}}
void inorder(node *ptr)
{
if(ptr!=NULL)
{

   inorder(ptr->left);
     cout<<ptr->info<<endl;
    inorder(ptr->right);
}
}

