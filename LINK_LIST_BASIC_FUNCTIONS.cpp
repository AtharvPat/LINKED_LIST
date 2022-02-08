


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

//taking inputs

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

//printing Ith Node 

void printIthNode(Node *head, int i)
{
    Node *temp = head;
    int count = 0;

    while (temp)
    {

        if (count == i)
        {
            cout << temp->data << endl;
        }

        count++;
        temp = temp->next;
    }
}

//length of linklist

// int length(Node *head) {
  
//     if(head==NULL)                                  
//         return 0;                         
    
//     return 1+ length(head->next);           //using recurssion 
// }


int length(Node *head)
{
    // Write your code here
    Node *temp = head;
    int len = 1;
    if (head == NULL)
    {
        return 0;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

int main()
{
    cout << "enter linklist" << endl;
    Node *head = takeinput();

    cout << "enter the positon of the ith node" << endl;
    int pos;
    cin >> pos;

    cout << "data of the ith node is:- " << endl;
    printIthNode(head, pos);
    cout << "length of the link list is:-";
    cout << length(head) << endl;
    return 0;
}
