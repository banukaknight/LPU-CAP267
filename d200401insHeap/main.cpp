#include <iostream> //banuka

using namespace std;

int ptr = 0, par = 0, asize=0;

void insheap(int a[],int n,int item);

int main()
{
    cout << "Hello world!" << endl;

    int arr[11]; // hold max 10 values 1-10 indexes

    insheap(arr,asize,44);
    insheap(arr,asize,30);
    insheap(arr,asize,50);
    insheap(arr,asize,22);
    insheap(arr,asize,60);
    insheap(arr,asize,55);
    insheap(arr,asize,77);
    insheap(arr,asize,55);

    for (int i = 1; i<=asize; i++)
    {
        cout << arr[i] << ", ";
    }
    return 0;
}


void insheap(int a[],int n,int item)
{

    asize=n+1; //increase array size by 1
    ptr=asize; //set pointer to last leaf position
    while(ptr>1)
    {
        par=ptr/2;
        if(item<=a[par])
        {
            a[ptr]=item;
            return;
        }

        a[ptr]=a[par];
        ptr=par;
    }
    a[1]=item; //insert item at root position
    return;
}
