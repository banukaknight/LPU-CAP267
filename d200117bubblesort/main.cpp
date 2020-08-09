#include <iostream>
using namespace std;

void printarr(int arrr[])
{
    for(int x=0; x<5; x++)
    {
        cout << arrr[x] << ", ";
    }

}
int main()
{
    cout << "Hello Bubble Sort!" << endl;

    int arr[5] = {5,2,7,3,1};

    cout << "unsorted array :\n";
    printarr(arr);


    cout << "-------------------\n";
    int n=5, i=1, j=0, temp=0;

    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
            // while(j<=n-1)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            cout << "\nj is: " << j << endl;
            printarr(arr);

        }
        cout << "/n----end of pass/n";

    }

    cout << "-------------------\n";
    cout << "\n sorted array :\n";
    printarr(arr);
    return 0;
}
