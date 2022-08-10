#include<bits/stdc++.h>
using namespace std;

#include<string>
bool printDFS(char** Graph,int i,int j,int N,int M,bool **visited,string S)
{
    //cout<<sv<<" ";
    if(S[0]=='\0') return true;
    if(i<0||i>=N||j<0||j>=M) return false;
    visited[i][j]=true;

    if(j>0){if(!visited[i][j-1]&&Graph[i][j-1]==S[0]){
            visited[i][j-1]=true;
           if(printDFS(Graph,i,j-1,N,M,visited,S.substr(1))) return true;
           else visited[i][j-1]=false;
    }}
    if(j>0&&i>0){
        if(!visited[i-1][j-1]&&Graph[i-1][j-1]==S[0]){
            visited[i-1][j-1]=true;
           if(printDFS(Graph,i-1,j-1,N,M,visited,S.substr(1))) return true;
           else visited[i-1][j-1]=false;
       }
    }
   if(i>0){ if(!visited[i-1][j]&&Graph[i-1][j]==S[0]){
            visited[i-1][j]=true;
           if(printDFS(Graph,i-1,j,N,M,visited,S.substr(1))) return true;
           else visited[i-1][j]=false;
    }}
   if(j<M-1&&i>0){if(!visited[i-1][j+1]&&Graph[i-1][j+1]==S[0]){
            visited[i-1][j+1]=true;
           if(printDFS(Graph,i-1,j+1,N,M,visited,S.substr(1))) return true;
           else visited[i-1][j+1]=false;
    }}
   if(j<M-1) { if(!visited[i][j+1]&&Graph[i][j+1]==S[0]){
            visited[i][j+1]=true;
           if(printDFS(Graph,i,j+1,N,M,visited,S.substr(1))) return true;
           else visited[i][j+1]=false;
    }}
    if(i<N-1&&j<M-1) {if(!visited[i+1][j+1]&&Graph[i+1][j+1]==S[0]){
            visited[i+1][j+1]=true;
           if(printDFS(Graph,i+1,j+1,N,M,visited,S.substr(1))) return true;
           else visited[i+1][j+1]=false;
    }}
    if(i<N-1) {if(!visited[i+1][j]&&Graph[i+1][j]==S[0]){
            visited[i+1][j]=true;
           if(printDFS(Graph,i+1,j,N,M,visited,S.substr(1))) return true;
           else visited[i+1][j]=false;
    }}
    if(j>0&&i<N-1){if(!visited[i+1][j-1]&&Graph[i+1][j-1]==S[0]){
            visited[i+1][j-1]=true;
           if(printDFS(Graph,i+1,j-1,N,M,visited,S.substr(1))) return true;
           else visited[i+1][j-1]=false;
    }}
    return false;
}
int solve(char** Graph,int N, int M)
{
	// Write your code here.
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
         if(Graph[i][j]=='C'){
            bool** visited=new bool*[N];
            for(int f=0;f<N;f++){
                visited[f]=new bool[M];
                for(int y=0;y<M;y++) visited[f][y]=false;
            }
            string s="ODINGNINJA";
            if(printDFS(Graph,i,j,N,M,visited,s)) {
                for(int k=0;k<N;k++) delete [] visited[k];
                delete [] visited;
                return 1;
            }
            for(int k=0;k<N;k++) delete [] visited[k];
                delete [] visited;
         }
        }
    }
    return 0;
}


int main(){

    int N,M;
    cin>>N>>M;
    char** graph=new char* [N];
    for(int i=0;i<N;i++){
        graph[i]=new char[M];
        for(int j=0;j<M;j++){
            cin>>graph[i][j];
        }

    }
    cout<<solve(graph,N,M);
    return 0;
}
