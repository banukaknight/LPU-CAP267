#include <iostream>
//BK production
using namespace std;

struct node
{
    int info;
    struct node *left, *right;
};

node *rootN=NULL, *ptr, *tempN;

void insertN(int item);
void preorder(node *ptr);
void inorder(node *ptr);
void postorder(node *ptr);
node *searchN(int item);

int main()
{
    cout << "Hello & Welcome to my Tree!" << endl;
    int item;
    char choice;

    do
    {
        cout<<"\n\ni. To insert \nr. To traverse in pReorder \no. To traverse in pOstorder\n";
        cout << "n. To traverse in iNorder\ns. Searching\n0. To Exit\n"<<endl;
        cin>>choice;

        switch(choice)
        {
        case 'i':
            cout << "Enter Data to be entered: ";
            cin >> item;
            insertN(item);

            break;
        case 'r':
            cout << endl<< endl;
            preorder(rootN);

            break;
        case 'o':
            cout << endl<< endl;
            postorder(rootN);

            break;
        case 'n':
            cout << endl<< endl;
            inorder(rootN);

            break;
        case 's':
            cout << "Enter item to find in Tree: ";
            cin >> item;
            ptr = searchN(item);
            if(ptr==NULL)
            {
                cout << "\nItem not found.\n";
            }
            else
            {
                cout << "\nItem found at location: "<< ptr;
            }

            break;
        case '0':
            cout << "Exit prog";
            break;

        default:
            cout << "Error in input.\n";
            break;
        }//end switch

    }
    while(choice!='0');

    return 0;
}

void insertN(int item)
{
    ptr = new node;
    ptr->info = item;
    ptr->left=NULL;
    ptr->right=NULL;

    if(rootN==NULL)
    {
        rootN=ptr;
        return;
    }
    tempN=rootN;

    while(tempN!=NULL)
    {
        if(item < (tempN->info))
        {
            if(tempN->left==NULL)
            {
                tempN->left=ptr;
                return;
            }
            else
            {
                tempN=tempN->left;
            }
        }
        else
        {
            if(tempN->right==NULL)
            {
                tempN->right=ptr;
                return;
            }
            else
            {
                tempN=tempN->right;
            }
        }

    }//end while



};

void preorder(node *ptr)
{
    if(ptr!=NULL)
    {
        cout << ptr->info << ", ";
        preorder(ptr->left);
        preorder(ptr->right);
    }
};

void inorder(node *ptr)
{
    if(ptr!=NULL)
    {
        inorder(ptr->left);
        cout << ptr->info << ", ";
        inorder(ptr->right);
    }
};

void postorder(node *ptr)
{
    if(ptr!=NULL)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        cout << ptr->info << ", ";
    }
};

node *searchN(int item)
{
    tempN=rootN;

    while(tempN!=NULL)
    {
        if(item==tempN->info)
        {
            return tempN;
        }

        if(item<(tempN->info))
        {
            tempN = (tempN->left==NULL) ? NULL : (tempN->left);
        }
        else if(item>(tempN->info))
        {
            tempN = (tempN->right==NULL) ? NULL : (tempN->right);
        }
    }//end while

return tempN; //item not found
};
