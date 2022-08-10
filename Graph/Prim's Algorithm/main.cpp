#include <bits/stdc++.h>

using namespace std;

int getMinVertex(int* weight,int n,bool* visited){
    int minVertex=-1;
    for(int i=0;i<n;i++){
        if((minVertex==-1 )|| (weight[minVertex]>weight[i]) && !visited[i]){
            minVertex=i;
        }
    }
    return minVertex;

}

void prims(int ** edges,int n){
    bool* visited=new bool[n]();
    int* parent = new int[n];
    int* weight=new int[n];
    for(int i=0;i<n;i++)
        weight[i]=INT_MAX;

    weight[0]=0;

    parent[0]=-1;
    for(int i=0;i<n-1;i++){
        int minVertex=getMinVertex(weight,n,visited);
        visited[minVertex]=true;
        for(int j=0;j<n;j++){
            if(edges[minVertex][j]!=0 && !visited[j]){
                if(weight[j]>edges[minVertex][j]){
                    weight[j]=edges[minVertex][j];
                    parent[i]=minVertex;
                }
            }
        }
    }
    for(int i=0;i<n-1;i++){
        if(parent[i]<i){
            cout<<parent[i]<<" "<<i<<" "<<weight[i]<<endl;
        }
        else
            cout<<i<<" "<<parent[i]<<" "<<weight[i]<<endl;
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    int** edges=new int*[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=1;j<n;j++)
            edges[i][j]=0;
    }
    for(int i=0;i<e;i++){
        int f,s,w;
        cin>>f>>s>>w;
        edges[f][s]=w;
        edges[s][f]=w;
    }
    prims (edges,n);
    return 0;
}
