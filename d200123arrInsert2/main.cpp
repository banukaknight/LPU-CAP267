#include <iostream>

using namespace std;

void printarr(int arrr[],int nn) {
        cout<< "\n Array is: \n";
        for(int i=0; i<nn;i++){
            cout << arrr[i] << ", ";
        }
     }

int main()
{


    cout << "Insert to array" << endl;

    int arr[] = {5,6,4,2,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int itm = 79;
int j = n; //initialize counter

printarr(arr,n);

while (j>=k-1){
    arr[j] = arr[j-1];
    j = j-1;
}

arr[k-1] = 79;

n = n+1;
printarr(arr,n);

    return 0;
}
