#include <iostream>

struct Node
{
    int data;
    Node* link;
};

Node* head;

int main(){

head=NULL;
Node* temp = new Node();
temp->data=2;
temp->link=NULL;
A=temp;

temp=new Node();
temp->data=4;
temp->link=NULL;

Node* start=A;
while(start->link!=NULL)
{
    start=start->link;
}
start->link=temp;
}




