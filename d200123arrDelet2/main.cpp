#include <iostream>

using namespace std;

void printLA(int arrr[],int nn) {
        cout<< "\n Array is: \n";
        for(int i=0; i<nn;i++){
            cout << arrr[i] << ", ";
        }
     }
int main()
{
    cout << "Delete frm arr" << endl;

    int LA[] = {3,4,6,8,2,5};
    int n = sizeof(LA)/sizeof(LA[0]);
    int k = 4;
    int karr = k-1;
    int item;
int j = karr;
    printLA(LA,n);

item = LA[karr];
while(j<=n-1){
    LA[j] = LA[j+1];
    j = j+1;
}
n = n-1;
     printLA(LA,n);
    return 0;
}
