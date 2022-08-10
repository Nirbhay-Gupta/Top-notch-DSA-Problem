#include <iostream>

using namespace std;

void transpose(int *arr[],int m,int n){
    for(int i=0;i<n;i++){
            cout<<"\n";
        for(int j=0;j<m;j++)
            cout<<arr[j][i]<<" ";
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
    transpose(arr,m,n);
    return 0;
}
