//EXP 1:
//implementation of : SINGLEY LINKED LIST : 
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node * next;
};
node* head=NULL;

void append(int num){
    node* newnode=new node();
    newnode->data=num; //*i keep forgetting assign the input valur to newnode->data;
    if(head==nullptr){
        newnode->next=head;
        head=newnode;
    }
    else{
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
    }
}

void display(){
    node* temp=head;
    while(temp!=0){
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
         append(num);
     }
     display();
 }
