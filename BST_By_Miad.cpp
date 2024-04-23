#include<iostream>
using  namespace std;
struct  Node{
int value;
struct  Node *left;
struct  Node *right;
};

 Node  *Insert(Node *root,  int key){
struct  Node  *newNode =(Node*)malloc(sizeof(Node));
newNode->value=key;
newNode->left=NULL;
newNode->right=NULL;

Node   *x=root;
Node  *y=NULL;

while(x!=NULL){
    y=x;

    if(key<x->value)
        x=x->left;
    else
        x=x->right;
}
    if(y==NULL){
        y=newNode;
    }
    else if( key<y->value)
        y->left=newNode;
    else
        y->right=newNode;

  return y;

};

void  inorder(Node *root){

if(root==NULL) {
}

else{
    inorder(root->left);
    cout<<root->value<<"  ";
    inorder(root->right);
}


}

void  preorder(Node *root){

if(root==NULL) {
}

else{
    cout<<root->value<<"  ";
    preorder(root->left);
    preorder(root->right);
}


}
void  postorder(Node *root){

if(root==NULL) {
}

else{
    postorder(root->left);
    postorder(root->right);
    cout<<root->value<<"  ";
}


}

Node* Search(Node* root, int key){

if(root==NULL)
    return root;
else if(root->value==key){
 return  root;
}
else if(root->value>key){
    return Search(root->right, key);
}
else{
    return Search(root->left ,key);
}

}

int main(){

    Node *root=NULL;
//    Node *boot=NULL;
    int choice, c=0;
    while(1){
    cout<<"\n\n---------Binary Search Tree------"<<endl;
        cout<<" 1.Insert \n 2.Delete \n 3.InOrder Traverse \n 4.PostOrder Traverse \n 5.PreOrder Traverse \n 6.Search  in  BST \n 7.Maximum Element  \n 8.Minimum Element \n 9.ScreenClear \n 10.Exit."<<endl;
        cout<<"Choice Above Option:"<<endl;
        cin>>choice;
        switch(choice){
    case 1:
        int key;
        cout<<"Enter  Value  insert  at  BST"<<endl;
        cin>>key;
        if(c==0){
             root=Insert(root, key);
             c++;
        }
        else
            Insert(root,key);
        break;
    case 2:
        break;
    case 3:
        cout<<"InOrder  Traverse:"<<endl;
        inorder(root);
        break;
      case 4:
        cout<<"PostOrder  Traverse:"<<endl;
        postorder(root);
      break;
      case 5:
          cout<<"PreOrder  Traverse:"<<endl;
        preorder(root);
        break;
      case 6:
          {
                 int k;
          cout<<"Enter  Searching Value:"<<endl;
          cin>>k;
        cout<<Search(root, k)->value<< " Value  Contains   in This BST."<<endl;

          }

        break;
    case 9:
        system("CLS");
        break;
        case 10:
        exit(0);
        break;
        default:
            cout<<"Invalid Choice.Please  try  Again."<<endl;

        }
    }
return 0;
}
