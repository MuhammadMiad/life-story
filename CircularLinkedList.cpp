#include<iostream>
using namespace std;
struct  Node {
  int value;
  struct  Node *next;

};
struct Node *head=NULL;
struct Node *tail=NULL;
void Travers(){
struct Node *newNode=(Node*)malloc(sizeof(Node));
int val;
cout<<"Enter  value   at   Circular  LinkedList:"<<endl;
cin>>val;
newNode->value=val;
newNode->next=NULL;
if(head==NULL)
{
    head=newNode;
    tail=newNode;
}
else {
    tail->next=newNode;
    newNode->next=head;
  tail=newNode;
}

}
void display(){
    cout<<"-------Display-------"<<endl;
struct  Node *temp=head;
while(temp!=NULL){
    cout<<temp->value<<  "  ";
    temp=temp->next;
}
cout<<endl;
}

int main(){

int choice,m;
while(1){
cout<<"-------Main Menu -----"<<endl;
cout<<" 1.Input Value. \n 2.Display  \n 3.Screen Clear  \n 4.Exit." <<endl;
cout<<"Choice  above  Option:"<<endl;
cin>>choice;
switch(choice){
    case 1:
    Travers();
    break;
    case 2:
        display();
    break;
    case 3:
        system("CLS");
    break;
    case 4:
    break;
    default:
        cout<<"Invalid  Choice.Please  Try  Again ."<<endl;

}
}
return 0;
}
