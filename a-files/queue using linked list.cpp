#include<iostream>
using namespace std;
typedef struct node
{
    node *link;
    int info;
}node;
node *ptr, *loc=NULL,*start=NULL;
void enqueue(int);
void dequeue();
void traverse();
int main()
{
    int x,item;
    char ch;
    do
    {
        cout<<endl<<"1.Enqueue"<<endl<<"2.Dequeue"<<endl<<"3.Traversing"<<endl;
        cin>>x;
        switch(x)
        {
            case 1: cout<<"insert an element"<<endl;
            cin>>item;
            enqueue(item);
            break;
            case 2: cout<<"Dequeue successful"<<endl;
            dequeue();
            break;
            case 3: cout<<"Elements are"<<endl;
            traverse();
            break;
        }
        cout<<"Y if you want to enter again"<<endl;
        cin>>ch;
    }while(ch=='y');
}
void enqueue(int item)
{

    ptr=new node;
    ptr->info=item;
    ptr->link=NULL;
    if(start==NULL)
    {
         start=ptr;
    }

    else
    {
        loc=start;
        while(loc->link!=NULL)
        {
            loc=loc->link;
        }
        loc->link=ptr;
    }
    return;
}

void dequeue()
{
    ptr=start;
    start=start->link;
    delete ptr;
}

void traverse()
{
    ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->info<<endl;
        ptr=ptr->link;
    }
}
