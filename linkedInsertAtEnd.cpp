#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head;
void Insert(int x){
    Node* temp1=(Node*)malloc(sizeof(Node));
    temp1->data=x;
    temp1->next=NULL;
    if(head == NULL){
        head=temp1;
        return;
    }
    Node* temp2 = head;
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
int main(){
    head=NULL;
    int n,x;
    cout<<"How many numbers in list\n";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the list values\n";
        cin>>x;
        Insert(x);
        Print();
    }
}