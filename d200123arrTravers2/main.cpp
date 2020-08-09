#include <iostream>

using namespace std;

int main()
{
    cout << "Traverse array" << endl;

    int lb, ub, k, num;

    cout << "Enter size for array: ";
    cin >> num;
    int arr[num];
    ub = num-1;
    lb = 0;
    cout << "\nEnter elements for array: ";
    for(int i=lb; i<=ub; i++)
    {
        cin >> arr[i];
    }

    cout << "\nArray elements are: \n";
    for(int i=lb; i<=ub; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}
