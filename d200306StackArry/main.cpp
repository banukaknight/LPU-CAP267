#include <iostream>
#include<limits>
// By fb.com/theBKrox

using namespace std;

#define MAXSTK 10
int arrStck[MAXSTK];
int item; //for push & pop
int TOP=-1;
char cmnd = 'r';

void pop();
void push(int);
void print();

int main()
{
    cout << "Hello & Welcome to STACK with array by BK!" << endl;
    cout << "This stack has a maximum size of 10 elements set as #MAXSTK" << endl;

    while(cmnd!='c')
    {
        cout << "\n\n.........Enter:\n\t i to PUSH(insert)\t d to POP(delete)\n\t p to print\t\t c to close prog: ";
        cin >> cmnd;

        switch(cmnd)
        {
        case 'i':
            cout << "\nEnter element to push(insert): ";
            cin >> item;

            if(cin.fail())
            {
                cin.clear(); //ignore no-integer values
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout << "\n Invalid Input.\n";
                break;
            }

            push(item);
            print();
            break;

        case 'd':
            pop();
            print();
            break;

        case 'p':
            print();
            break;

        case 'c':
            cout << "\nExit program\n\n";
            break;

        default:
            cout << "\n Invalid Input.\n";
            break;

        }//end switch

    } //end of while-loop

    return 0;
}// end of main

void push(int item)
{
    if(TOP==MAXSTK-1)
    {
        cout << "\nOverflow of Stack\n";
    }
    else
    {
        TOP++;
        arrStck[TOP]=item;
    }

}; //end push function

void pop()
{
    if(TOP==-1)
    {
        cout << "\nUnderflow of Stack\n";
    }
    else
    {
        item=arrStck[TOP]; //hold for backup
        TOP--;
        cout<< item << " is popped from Stack\n";
    }

}; //end pop function

void print()
{
    if(TOP==-1)
    {
        cout << "\nStack is empty\n";
    }
    else
    {
        cout << "\n....Stack now: \n";
        for(int i=MAXSTK; i>TOP+1; i--)
        {
            cout << "\t[\t\]\n"; //empty spaces
        }//end for loop

        for(int i=TOP; i>=0; i--)
        {
            cout << "\t[ "<< arrStck[i] << "\t]\n";
        }//end for loop
    }

}; //end print func
