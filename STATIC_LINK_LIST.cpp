




#include <iostream>
#include <cmath>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

class NODE
{
public:
    int data;
    NODE *next;

    NODE(int d)
    {
        this->data = d;
        next = NULL;
    }
};
void print(NODE *head)
{
    NODE *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    //  while (head != NULL)
    // {
    //     cout<< head -> data<<" ";
    //     head = head->next;
    // }
}
int main()
{

    NODE n1(1);
    NODE *head = &n1;

    NODE n2(2);
    n1.next = &n2;

    NODE n3(3);
    n2.next = &n3;

    NODE n4(4);
    n3.next = &n4;

    NODE n5(5);
    n4.next = &n5;

    print(head);
    // cout<<n1.data<<" "<<n2.data;

    return 0;
}
