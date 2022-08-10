#include <iostream>

using namespace std;

void print(int**edges,int n,int sv,bool*visit){
    cout<<sv<<" ";
    visit[sv]=true;
    for(int i=0;i<n;i++){
        if(i==sv)
            continue;
        if(edges[sv][i]==1){
            if(visit[i])
                continue;

            print(edges,n,i,visit);

        }

    }
}

void DFS(int** edges,int n){
    bool* visit=new bool[n];
    for(int i=0;i<n;i++){
        visit[i]=false;
    }
    for(int i=0;i<n;i++){
        if(!visit[i])
            print(edges,n,i,visit);
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
    bool* visit=new bool[n];
    for(int i=0;i<n;i++)
        visit[i]=false;
    DFS(edges,n );

    return 0;
}
