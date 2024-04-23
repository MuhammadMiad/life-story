#include<iostream>
#include<conio.h>
using namespace std;
struct Node{
int  value;
struct Node *next;
};
struct  Node  *head=NULL;
struct  Node  *tail=NULL;
struct  Node *temp;

void  Travers(){
struct  Node  *newNode=(struct Node*)malloc (sizeof(struct Node));
int n;
cout<<"Enter  Value:"<<endl;
cin>>n;
newNode->value=n;
newNode->next=NULL;
if(head==NULL){
    head=newNode;
    tail=newNode;
}
else {
    tail->next=newNode;
    tail=newNode;
}


}

void Insertion1(){

    struct Node *newNode=(Node*)malloc(sizeof(Node));
    int val;
    cout<<"Enter  Insert  at  First  position:"<<endl;
    cin>>val;
    newNode->value=val;
    newNode->next=NULL;
    newNode->next=head;
    head=newNode;
temp=head;
while(temp!=NULL){
cout<<temp->value<< "  ";
temp=temp->next;
}
cout<<endl<<endl;
}

void Insertion2(){
struct Node *newNode=(Node*)malloc(sizeof(Node));
    int  i,val,position;
    cout<<"Enter  Insert  at  Last  position:"<<endl;
    cin>>val;
    cout<<"Enter  Position(Start::2 to ...)"<<endl;
    cin>>position;
    newNode->value=val;
    newNode->next=NULL;
    temp=head;
    for(i=2;i<position;i++){
            if(temp!=NULL){
                temp=temp->next;
            }
    }

newNode->next=temp->next;
temp->next=newNode;

temp=head;
while(temp!=NULL){
cout<<temp->value<< "  ";
temp=temp->next;
}
cout<<endl<<endl;
}
void Insertion3(){
 struct Node *newNode=(Node*)malloc(sizeof(Node));
    int val;
    cout<<"Enter  Insert  at  Last  position:"<<endl;
    cin>>val;
    newNode->value=val;
    newNode->next=NULL;
     tail->next=newNode;
     tail=newNode;

     temp=head;
     while(temp!=NULL){
cout<<temp->value<< "  ";
temp=temp->next;
}
cout<<endl<<endl;
}

  void Deletion1(){
      temp=head->next;
      head=temp;
    while(temp!=NULL){
cout<<temp->value<< "  ";
temp=temp->next;
}
cout<<endl<<endl;

  }
  void Deletion2(){
    temp=head;
    int  i,position;
    cout<<"Enter  position for  Deleting:"<<endl;
    cin>>position;
    for(i=2;i<position;i++){
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
cout<<endl<<endl;
    }
  void Deletion3(){
    temp=head;
while(temp->next!=NULL){
cout<<temp->value<< "  ";
temp=temp->next;
}
cout<<endl<<endl;

  }
void display(){
temp=head;
cout<<"----:Display:-----"<<endl;
while(temp!=NULL){
cout<<temp->value<< "  ";
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
getch();
}
