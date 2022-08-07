#include<iostream>
#include<stdio.h>
#include<stdio.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head;
void Insert(int data){
    Node* temp1 = (Node*)malloc(sizeof(Node));
    temp1->data=data;
    temp1->next=NULL;
    if(head==NULL){
        head=temp1;
        return;
    }
    Node* temp2=head;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}
void Print(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<"\n";
}
void Reverse(){
    Node* prev,*curr,*next;
    curr=head;
    prev=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}
int main(){
    head=NULL;
    int n,data;
    cout<<"Number of nodes\n";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the node data\n";
        cin>>data;
        Insert(data);
    }
    Print();
    Reverse();
    Print();
}