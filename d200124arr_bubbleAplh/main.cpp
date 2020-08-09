#include <iostream>

using namespace std;

int main()
{
    cout << "Sort alphabetically based on first character" << endl;

    string ALst[] = {"John","Banu","Ganesh","Arnab","Anup"};
    int n = sizeof(ALst)/sizeof(ALst[0]);

    string temp; //for swapping

    cout << "\nArray before: \n";
    for(int i=0; i<n; i++)
    {
        cout << ALst[i] << ", ";
    }


    for (int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if((ALst[j])[0] >(ALst[j+1])[0])
            {
                temp = ALst[j];
                ALst[j] = ALst[j+1];
                ALst[j+1] = temp;
            }

        }
    }
    cout << "\n\nArray after sort: \n";
    for(int i=0; i<n; i++)
    {
        cout << ALst[i] << ", ";
    }
cout << "\n\n";
    return 0;
}
