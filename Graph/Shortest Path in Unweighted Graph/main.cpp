#include <bits/stdc++.h>

using namespace std;

bool DFSRec(int** edges,int n,int s,bool* visited,bool* Recst){
    visited[s]=true;
    Recst[s]=true;
    for(int i=0;i<n;i++){
        if(i==s)
            continue;
        if(edges[s][i]==1){
            if(!visited[i]){
                if(DFSRec(edges,n,i,visited,Recst)==true)
                    return true;
            }
            else if(Recst[i])
                return true;


        }
    }
    Recst[s]=false;
    return false;

}

bool DFS(int** edges,int n){
        bool* visited=new bool[n];
        bool* RecSt=new bool[n];
        for(int i=0;i<n;i++){
            visited[i]=false;
            RecSt[i]=false;
        }


        for(int i=0;i<n;i++){
            if(!visited[i]){
                if(DFSRec(edges,n,i,visited,RecSt)==true)
                    return true;

            }
        }
        return false;

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
        //edges[s][f]=1;
    }

    cout<<DFS(edges,n);



    return 0;
}
