
#include <bits/stdc++.h>

using namespace std;
void DFS(int** edges,int n,int s,bool* visited,stack<int>&st){

    visited[s]=true;
    for(int i=0;i<n;i++){
        if(i==s)
            continue;

        if(edges[s][i]==1 && !visited[i])
            DFS(edges,n,i,visited,st);
    }
    st.push(s);
}

void topoSort(int** edges,int n,int s,bool* visited){
    stack<int>st;
    for(int i=0;i<n;i++){
        if(!visited[i])
            DFS(edges,n,i,visited,st);
    }
    while(!st.empty()){
        int res=st.top();
        cout<<res<<" ";
        st.pop();
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    int**edges=new int*[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }
    //int * degree=new int[n];
    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        //degree[s]++;
        edges[f][s]=1;
        //edges[s][f]=1;
    }
    bool* visited=new bool[n];
    for(int i=0;i<n;i++)
        visited[i]=false;

    topoSort(edges,n,0,visited);

    return 0;
}
