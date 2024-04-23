#include<iostream>
using namespace std;
int HashTable[10]={0};

void Insertion(){
int key,i,index,h;
cout<<"Enter a value to insert into Quadratic Hash table"<<endl;
cin>>key;
h=key%10;
for(i=0;i<10;i++){
    index=(h+i*i)%10;

     if(HashTable[index] == 0)
     {
        HashTable[index]=key;
         break;
     }
}
if(i == 10)

     printf("\n element cannot be inserted\n");


}


void Search()
{

 int key,index,i,h;
 cout<<" Enter search element"<<endl;
 cin>>key;
 h=key%10;
 for(i=0;i<10; i++)
 {
    index=(h+i)%10;
    if(HashTable[index]==key)
    {
      cout<<"Value is found at "<< index<<endl;
      break;
    }
  }
  if(i == 10)
    cout<<"Value is not found"<<endl;
}

void Display()
{

  int i;

  cout<<" Elements in the hash table are"<<endl;

  for(i=0;i<10; i++)
  cout<< " "<<HashTable[i]<<" Value is index at "<<i<<endl;

}


int main(){
    int choice;
    while(1)
    {
        cout<<" \n-----Welcome to Main Manu------"<<endl;
        cout<<"\n 1.Insert\n 2.Display \n 3.Search \n 4.Screen Clear \n 5.Exit \n";
        cout<<"Choice Above Option:"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
               Insertion();
                break;
            case 2:
                Display();
                break;
            case 3:
                Search();
                break;
            case 4:
                system("cls");
                break;
            case 5:
                exit(0);
                break;
            default:
                cout<< "Enter  correct  Value:";

        }
    }
return 0;
}
