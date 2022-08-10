#include <iostream>

using namespace std;

bool has_path(int** edges,int n,int s,int E,bool* visited){
    visited[s]=true;
    if(edges[s][E]==1)return true;
    for(int i=0;i<n;i++){
        if(i==s)
            continue;
        if(edges[s][i]==1){
           if(visited[i])
                continue;

            if(has_path(edges,n,i,E,visited))
                return true;

        }
    }
    return false;
}

bool hasPath(int**edges,int n,int s,int E){
    bool* visited=new bool[n];
    return has_path(edges,n,s,E,visited);
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


    int s,d;
    cin>>s>>d;
    cout<<hasPath(edges,n,s,d);

    return 0;
}
