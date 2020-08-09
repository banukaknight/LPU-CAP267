#include <iostream>

using namespace std;

struct node
{
    int info;
    struct node *link;
};

int item;
node *FRONT=NULL, *REAR=NULL, *ptr;
char cmnd = 'e';

void enqueue();
void dequeue();
void display();

int main()
{
    cout << "Welcome to Queue based on Linked List!" << endl;

    do
    {
        cout << "\nEnter: \n\ti for insert/enqueue\td for delete/dequeue\n";
        cout << "\tp for print/display\te for exit prog\n";
        cin >> cmnd;

        switch(cmnd)
        {
        case 'i':
            enqueue();
            break;
        case 'd':
            dequeue();
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

void enqueue()
{
    cout << "\nEnter element to insert: ";
    cin>> item;

    struct node *ptr;
    ptr = new node;
    ptr->info = item;
    ptr->link=NULL; //insert at end

    if(REAR==NULL)
    {
        // initially empty queue
        FRONT=REAR=ptr;
    }
    else
    {
        REAR->link=ptr;
        REAR=ptr;
    }

}; //end enqueue

void dequeue()
{
    if(FRONT==NULL)
    {
        cout<< "\nUnderflow of queue";
    }
    else
    {
        ptr=FRONT;
        FRONT = FRONT->link;

        if(FRONT==NULL)  //queue only had 1 element in beg
        {
            REAR=NULL;
        }

        delete ptr;
    }
};

void display()
{
    cout << "\nQueue is: ";
    ptr=FRONT;
    if(ptr==NULL)
    {
        cout << "Empty";
    }

    while(ptr!=NULL)
    {
        cout << ptr->info << ", ";
        ptr=ptr->link;
    }

};

