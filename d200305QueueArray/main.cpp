#include <iostream>
#include<limits>
// By fb.com/theBKrox

using namespace std;

#define QMAX 10
//max size of queue - marco | pre-processor value
int arrQueue[QMAX];
int frnt=-1;
int rear=-1;
int item; //for insertion & deletion purpose

char comnd = 'r';
void enqueue(int);
void printQue();
void dequeue();

int main()
{
    cout << "Hello & Welcome to Queue with Array by BK!" << endl;
    cout << "This QUEUE has a maximum size of 10 elements set as #QMAX" << endl;


    while(comnd!='c')
    {
        cout << "\n\n.........Enter:\n\t e to enqueue\t d to dequeue\n\t p to print\t c to close prog: ";
        cin >> comnd;

        switch(comnd)
        {
        case 'e':
            cout << "\nEnter element to enqueue: ";

            cin >> item;
            if(cin.fail())
            {
                cin.clear(); //ignore no-integer values
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout << "\n Invalid Input.\n";
                break;
            }
            enqueue(item);
            printQue(); //print
            break;

        case 'd':
            dequeue();
            printQue(); //print
            break;

        case 'p':
            printQue();
            break;

        case 'c':
            cout << "\nExit program";
            break;

        default:
            cout << "\n Invalid Input.\n";
            break;

        }//end of switch

    }//while loop

    return 0;
}//end main

void enqueue(int item)
{
    if((frnt==0&&rear==QMAX-1)||(frnt==rear+1))
    {
        cout << "overflow of queue ";
        return;
    }

    if(frnt==-1)
    {
        frnt=0;
        rear=0;
        //cout << " empty at first\n";
    }
    else if(rear==QMAX-1)
    {
        rear=0;
    }
    else
    {
        rear=rear+1;
    }//end if

    arrQueue[rear]=item;

    return;
}; //enqueue func

void dequeue()
{
    cout << endl;
    if(frnt==-1)
    {
        cout << "Underflow of queue. cannot delete.";

    }
    else if(frnt==rear)
    {
        //only 1 element in queue
        item = arrQueue[frnt]; //hold for backup reasons
        arrQueue[frnt] = 0;
        frnt=rear=-1; //Set front & rear to null
        cout << item << " deleted.\n";

    }
    else if(frnt==QMAX-1)
    {
        //front is last position of arr
        item = arrQueue[frnt]; //hold for backup reasons
        arrQueue[frnt] = 0;
        frnt = 0;
        cout << item << " deleted.\n";

    }
    else
    {
        item = arrQueue[frnt]; //hold for backup reasons
        arrQueue[frnt] = 0;
        frnt=frnt+1;
        cout << item << " deleted.\n";
    }

}; //dequeue func

void printQue()
{
    cout << "\nQueue is:  ";
    if(frnt==-1)
    {
        cout << "empty ";

    }
    else if(frnt<=rear)
    {
        for(int i=frnt; i<=rear; i++)
        {
            cout << arrQueue[i]<< ", ";
        }//data elements

        //--------------
        cout << "\nQUEUE's Physical Representation in Array: \n";
        for(int i=0; i<frnt; i++)
        {
            cout << "[  ]";
        }//empty spaces
        for(int i=frnt; i<=rear; i++)
        {
            cout << "[ " <<arrQueue[i]<< " ]";
        }//data elements
        for(int i=rear+1; i<QMAX; i++)
        {
            cout << "[  ]";
        }//empty spaces

    }
    else
    {
        for(int i=frnt; i<QMAX; i++)
        {
            cout << arrQueue[i] << ", ";
        }
        for(int i=0; i<=rear; i++)
        {
            cout << arrQueue[i] << ", ";
        }

        //----------------
        cout << "\nQUEUE's Physical Representation in Array: \n";
        for(int i=0; i<=rear; i++)
        {
            cout << "[ " << arrQueue[i] << " ]";
        }
                for(int i=rear+1; i<frnt; i++)
        {
            cout << "[  ]";
        }//empty spaces
        for(int i=frnt; i<QMAX; i++)
        {
            cout << "[ " <<arrQueue[i] << "] ";
        }
    }
}; //print func
