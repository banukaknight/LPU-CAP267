#include <iostream>

using namespace std;

struct node
{
    int info;
    struct node *link;
};

int main()
{
    cout << "Hello world!" << endl;

    int item, leng;
    node *ptr, *START;

    cout << "Enter Total nodes :";
    cin >> leng;

    ptr = new node;
    START = ptr;

    for(int i=1; i<=leng; i++)
    {
        cout << "Enter info of node : " << i << " of list: ";
        cin >> item;
        ptr ->info=item;

        if(i==leng)
        {
            ptr->link=NULL;
        }
        else
        {
            ptr->link = new node;
            ptr = ptr->link;
        }
    }

    ptr=START;
    while(ptr!=NULL)
    {
        cout << ptr ->info << ", ";
        ptr = ptr ->link;
    }

    return 0;
}
