#include <iostream>

using namespace std;



int main()
{
    cout << "Find second smallest item in array" << endl;

    int sml1;
    int arr[] = {88,6,9,23,54,7,5,75,32};
    int asize = 9;
    int loc = 0;
    int i = 0;

    sml1 = 32700;
    for(i=0; i<asize; i++)
    {
        if(arr[i]<sml1)
        {
            sml1 = arr[i];
            loc = i;
        }
    }
    cout << "\n\n1st smallest is: " << sml1 << " found at loc: " << loc;

    arr[loc] = 32700;

    sml1 = 32700;
    for(i=0; i<asize; i++)
    {
        if(arr[i]<sml1)
        {
            sml1 = arr[i];
            loc = i;
        }
    }

    cout << "\n\n2nd smallest is: " << sml1 << " found at loc: " << loc;

    return 0;
}
