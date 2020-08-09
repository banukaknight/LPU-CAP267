#include <iostream>
// bk
using namespace std;

int main()
{
    cout << "LA Binary search on sorted list" << endl;

    //int LA[] = {2};
     int LA[] = {1,2,3,4,5,7,12,17,19,23,26};
    int n = sizeof(LA)/sizeof(LA[0]);
    int item = 2;

    int beg = 0; //LB
    int end = n-1; //UB
    int mid = (beg+end)/2;

    while ((beg <= end) && (LA[mid] != item))
    {
        if(item>LA[mid])
        {
            beg = mid+1;
        }
        else
        {
            end = mid-1;
        }
        mid = (beg+end)/2;
    }

    if(LA[mid] == item)
    {
        cout << "\nItem found at index :" << mid << " of array\n";
        cout << "It is the " << mid+1 << "th element.\n";
    }
    else
    {
        cout << "\nItem not found in array\n";
    }

    return 0;
    }
