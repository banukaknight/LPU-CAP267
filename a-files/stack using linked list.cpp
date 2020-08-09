#include<iostream>
using namespace std;
typedef struct node
{
    int info;
    struct node *link;
}node;
node *ptr,*top=NULL;
void push(int);
void pop();
void traverse();
int main()
{
    int x,item;
    char ch;
    do
    {
     cout<<endl<<"1.push"<<endl<<"2.pop"<<endl<<"3.traverse"<<endl;
    cin>>x;
    switch(x)
    {
        case 1:cout<<"enter the element"<<endl;
        cin>>item;
        push(item);
        break;
        case 2:
        pop();
        break;
        case 3:
        traverse();
        break;
    }
    cout<<"y to insert again"<<endl;
    cin>>ch;
    }while(ch=='y');
}
void push(int item)
{
    ptr=new node;
    ptr->info=item;
    ptr->link=top;
    top=ptr;
    return;
}
void pop()
{
    if(top==NULL)
        cout<<"Stack is empty"<<endl;
    else
    {
        cout<<"element popped"<<endl;
        ptr=top;
        top=top->link;
    }
    return;
}
void traverse()
{
    ptr=top;
    if(top==NULL)
        cout<<"stack is empty"<<endl;
    else
    {
        cout<<"elements are"<<endl;
        while(ptr!=NULL)
        {
            cout<<ptr->info<<endl;
            ptr=ptr->link;
        }
    }
}
