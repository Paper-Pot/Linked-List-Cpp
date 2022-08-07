#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head;
//-------- insertion at end
void Insert(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data=data;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
        return;
    }
    Node* prevNode=head;
    while(prevNode->next!=NULL){
        prevNode=prevNode->next;
    }
    prevNode->next=newNode;
}
void Print(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
void Delete(int pos){
    Node* prevNode=head;
    if(pos==1){
        head = prevNode->next;
        free(prevNode);
        return;
    }
    for(int i=0;i<pos-2;i++){
        prevNode=prevNode->next;
    }
    Node* currNode=prevNode->next;
    prevNode->next=currNode->next;
    currNode->next=NULL;
    free(currNode);
}
int main(){
    head=NULL;
    cout<<"Number if items in the list\n";
    int n,data,pos;
    char opinion;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the list item\n";
        cin>>data;
        Insert(data);
    }
    cout<<"\n";
    Print();
    do{
        cout<<"Do you want to delete any item in list\n";
        cin>>opinion;
        if(opinion=='y'||opinion=='Y'){
            cout<<"Enter the position to be deleted\n";
            cin>>pos;
            Delete(pos);
            Print();
        }else{
            break;
        }
    }while(opinion!='n');
}