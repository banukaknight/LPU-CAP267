#include <iostream>

using namespace std;
void printarr(int arrr[], int sArr)
{
    cout << "\nArray now :\n";
         for(int i=0; i<sArr; i++)
    {
        cout << arrr[i] << ", ";
    }
}

int main()
{
    cout << "Hello world!" << endl;
    cout << "Enter size for array :";
    int aSize;
    cin >>  aSize;
    int arr[aSize]; // initialize custom array

    cout << "\nEnter " << aSize << " elements for the array to be sorted: \n";

    for(int i=0; i<aSize; i++) //create an array with user input
    {
        cin >> arr[i];
    }
    printarr(arr, aSize);

    for(int i=0; i<aSize-1; i++)
    {
        for(int j=0; j<aSize-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]=arr[j]+arr[j+1]; //swap without temp
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
        cout << "\nEnd of pass.\n";
        printarr(arr, aSize);
    }

    cout << "\nSize of array: " << sizeof(arr)/sizeof(int);
// not working in print function
    return 0;
}
