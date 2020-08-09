#include <iostream>

using namespace std;

struct node
{
    int info;
    struct node *link;
};

int item;
node *TOP=NULL, *ptr;
char cmnd = 'i';

void push();
void pop();
void display();

int main()
{
    cout << "Welcome to Stack using Linked List!" << endl;

    do
    {
        cout << "\nEnter: \n\ti for insert/push\td for delete/pop\n";
        cout << "\tp for print/display\te for exit prog\n";
cin >> cmnd;

        switch(cmnd)
        {
        case 'i':
            push();
            break;
        case 'd':
            pop();
            break;
        case 'p':
            display();
            break;
        case 'e':
            cout << "\nExit program";
            break;
default:
    cout << "\nWrong input";
break;
        }

    }
    while(cmnd!='e');

    return 0;
}

void push()
{
    cout << "\nInsert item to enter: ";
    cin >> item;

    struct node *ptr;
    ptr = new node;
    ptr->info = item;
    ptr->link = TOP;
    TOP = ptr;
};

void pop()
{
    if(TOP==NULL)
    {
        cout << "\nStack Underflow";
    }
    else
    {
        ptr=TOP;
        item = ptr->info;
        TOP = ptr->link;
        delete ptr;
    }
    cout << "\nDeleted item: " << item;

};

void display()
{
    ptr = TOP;
    cout << "\nStack is: ";

    if(ptr==NULL)
    {
        cout << "Empty";
    }

    while(ptr!=NULL)
    {
        cout << ptr->info << ", ";
        ptr = ptr->link;
    }

};
