#include<iostream>
using namespace std;
typedef struct node
{
    node *link;
    int info;
}node;
node *ptr, *loc=NULL,*start=NULL;
void insert_beg(int);
void traverse();
int main()
{
    int x,item;
    char ch;
    do
    {
        cout<<endl<<"1.Insert into linked list"<<endl<<"2.Traversing"<<endl;
        cin>>x;
        switch(x)
        {
            case 1: cout<<"insert an element"<<endl;
            cin>>item;
            insert_beg(item);
            break;
            case 2: cout<<"Elements are"<<endl;
            traverse();
            break;
        }
        cout<<"Y if you want to enter again"<<endl;
        cin>>ch;
    }while(ch=='y');
}
void insert_beg(int item)
{

    ptr=new node;
    ptr->info=item;
    if(start==NULL)
    {
         start=ptr;
         ptr->link=start;
    }

    else
    {
        loc=start;
        while(loc->link!=start)
        {
            loc=loc->link;
        }
        loc->link=ptr;
        ptr->link=start;
        start=ptr;
    }
    return;
}
void traverse()
{
    ptr=start;
    while(ptr->link!=start)
    {
        cout<<ptr->info<<endl;
        ptr=ptr->link;
    }
    cout<<ptr->info<<endl;
}
