#include<iostream>
using namespace std;
struct Node{
int value;
struct Node *next;
struct Node *prev;
};
struct Node *head=NULL;
struct Node *tail=NULL;
void Push_Value(){
struct Node *newNode=(Node*)malloc (sizeof(Node));
int val;
cout<<"Enter   Value  at  Stack:"<<endl;
cin>>val;

newNode->value=val;
newNode->next=NULL;
newNode->prev=NULL;
if(head==NULL&&tail==NULL){
    head=newNode;
    tail=newNode;

}
else{
  tail ->next=newNode;
  newNode->prev=tail;
  tail=newNode;
}

}
void  Pop_Value(){
if(tail==NULL){
    cout<<"Stack  is Empty."<<endl<<endl;
}
else{
    cout<<"Popped  Vale:"<<tail->value<<endl<<endl;
    tail=tail->prev;
    tail->next=NULL;
}
}

void  Top(){
    if(tail==NULL){
        cout<<"Stack  is Empty."<<endl<<endl;
    }
    else
     cout<<"Top  Value:"<<tail->value<<endl<<endl;
}

void display(){
if(tail==NULL){
    cout<<"Stack  is Empty."<<endl<<endl;
}
else{
        struct  Node *temp=tail;
        cout<<"-----Stack-----"<<endl;
    while(temp!=NULL){
        cout<<temp->value<<endl;
        temp=temp->prev;

    }
}

}

int main(){
    int choice;
    while(1){
            cout<<"------Stack Menu------"<<endl;
    cout<<"     1.Push Value \n     2.Pop Value \n     3.Top Value \n     4.Display \n     5.Clear Screen \n     6.Exit."<<endl;
    cout<<"Choice  Above  Option :"<<endl;
    cin>>choice;
    switch(choice){
case 1:
    Push_Value();
    break;
case 2:
    Pop_Value();
    break;
case 3:
    Top();
    break;
case 4:
    display();
    break;
    case 5:
        system("CLS");
    break;
case 6:
    exit(0);
    break;
default:
    cout<<"Invalid  Choice.Please  Try  again ."<<endl;
    }

    }


return 0;
}
