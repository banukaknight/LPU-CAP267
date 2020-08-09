#include<iostream>
#include<conio.h>
using namespace std;

typedef struct node
{
    int info;
    struct node *left,*right;
} node;

node *root=NULL,*paptr=NULL,*chptr=root,*ptr,*temp;
void insertion(int item);
void preorder(node *ptr);
void postorder(node *ptr);
void inorder(node *ptr);
node *searchh(int item);
int choice,val;
char ch;
int main()
{
    do
    {
        cout<<"1. To insert \n2. To traverse in preorder \n3. To traverse in postorder\n4. To traverse in inorder\n5.Searching"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            cout<<"Enter value to insert"<<endl;
            cin>>val;
            insertion(val);
        }
        break;
        case 2 :
        {
            preorder(root);
        }
        break;
        case 3 :
        {
            postorder(root);
        }
        break;
        case 4 :
        {
            inorder(root);
        }
        break;
        case 5 :
        {
            cout<<"enter item to search"<<endl;
            cin>>val;
            temp=searchh(val);
            if(temp==NULL)
                cout<<"element not present"<<endl;
            else
                cout<<"element present at :"<<&temp<<endl;
            break;
        }
        }
        cout<<"Press Y to enter again" <<endl;
        cin>>ch;
    }
    while(ch=='y');
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
        else
        {
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
    }
}




void postorder(node *ptr)
{
    if(ptr!=NULL)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        cout<<ptr->info<<endl;
    }
}




void inorder(node *ptr)
{
    if(ptr!=NULL)
    {
        inorder(ptr->left);
        cout<<ptr->info<<endl;
        inorder(ptr->right);
    }
}


node *searchh(int item)
{
    paptr=NULL;
    chptr=root;
    while(chptr!=NULL)
    {
        if(chptr->info==item)
            return chptr;
        paptr=chptr;
        if(item<chptr->info)
            chptr=chptr->left;
        else
            chptr=chptr->right;
    }
    return NULL;
}

