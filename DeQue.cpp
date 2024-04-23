#include<iostream>
using namespace std;
struct Node{
int value;
struct Node *next;
struct Node *prev;
};
struct Node *front=NULL;
struct Node *rear=NULL;


void InsertAtRear(){
struct Node *newNode=(Node*)malloc (sizeof(Node));
int val;
cout<<"Enter   Value insert  at    Rear:"<<endl;
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
void  InsertAtFront(){
struct Node *newNode=(Node*)malloc (sizeof(Node));
int val;
cout<<"Enter   Value Insert  at    Front:"<<endl;
cin>>val;

newNode->value=val;
newNode->next=NULL;
newNode->prev=NULL;
if(front ==NULL&&rear==NULL){
    front =newNode;
    rear=newNode;

}
else{
  front  ->prev=newNode;
  newNode->next=front;
  front=newNode;
}
}

//void  Front_Value(){
//    if(front==NULL){
//        cout<<"Queue  is Empty."<<endl<<endl;
//    }
//    else
//     cout<<"Front Value:"<<front->value<<endl<<endl;
//}

void DeleteAtRear(){
    if(rear==NULL&&front ==NULL){
        cout<<"DeQue  is  Empty."<<endl;

        }
        else{
            cout<<"Delete at  Rear"<<rear->value<<endl;
            rear=rear->prev;
            rear->next=NULL;
        }
}
void DeleteAtFront(){
if(front==NULL&&rear==NULL)
{
    cout<<"DeQue  is  Empty."<<endl;
}
else{
    cout<<"Delete at  Front"<<front->value<<endl;
    front=front->next;
    front->prev=NULL;
}

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
    cout<<" 1.Insert at Rear. \n2.Insert at Front \n3.Delete  at   Rear \n4.Delete at  Front. \n5.Display. \n6.Clear Screen \n7.Exit."<<endl;
    cout<<"Choice  Above  Option :"<<endl;
    cin>>choice;
    switch(choice){
case 1:
   InsertAtRear();
    break;
case 2:
   InsertAtFront();
    break;
case 3:
  DeleteAtRear();
    break;
case 4:
 DeleteAtFront();
 break;
case 5:
  display();
  break;
case 6:
  system("CLS");
 break;
 case 7:
  exit(0);
    break;
default:
    cout<<"Invalid  Choice.Please  Try  again ."<<endl;
    }

    }


return 0;
}


