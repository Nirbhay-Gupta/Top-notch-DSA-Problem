#include<bits/stdc++.h>
using namespace std;


void dfs(char** cake,int n,int &k,int i,int j){

    k++;

    cake[i][j]='0';



    if(i+1<n && cake[i+1][j]=='1')

        dfs(cake,n,k,i+1,j);

    if(i-1>=0 && cake[i-1][j]=='1')

        dfs(cake,n,k,i-1,j);

    if(j+1<n && cake[i][j+1]=='1')

        dfs(cake,n,k,i,j+1);

    if(j-1>=0 && cake[i][j-1]=='1')

        dfs(cake,n,k,i,j-1);



}

int solve(int n,char** cake)

{

	// Write your code here .
    int ans=0;

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){



            if(cake[i][j]=='1'){

                int k1=0;

                dfs(cake,n,k1,i,j);

              ans=max(ans,k1);

            }

        }

    }

    return ans;

}
int main(){
    int n;
    cin>>n;
    char** cake=new char*[n];
    for(int i=0;i<n;i++){
        cake[i]=new char[n];
        for(int j=0;j<n;j++){
            cin>>cake[i][j];
        }

    }
    cout<<solve(n,cake);
    return 0;
}
