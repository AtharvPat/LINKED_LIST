



#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

Node *deleteNode(Node *head, int pos)
{
    Node* temp = head;
    int count =0; 
    
    if(pos==0)
    {
        head = temp->next;
        delete temp;
        return head;
    }
    
    while(temp !=NULL && count < pos-1)
    { 
        temp = temp->next;
        count++;    
    }
    if(temp!=NULL)
    {
        Node* a = temp->next;
        temp -> next = a->next;
        delete a;
        
    }
    return head;
}

// Node* deleteNode(Node *head, int i) {
   
//     Node *p=head;
//     Node *q=NULL;
    
//     else if(i==0)
//     {
//         head=p->next;
//         delete p;
//     }
//     else
//     {
//         for(int j=0;j<i&&p!=NULL;j++)
//         {
//             q=p;
//             p=p->next;
//         }
//         q->next=p->next;
//         delete p;
//     }
//     return head;
// }
void print(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main()
{
    cout << "enter linklist" << endl;
    Node *head = takeinput();
    print(head);

    cout<<"deletion of node at __ :-"<<endl;
    int i;
    cin>>i;
    
    head = deleteNode(head,i);
    print(head);

    return 0;
}
