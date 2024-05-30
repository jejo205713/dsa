//EXP 1:
//implementation of singly linked list : 

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
node *head=NULL;
void insert(int num)
{
    node *newnode=new node();
    newnode->data=num;
    if(head==NULL)
    {
    newnode->next=head;
    head=newnode;
    }
    else{
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
}
}

void display(){
    node*temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        insert(num);
    
}
display();
    
}