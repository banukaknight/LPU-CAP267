#include <iostream>
//BK production
using namespace std;

struct node
{
    int info;
    struct node *pre;
    struct node *nxt;
};

node *begg=NULL, *endd=NULL, *ptr, *tempN;
//declare golbally

void createDLL();
void printDLLfromBeg();
void printDLLfromEnd();
void addAtBegg();
void addAtEndd();
node *searchforItem(int);
void insertafterElm(int,int);
void deletefirst();
void deletelast();

int main()
{
    cout << "Hello Brudda!" << endl;
    createDLL();


    cout << "\n\nPrint DLL from beggining: \n";
    printDLLfromBeg();

    cout << "\n\nPrint DLL from end: \n";
    printDLLfromEnd();

    cout << "\n\nInsert Item at Start of DLL: \n";
  //  addAtBegg();


    cout << "\n\nInsert Item at End of DLL: \n";
    addAtEndd();

    cout << "\n\nPrint DLL from beggining: \n";
    printDLLfromBeg();
    cout << "\n\nPrint DLL from end: \n";
    printDLLfromEnd();

    cout<< "\n\nEnter item to search: ";
    int sItem;
    cin >> sItem;
    tempN = searchforItem(sItem);
    if(tempN==NULL)
    {
        cout<<"\nElement is not found.";
    }
    else
    {
        cout<<"Element is found in location: "<<tempN;
    }

    int iItem;
    cout<< "\n\nEnter item to Insert : ";
    cin >> iItem;
    cout<< "\n\nAfter what element : ";
    cin >> sItem;

    insertafterElm(iItem,sItem);

    cout << "\n\nPrint DLL from beggining: \n";
    printDLLfromBeg();
    cout << "\n\nPrint DLL from end: \n";
    printDLLfromEnd();


     cout<< "\n\nDelete First Item: ";
        deletefirst();
 cout << "\n\nPrint DLL from end: \n";
    printDLLfromEnd();




    return 0;
}

void createDLL()
{
    begg=NULL;
    endd=NULL;
    int leng;
    cout << "Enter Number of nodes for DLL: ";
    cin >> leng;
    int item;

    if(leng==0)
    {
        return;
    }

    ptr = new node; //create a node
    begg = ptr; // give it's address to begg var
    ptr->pre=NULL; // set first node's pre value as null


    for(int i=1; i<=leng; i++)
    {
        cout << "Enter data for node " << i << " : ";
        cin >> item;
        ptr->info=item;


        if(i==leng)
        {
            ptr->nxt=NULL;
        }
        else
        {
            ptr->nxt = new node;
            tempN=ptr;
            ptr=ptr->nxt;
        }
        ptr->pre=tempN;
    }
    endd = ptr; //set endd as address of last node

}

void printDLLfromBeg()
{
    ptr = begg;
    if(ptr==NULL)
    {
        cout << "Empty DLL";
    }

    while(ptr!=NULL)
    {
        cout << ptr->info << ", ";
        ptr=ptr->nxt;
    }
};

void printDLLfromEnd()
{
    ptr = endd;
    if(ptr==NULL)
    {
        cout << "Empty DLL";
    }

    while(ptr!=NULL)
    {
        cout << ptr->info << ", ";
        ptr=ptr->pre;
    }
};

void addAtBegg()
{
    int item;
    cout << "Enter element to add at front: ";
    cin >> item;

    ptr = new node;
    ptr->info=item;
    ptr->pre=NULL;
    if(begg==NULL&&endd==NULL)
    {
        ptr->nxt=NULL;
        endd=ptr;
    }
    else
    {
        ptr->nxt=begg;
        begg->pre=ptr;
    }
    begg=ptr;
}

void addAtEndd()
{
    int item;
    cout << "Enter element to add at End: ";
    cin >> item;

    ptr = new node;
    ptr->info = item;
    ptr->nxt=NULL;

    if(begg==NULL&&endd==NULL)
    {
        ptr->pre=NULL;
        begg=ptr;
    }
    else
    {
        ptr->pre=endd;
        endd->nxt=ptr;
    }
    endd=ptr;
}

node *searchforItem(int item)
{

    ptr = begg;
    tempN = NULL;
    while(ptr!=NULL)
    {
        if(ptr->info==item)
        {
            return ptr;
        }
        ptr=ptr->nxt;
    }
    return NULL;
}

void insertafterElm(int iitem, int sitem)
{
    tempN = searchforItem(sitem);
    if(tempN==NULL)
    {
        cout << "Search item not found";
        return;
    }
    ptr = new node;
    ptr->info=iitem;
    ptr->pre=tempN;

    if(tempN->nxt==NULL)
    {
        ptr->nxt=NULL;
        endd=ptr;
    }
    else
    {
         ptr->nxt=tempN->nxt;
        tempN->nxt->pre = ptr;
    }
    tempN->nxt=ptr;

}

void deletefirst(){

if(begg==NULL&&endd==NULL)
{
    cout<<"\nNothing to delete";
}else if(begg->nxt==NULL){
ptr=begg;
begg=endd=NULL;
delete ptr;
}else{
ptr=begg;
begg->nxt->pre=NULL;
begg=ptr->nxt;
delete ptr;
}
}

void deletelast() {

if(begg==NULL&&endd==NULL)
{cout<<"\nNothing to delete";
}else if(begg->nxt==NULL){
ptr=begg;
begg=endd=NULL;
delete ptr;
}else{
ptr=endd;
endd->pre->nxt=NULL;
endd=ptr->pre;
delete ptr;
}
}

void deleteAfter(int sitem)
{
tempN = searchforItem(sitem);
    if(tempN==NULL)
    {
        cout << "Search item not found";
        return;
    }else if(tempN->nxt==NULL)
{cout << "Search is last element on List thus no follwing item to delete";
        return;
}else
{
ptr=tempN->nxt;
if(ptr->nxt==NULL)
{tempN->nxt=NULL;
endd=tempN;
delete ptr;
}
else
{
tempN->nxt=ptr->nxt;
ptr->nxt->pre=tempN;
delete ptr;
}

}//end if ladder
}//endOfFunc
