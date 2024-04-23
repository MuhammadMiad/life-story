#include<iostream>
#define  max 5
using  namespace std;
int Queue[max];
int f=-1,r=-1;
void  Enqueue(){
    if(f==(r+1)%max){
            cout<<  "Circular  Queue  Full."<<endl;
    }
    else if(f==-1&&r==-1){
        f=r=0;
        int n;
        cout<<"Enter   Insert  value At  Circular Queue."<<endl;
        cin>>n;
        Queue[r]=n;
//         r=(r+1)%max;
    }
    else{
     r=(r+1)%max;
        int n;
        cout<<"Enter Insert  value at  Circular  Queue."<<endl;
        cin>>n;
        Queue[r]=n;

    }
}
void Dequeue(){
if(f==-1&&r==-1){
    cout<<"Circular  Queue  is  Empty."<<endl;

}
else if(r==f){

cout<<"DeQueue  Value  is: "<<Queue[f]<<endl;
      r=f=-1;
}
else
{
    cout<<"DeQueue  Value is: "<<Queue[f]<<endl;
    f=(f+1)%max;


}

}

void  display(){
    int i=f;
    if(f==-1&&r==-1){
        cout<<"Circular Queue is  Empty."<<endl;
    }
    else{
      while(i!=r){
        cout<<Queue[i]<< "  ";
        i=(i+1)%max;
      }
      cout<<Queue[r]<< "  ";
    }
    cout<<endl<<endl;


}
int main(){
 int choice;
    while(1){
            cout<<"------Circular Queue Menu------"<<endl;
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
  //  Front_Value();
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
