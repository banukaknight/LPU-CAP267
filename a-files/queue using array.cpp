#include<iostream>
#define N 5
using namespace std;
void enqueue(int);
void dequeue();
void display();
int rear=0,frontt=0,arr[10];
int main()
{
    int x,item;
    char ch;
    do
    {
         cout<<endl<<"1.enqueue"<<endl<<"2.dequeue"<<endl<<"3.display"<<endl;
         cin>>x;
        switch(x)
        {
          case 1:cout<<"enter the element"<<endl;
          cin>>item;
          enqueue(item);
          break;
          case 2:cout<<"element deleted"<<endl;
          dequeue();
          break;
          case 3:cout<<"elements are"<<endl;
          display();
          break;
        }
    cout<<"y if you want to enter again"<<endl;
    cin>>ch;
    }while(ch=='y');
}
void enqueue(int item)
{
   if((frontt==1 && rear==N) || (frontt==rear+1))
   {
        cout<<"overflow"<<endl;
   }
   if(frontt==0)
   {
       frontt=1;
       rear=1;
   }
   else if(rear==N)
    rear=1;
   else
    rear=rear+1;

arr[rear]=item;
return;
}

void dequeue()
{
    int item;
   if(frontt==0)
    cout<<"underflow"<<endl;
   item=arr[frontt];
   if(frontt==rear)
   {
      frontt=0;
      rear=0;
   }
   else if(frontt==N)
    frontt=1;
   else
    frontt=frontt+1;
   return;
}

void display()
{
    int i;
    if(frontt<=rear)
    {
        for(i=frontt;i<=rear;i++)
            cout<<arr[i]<<endl;
    }
    else
    {
        for(i=frontt;i<=N;i++)
            cout<<arr[i]<<endl;
        for(i=1;i<=rear;i++)
            cout<<arr[i]<<endl;
    }
}
