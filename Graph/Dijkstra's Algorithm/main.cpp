#include <bits/stdc++.h>

using namespace std;

int getMinVertex(int* dist,bool* visited,int n){
    int getMin=-1;
    for(int i=0;i<n;i++){
        if(!visited[i] && getMin==-1 || dist[i]<dist[getMin])
            getMin=i;
    }
    return getMin;
}


void dijsktra(int** edges,int n){
    bool* visited=new bool[n]();
    int* dist=new int[n];
    for(int i=0;i<n;i++){
        dist[i]=INT_MAX;
    }
    dist[0]=0;
    for(int i=0;i<n-1;i++){
        int getMin=getMinVertex(dist,visited,n);
        visited[getMin]=true;
        for(int j=0;j<n;j++){
            if(edges[getMin][j] && !visited[j]){
                int currD=dist[getMin]+edges[getMin][j];
                if(dist[j]>currD)
                    dist[j]=currD;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<i<<" "<<dist[i]<<endl;
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    int** edges=new int*[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }
    for(int i=0;i<e;i++){
        int f,s,weight;
        cin>>f>>s>>weight;
        edges[f][s]=weight;
        edges[s][f]=weight;
    }
    dijsktra(edges,n);

    return 0;
}
