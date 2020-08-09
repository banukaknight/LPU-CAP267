#include<iostream>
using namespace std;
#define N 6
void push(int);
void pop();
void display();
int top,arr[N];
int main()
{
    int x,item;
    char ch;
    do
    {
     cout<<endl<<"1.push"<<endl<<"2.pop"<<endl<<"3.display"<<endl;
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
        display();
        break;
    }
    cout<<"y to insert again"<<endl;
    cin>>ch;
    }while(ch=='y');
}
void push(int item)
{
    if(top==N)
        cout<<"stack is full"<<endl;
    else
    {
        top=top+1;
        arr[top]=item;
        return;
    }
}
void pop()
{
    if(top==0)
        cout<<"Stack is empty"<<endl;
    else
    {
        cout<<"element popped"<<endl;
        arr[top--];
    }
    return;
}
void display()
{
    if(top==0)
        cout<<"stack is empty"<<endl;
    else
    {
        cout<<"elements are"<<endl;
        for(int i=top;i>=1;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
