#include <bits/stdc++.h>

using namespace std;

void isConnected(int** edges,int n,int s,bool*visited){
    visited[s]=true;
    for(int i=0;i<n;i++){
        if(i==s)
            continue;
        if(edges[s][i]==1 && !visited[i]){
            isConnected(edges,n,i,visited);
        }
    }
}


int main()
{
    int n,e;
    cin>>n>>e;
    int** edges=new int*[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++)
            edges[i][j]=0;
    }
    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }
    bool* visited=new bool[n];
    for(int i=0;i<n;i++)
        visited[i]=false;

    isConnected(edges,n,0,visited);
    int i;
    for( i=0;i<n;i++){
        if(visited[i]){
            continue;

        }
        else{
            cout<<"not Connected";
            break;
        }

    }
    if(i==n)
        cout<<"connect";



    return 0;
}
