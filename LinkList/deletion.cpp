#include <iostream>
using namespace std;


class  node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtHead(node* &head, int val)
{
    node*n=new node(val);
    n->next=head;
    head=n;

}

void insertAtTail(node* &head,int val)
{

    
    node *n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=n;

}

bool Search(node* head,int key){
    node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }   
    return false;
}

void deleteAtHead(node* &head){
    node* del=head;
    head=head->next;
    delete del;
}

void deletion(node* &head,int val){
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;

    }
    node* del = temp->next;
    temp->next=temp->next->next;
    delete del;
}
void Display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    Display(head);
    insertAtHead(head,4);
    Display(head);
    cout<<Search(head,5)<<endl;

    // deletion(head,3);
    deleteAtHead(head);
    Display(head);
    return 0;
}