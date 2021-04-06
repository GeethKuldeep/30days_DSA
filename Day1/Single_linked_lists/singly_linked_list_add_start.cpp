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
    void insertfirst()
    {
        node *n,*temp;
        int t;
        cout<<"Enter a number";
        cin>>t;
        n=new node;
        n->a=t;
        n->next=NULL;
        if(root==NULL)
            root=last=n;
        else
        {
            n->next=root;
            root=n;
        }
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
        cout<<"2. Insert first\n";
        cout<<"3. Show\n";
        cout<<"4. Exit\n";
        cout<<"\n\nEnter your choice";
        cin>>ch;
        switch(ch)
        {
        case 1:
            s.create();
            break;
        case 2:
            s.insertfirst();
            break;
        case 3:
            s.show();
            break;
        case 4:
            break;
        }
    }
    while(ch!=4);
    return 0;
}
