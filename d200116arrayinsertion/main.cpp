#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int arr[5]= {10,20,30,40};

    for(int i=0; i<5; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl << endl;

    int n = 4; //number of elements in array
    int pos = 3; //position to insert value

    for(int j=n; j>=pos-1; j--)
    {
        arr[j] = arr[j-1];
    }
    arr[pos-1]=50; //new element to add

    n = n+1; //new array size
//print array

    for(int i=0; i<5; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}
