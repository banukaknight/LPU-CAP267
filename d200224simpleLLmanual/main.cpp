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
    node *START, *ptr;

    ptr = new node;

    START = ptr;

    ptr->info = 22;
    ptr->link = new node;

    ptr = ptr->link;
    ptr->info=12;
    ptr->link = new node;

    ptr = ptr->link;
    ptr->info=82;
    ptr->link=NULL;



    { //print (traverese)
        ptr = START;
        if(ptr==NULL)
        {
            cout << "Empty DLL";
        }

        while(ptr!=NULL)
        {
            cout << ptr->info << ", ";
            ptr=ptr->link;
        }
    };



    return 0;
}
