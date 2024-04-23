#include<iostream>
using namespace std;
int g[8][8]={{0,1,0,1,0,1,0,0},
            {0,0,1,1,0,0,0,0},
            {0,0,0,0,0,0,0,0},
            {0,0,1,0,0,0,0,0},
            {0,0,0,1,0,0,0,0},
            {0,0,0,1,0,0,1,0},
            {0,0,0,1,0,0,0,0},
            {0,0,0,1,1,0,0,0}

           };
int pre[8];
int color[8];
int q[8];
int dis[8];
int f=-1,r=-1;

void printpath(int s ,int d){

if(d==s){
    cout<<s<<" ";
    return;

}
else
{

    printpath(s,pre[d]);

}

 cout<<d<<" ";
}


int main(){

    int s,des;

    q[++r]=s;
    f=0;
    for(int i=0;i<8;i++){
        pre[i]=-1;
        color[i]=0;
        dis[i]=1e9;
    }

    cout<<"\n\nBFS visit sequence: ";
    while(f<=r){
        int v;
        int u=q[f++];
        color[u]=1;
        for(v=0;v<8;v++){
            if(g[u][v]==1&& color[v]==0){
                q[++r]=v;
                dis[v]=dis[u]+1;
                pre[v]=u;
            }

        }
        color[u]=2;
        cout<<u<<" ";
    }

        cout<<"Enter destination:"<<endl;
        cin>>des;

    cout<<"Path from "<< s<< " to "<<des<<endl;
    printpath(s,des);




    return 0;
}




