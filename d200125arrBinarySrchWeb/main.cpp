#include <iostream>
using namespace std;
// web binary search on sorted list
int main()
{
    int loc = -1, num, first, last, middle;

   int arr[] = {2,4,6,9,12,14,15,18,22,45};
    //  int arr[] = {3,4,8};
    int count = sizeof(arr)/sizeof(arr[0]);

    cout << "print array: \n";
    for(int j=0; j<count; j++)
    {
        cout << arr[j] << ", ";
    }

    cout<<"\n\nEnter the number that you want to search:";
    cin>>num;
    first = 0;
    last = count-1;
    middle = (first+last)/2;
    while (first <= last)
    {
        if(arr[middle] == num)
        {
            loc = middle+1;
            cout<<num<<" found in the array at the location "<<loc<<"\n";
            break; //if this is true.. immediately break out of while loop
        }
        else if(arr[middle] < num)
        {
            first = middle + 1;
        }
        else
        {
            last = middle - 1;
        }
        middle = (first + last)/2;
    }

    if(loc == -1)
    {
        cout<<"\n" << num<<" not found in the array";
    }
    return 0;
}
