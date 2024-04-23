#include<iostream>
using namespace std;

struct Node {
int value;
struct Node *next;
struct Node *prev;
};
struct Node  *head=NULL;
struct Node  *tail=NULL;
void  Travers(){
struct Node *newNode=(Node*)malloc(sizeof(Node));
int val;
cout<<"Enter    Value for  Double Linked List:"<<endl;
cin>>val;
newNode->value=val;
newNode->next=NULL;
newNode->prev=NULL;

if(head==NULL&&tail==NULL){
    head=newNode;
    tail=newNode;
}
else
{
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;

}





}

void Insertion1(){
    struct Node  *newNode=(Node*)malloc(sizeof(Node));
    int  val;
    cout<<"Enter  Value  at  Beginning"<<endl;
    cin>>val;
    newNode->value=val;
    newNode->next=NULL;
    newNode->prev=NULL;

    newNode->next=head;
    head->prev=newNode;
    head=newNode;
    struct Node *temp=head;
    while(temp!=NULL){
        cout<<temp->value<< "  ";
      temp=temp->next;
    }
    cout<<endl;
}
void Insertion2(){

struct  Node  *newNode=(Node*)malloc (sizeof(Node));
int val,position;
cout<<"Enter   value  at  Specific  position:"<<endl;
cin>>val;
cout<<"Enter  Position  setup  Value."<<endl;
cin>>position;
newNode->value=val;
newNode->next=NULL;
newNode->prev=NULL;

struct  Node *temp=head;

for(int i=2;i<position;i++){
        if(temp!=NULL){
            temp=temp->next;
        }


}
newNode->next=temp->next;
temp-> next=newNode;

temp=head;
while(temp!=NULL){
    cout<<temp->value<< "  ";
    temp=temp->next;
}
cout<<endl;
}
void Insertion3(){
     struct Node  *newNode=(Node*)malloc(sizeof(Node));
    int  val;
    cout<<"Enter  Value  at  Ending"<<endl;
    cin>>val;
    newNode->value=val;
    newNode->next=NULL;
    newNode->prev=NULL;

    tail->next=newNode;
    newNode->prev=tail;
   tail=newNode;


 struct Node *temp=head;

    while(temp!=NULL){
        cout<<temp->value<< "  ";
        temp=temp->next;
    }
    cout<<endl;
}

void Deletion1(){

    cout<<"Delete  at  Beginning :"<<endl;

struct Node *temp=head->next;
head=temp;
while(temp!=NULL){
    cout<<temp->value<< "  ";
    temp=temp->next;
}
cout<<endl;

}
void Deletion2(){
    int position;
    cout<<"Enter position  for  Delete  at Specific  Position:"<<endl;
    cin>>position;
    struct Node *temp=head;
    for(int i=2;i<position;i++){
        if(temp!=NULL){
            temp=temp->next;
        }

    }
    temp->next=temp->next->next;
    temp=head;

    while(temp!=NULL){
          cout<<temp->value<< "  ";
          temp=temp->next;

    }
    cout<<endl;
}
void  Deletion3(){


    struct Node *temp=head;

    while(temp->next->next!=NULL){
        temp=temp->next;
    }
     temp->next=NULL;
    tail=temp;
    //cout<<temp->value<<endl;

   struct  Node  *pemp=head;

    while (pemp!=NULL){
        cout<<pemp->value<<"  ";
        pemp=pemp->next;
    }
    cout<<endl;

}

void  display(){
    cout<<"------Display------"<<endl;
struct  Node *temp=head;
while(temp!=NULL){
    cout<<temp->value<<"  ";
    temp=temp->next;

}
cout<<endl<<endl;
}
int main(){

int choice,m;
while(1){
cout<<"-------Main Menu -----"<<endl;
cout<<" 1.Input Value. \n 2.Insertion  \n 3.Deletion  \n 4.Display  \n 5.Screen Clear  \n 6.Exit." <<endl;
cout<<"Choice  above  Option:"<<endl;
cin>>choice;
switch(choice){
    case 1:
    Travers();
    break;
    case 2:
        {
        cout<<" \n 1.Insert  at  Beginning. \n 2.Insert  at Specific Position. \n 3.Insert at  Ending."<<endl;
            cin>>m;
            if(m==1)
                Insertion1();
            else if(m==2)
                Insertion2();
            else if(m==3)
                Insertion3();
        }
    break;
    case 3:{
                cout<<" 1.Delete  at  Beginning. \n 2.Delete  at Specific Position. \n 3.Delete  at  Ending. "<<endl;
             cin>>m;
            if(m==1)
                Deletion1();
            else if(m==2)
                Deletion2();
            else if(m==3)
                Deletion3();
        }
    break;

    case 4:
        display();
    break;
    case 5:
        system("CLS");
    break;
    case 6:
    break;
    default:
        cout<<"Invalid  Choice.Please  Try  Again ."<<endl;

}
}

return 0;
}
