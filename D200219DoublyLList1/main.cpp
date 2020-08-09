#include <iostream>

using namespace std;

struct node
{
    int info;
    struct node *nxt;
    struct node *pre; // added to hold prev node address
};

int main()
{
    cout << "Hello world!" << endl;

    int item, leng;
    node *ptr, *START, *ENDD, *temp;
// endd & temp nodes added

    cout << "Enter Total nodes :";
    cin >> leng;

    ptr = new node;
    START = ptr;
    temp=ptr; //to hold previous node

    for(int i=1; i<=leng; i++)
    {
        cout << "Enter info of node : " << i << " of list: ";
        cin >> item;
        ptr ->info=item;

        if(i==leng)
        {
            ptr->nxt=NULL;
        }
        else
        {
            ptr->nxt = new node;
            temp = ptr;
            //hold address of this node before moving to new node
            ptr = ptr->nxt;
        }
        ptr->pre = temp; //end of each iteration set last nodes address to pre
    }
    ENDD = ptr; //set END address as last node


    cout << "\n\nTraverese from the Front";
    ptr=START;
    while(ptr!=NULL)
    {
        cout << ptr ->info << ", ";
        ptr = ptr ->nxt;
    }

    cout << "\n\nTraverese from the end";
    ptr=ENDD;
    while(ptr!=NULL)
    {
        cout << ptr ->info << ", ";
        ptr = ptr ->pre;
    }

    return 0;
}
