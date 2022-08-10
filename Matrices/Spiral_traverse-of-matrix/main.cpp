#include <iostream>

using namespace std;

void spiralTraverse(int *arr[],int m,int n){
    if(m==1){
        for(int i=0;i<n;i++)
            cout<<arr[0][i]<<" ";
    }
    else if(n==1){
        for(int i=0;i<m;i++)
            cout<<arr[i[0]<<" ";
    }
    else{

    }



}

int main()
{
    int m,n;
    cin>>m>>n;
    int *arr[m];

    for(int i=0;i<m;i++){
        arr[i]=new int[n];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    return 0;
}
