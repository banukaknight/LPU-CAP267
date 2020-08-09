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
    cout << "Bubble Sort on Linear array. Banuka" << endl;

    int LA[] = {7,98,1,2,45,6,2,1,73,99};
//  int LA[] = {7,3,9,5,6,9,8};
    int n = sizeof(LA)/sizeof(LA[0]);
   int temp;

    printarr(LA,n);
    cout << "\nStart sort\n";

    for(int i=0; i<n-1; i++) // run main look n-1 times
    {
        temp = 0;
        for(int j=0; j<(n-1-i); j++) // no need for extra counter
        {
            if(LA[j]>LA[j+1]) // check if in ascending order. if not swap.
            {
                temp = LA[j];
                LA[j] = LA[j+1];
                LA[j+1] = temp;
            }
        }
        printarr(LA,n); //list after each pass.
        if (temp == 0) //remove this _if_ for basic bubble-sort algorithm
        {
           break; //if list is sorted no swapping would be done on this pass. thus break out of loops.
        }
    }
    cout << "\n\nSorted list: \n";
    printarr(LA,n); //function for printing list

    return 0;
}
