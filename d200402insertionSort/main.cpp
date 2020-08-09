#include <iostream>

using namespace std;

int arr[9] = {0,77,33,44,11,88,22,66,55};
int arrN = 8;

void insertion(int a[], int n);
void printArr(int a[], int n);

int main()
{
    cout << "Hello world!" << endl;

    cout << "Array before: \n";
    printArr(arr,arrN);
    insertion(arr,arrN);


    cout << "\n\nArray after: \n";
    printArr(arr,arrN);
    return 0;
}

void insertion(int a[], int n)
{
    int temp, j;
    a[0]=0;
    for(int k = 2; k<=n; k++)
    {
        temp = a[k];
        j = k-1;

        while(temp<a[j])
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}

void printArr(int a[], int n)
{
    for(int i = 1; i<=n; i++)
    {
        cout << a[i] << ", ";
    }
}
