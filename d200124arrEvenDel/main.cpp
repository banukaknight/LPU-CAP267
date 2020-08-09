#include <iostream>

using namespace std;

//void delElement(int arr[],int size, int pos){}
void printarr(int arr[], int size){
cout << "\nArray now: \n";
for(int i=0;i<size;i++){
    cout<< arr[i]<<", ";
}
}

int main()
{
    cout << "delete odd elements" << endl;

    int LA[] = {2,5,6,1,8,11,7,6};
    int LA_s = sizeof(LA)/sizeof(LA[0]);
    int LA_d[LA_s]; //to store deleting items.
    int LA_d_s = 0;
    int j;

    printarr(LA,LA_s);

    for(int i = 0;i<=LA_s;i++){
        if(LA[i]%2!=0){
            LA_d[LA_d_s] = LA[i]; //add element to del_arr
            LA_d_s++;
            j=i;
            while(j<LA_s-1){
                LA[j]=LA[j+1];
                j++;
            }
            LA_s--;
        }
    }
    cout<<"\n\nnew:";
     printarr(LA,LA_s);
     cout<<"\nDeleted:";
     printarr(LA_d,LA_d_s);


    return 0;
}
