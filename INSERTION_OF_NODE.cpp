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

Node* insertnode(Node* head,int i,int data)
{
    Node* newnode = new Node(data);
    int count =0; 
    Node* temp = head;

    if (i == 0)
    {
        newnode->next = head;
        head = newnode;
        return head;
    }
    
    while (temp != NULL && count < i-1)
    {
        temp = temp->next;
        count++;
    }
     
     if (temp != NULL)
     {
          newnode->next = temp->next;
          temp->next = newnode;
     }
     return head;
    
}
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

    cout<<"insertion of node at __ and data :-"<<endl;
    int data,i;
    cin>>i>>data;
    
    head = insertnode(head,i,data);
    print(head);

    return 0;
}
