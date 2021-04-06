#include<iostream>
using namespace std;

struct node
{
    int a;
    node *next;
};
class slist
{
    node *root,*last;
public:
    slist()
    {
        root=last=NULL;
    }
    void create()
    {

        node *n;
        int t;
        cout<<"Enter a number";
        cin>>t;
        n=new node;
        n->a=t;
        n->next=NULL;
        if(root==NULL)
            root=n;
        else
            last->next=n;
        last=n;
    }
    void show()
    {
        node *temp;
        temp=root;
        cout<<"The list is \n";
        while(temp!=NULL)
        {
            cout<<temp->a<<"->";
            temp=temp->next;
        }
        cout<<"null";
    }
};
int main()
{
    slist s;
    int ch;
    do
    {

        cout<<"\n\n";
        cout<<"1. Create\n";
        cout<<"2. Show\n";
        cout<<"3. Exit\n";
        cout<<"\n\nEnter your choice";
        cin>>ch;
        switch(ch)
        {
        case 1:
            s.create();
            break;
        case 2:
            s.show();
            break;
        case 3:
            break;
        }
    }
    while(ch!=3);
    return 0;
}
