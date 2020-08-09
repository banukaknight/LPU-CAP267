#include <iostream>

using namespace std;

struct node
{
    int info;
    struct node *link;
};

void insert_beg(int itm, node *START);
void printLL(node *START);

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

   printLL(START);

   int itm;

   cout << "\n1 for beginning of list.";
    cout << "\n2 for middle point.\n3 for end of list.";
    cout << "\nEnter item to the LL? : 0 for skip.";
      //cin >> itm;
itm =1;
   if(itm == 1){
   cout << "\nItem to enter at begining of LL: ";
   // cin >> itm;
   itm=55;
   insert_beg(itm, START);
   }
   else if(itm == 2)
   {

   }else if(itm == 3)
   {

   }else{}
   cout << "LL after insertion: \n\n";
printLL(START);

    return 0;
} //end main

void printLL(node *START) //print LL function
{
    node *ptr;
     ptr=START;
    while(ptr!=NULL) //print linked list
    {
        cout << ptr ->info << ", ";
        ptr = ptr ->link;
    }
}; //end print LL function

void insert_beg(int itm, node *START)
{
    cout << "came here";
    struct node *ptr;
   ptr = new node;

    ptr -> info = itm;

    if(START == NULL) //if LL has no elements
    {
        ptr -> link = NULL;
    }
    else
    {
        ptr -> link = START;
    }
    START = ptr;
}; //end insert_beg

