#include <bits/stdc++.h>

using namespace std;

bool toposort(int** edges,int n,int s,bool* visited,int* degree){


    queue<int>q;
    for(int i=0;i<n;i++){
        if(degree[i]==0){
            q.push(i);
            visited[i]=true;
        }
    }
    int count=0;
    while(!q.empty()){
        int curr=q.front();
        q.pop();



        for(int i=0;i<n;i++){
            if(edges[curr][i]==1)
                degree[i]--;
        }
        for(int i=0;i<n;i++){
            if(degree[i]==0 && !visited[i]){
                visited[i]=true;
                q.push(i);
            }

        }
        count++;
    }
    return (count!=n);

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
    int * degree=new int[n];
    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        degree[s]++;
        edges[f][s]=1;
        //edges[s][f]=1;
    }
    bool* visited=new bool[n];
    for(int i=0;i<n;i++)
        visited[i]=false;
    cout<<toposort(edges,n,0,visited,degree);

    return 0;
}
