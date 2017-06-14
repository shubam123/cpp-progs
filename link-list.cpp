/*
------------ Insert ---------------
------------ Insert at nth --------------
------------ Delete ---------------
------------ PRINT ---------------
------------ LINKED LIST ---------------
--------- Reverse to be added later------------
---------- minor fixes later----------
 */



#include<iostream>
#include<string>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head;

void insert(int data)
{
    Node* temp = new Node();
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        Node* temp1;
        temp1=head;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
    
}
void insert(int data,int n)
{
 //   int num=0;
    Node *temp1;
    temp1=head;
    for(int i=1;i<n;i++)
    {
        temp1=temp1->next;
    }
        Node *temp = new Node();
        temp->data=data;
        temp->next=temp1->next;
        temp1->next=temp;
    
}
void del(int n)
{
    Node *temp1,*prev;
    temp1=head;
    if(n==1)
    {
        head=head->next;
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            prev=temp1;
            temp1=temp1->next;
        }
        prev->next=temp1->next;
    }


}
void print(Node* head)
{
    Node* temp1;
    temp1 = head;
    while(temp1!=NULL)
    {
        cout<<temp1->data;
        temp1=temp1->next;
    }   
    
}


int main() 
{
    head=NULL;
    insert(5);
    insert(6);
    insert(1);
    insert(8);
    insert(2,2);
    insert(7,3);
    print(head);  
    return 0;    
}

