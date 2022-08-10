#include <iostream>

using namespace std;
void dfs(int** edges,int s,int n,bool* visited){
    visited[s]=true;
    for(int i=0;i<n;i++){
        if(i==s)
            continue;
        if(edges[s][i]==1 && !visited[i])
            dfs(edges,i,n,visited);
    }
}

int island(int** edges,int n){
    bool * visited=new bool[n];
    for(int i=0;i<n;i++)
        visited[i]=false;
    int count=0;

    for(int i=0;i<n;i++){
        if(visited[i]==false){
            count++;
            dfs(edges,i,n,visited);
        }
    }
    return count;

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
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
    }

    cout<<island(edges,n);



    return 0;
}
