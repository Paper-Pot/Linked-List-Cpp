#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};
// ------------Method 1
// Node* Insert(Node** head , int x){
//     Node* temp = (Node*)malloc(sizeof(Node));
//     temp->data = x;
//     temp->next = NULL;
//     if(*head!=NULL)temp->next=*head;
//     *head = temp;
//     return *head;
// }
// void Print(Node* head){
//     // Node* temp = head;
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         head=head->next;
//     }
//     cout<<"\n";
// }
// int main(){
//     Node* head=NULL;
//     int n,x;
//     cout<<"How many numbers\n";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<"Enter the number\n";
//         cin>>x;
//         Insert(&head,x);
//         Print(head);
//     }
// }
// --------------Method 2
Node* head;
void Insert(int x){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data=x;
    // temp->next=NULL;
    // if(head!=NULL)temp->next=head;
    // above commented lines can be written as
    temp->next=head;
    head=temp;
}
void Print(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
int main(){
    head=NULL;
    int n,x;
    cout<<"How many numbers in list";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the list values\n";
        cin>>x;
        Insert(x);
        Print();
    }
}