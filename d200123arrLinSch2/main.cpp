#include <iostream>

using namespace std;

void printarr(int arrr[],int nn)
{
    cout<< "\n Array is: \n";
    for(int i=0; i<nn; i++)
    {
        cout << arrr[i] << ", ";
    }
}
int main()
{
    cout << "Linear search" << endl;

    int LA[] = {5,7,8,2,8,9,11,2,45};
    int n = sizeof(LA)/sizeof(LA[0]);
    int loc =-1;
    int item = 2;
    int k =0;
    printarr(LA,n);
cout << "\nlook for item: " << item;
    while(loc==-1 && k<=n-1)
    {
        if (LA[k] == item)
        {
            loc=k;
        }
        k=k+1;
    }
    if(loc==-1)
    {
        cout<< "\nItem not found";
    }
    else
    {
cout<< "\nItem found at index " << loc << "at "<< loc+1;
    }

    return 0;
}
