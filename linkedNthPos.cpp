#include<iostream>
#include<stdio.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head;
void Insert(int data,int pos){
    Node* temp1 = new Node;
    temp1->data=data;
    temp1->next=NULL;
    if(pos==1){
        temp1->next=head;
        head=temp1;
        return;
    }
    Node* temp2=head;
    for(int i=0;i<pos-2;i++){
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}
void Print(){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<"\n";
}
int main(){
    head=NULL;
    int n,pos,data;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the data and position to be inserted\n";
        cin>>data>>pos;
        Insert(data,pos);
        Print();
    }
}