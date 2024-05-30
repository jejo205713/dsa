//EXP2
//IMPLEMENTATION OF DOUBLY LINKED LIST:
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next,*prev;
};
node *head=nullptr;

void insert(int num){
    node *newnode=new node();
    newnode->data=num;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}
void display()
{
    node *temp=head;
    node *tem;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
    
    tem=temp;
    temp=temp->next;
}
cout<<endl;
cout<<"Doubly linked list backwards: ";
while(tem!=0)
{
    cout<<tem->data<<" ";
    tem=tem->prev;
}
}
int main()
{
    int n;
    cin>>n;
    cout<<"Doubly linked list forwards:";
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        insert(num);
    }
    display();
}