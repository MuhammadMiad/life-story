#include<iostream>
using namespace std;
struct Node{
int value;
struct Node *next;
struct Node *prev;
};
struct Node *front=NULL;
struct Node *rear=NULL;
void Enqueue(){
struct Node *newNode=(Node*)malloc (sizeof(Node));
int val;
cout<<"Enter   Value  at  Queue:"<<endl;
cin>>val;

newNode->value=val;
newNode->next=NULL;
newNode->prev=NULL;
if(front ==NULL&&rear==NULL){
    front =newNode;
    rear=newNode;

}
else{
  rear ->next=newNode;
  newNode->prev=rear;
  rear=newNode;
}

}
void  Dequeue(){
if(rear==NULL){
    cout<<"Queue  is Empty."<<endl<<endl;
}
else{
    cout<<"Dequeue  Value:"<<front->value<<endl<<endl;
    front=front->next;
   // front->prev=NULL;
}
}

void  Front_Value(){
    if(front==NULL){
        cout<<"Queue  is Empty."<<endl<<endl;
    }
    else
     cout<<"Front Value:"<<front->value<<endl<<endl;
}

void display(){
if(front==NULL){
    cout<<"Queue  is Empty."<<endl<<endl;
}
else{
        struct  Node *temp=front;
        cout<<"-----Display  Queue-----"<<endl;
    while(temp!=NULL){
        cout<<temp->value<<"   ";
        temp=temp->next;

    }
    cout<<endl<<endl;
}

}

int main(){
    int choice;
    while(1){
            cout<<"------Queue Menu------"<<endl;
    cout<<"     1.Enqueue Value \n     2.Dequeue Value \n     3.Front Value \n     4.Display \n     5.Clear Screen \n     6.Exit."<<endl;
    cout<<"Choice  Above  Option :"<<endl;
    cin>>choice;
    switch(choice){
case 1:
   Enqueue();
    break;
case 2:
    Dequeue();
    break;
case 3:
    Front_Value();
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

