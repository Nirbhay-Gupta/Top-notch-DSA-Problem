#include <iostream>

using namespace std;

//Naive Solution

void searchEle(int *arr[],int m,int n,int x){
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
            if(arr[i][j]==x){
                cout<<"Found at ("<<i<<","<<j<<")";
                return ;
            }


        }
    cout<<"Not Found";

}



//Efficient Solution O(m+n)

void searchEle1(int *arr[],int m,int n,int x){
    int i=0,j=n-1;
    while(i<m && j>=0){
        if(arr[i][j]==x){
            cout<<"Found at ("<<i<<","<<j<<")";
            return ;
        }
        else if(arr[i][j]>x)
            j--;
        else
            i++;
    }
    cout<<"Not Found";
}

int main()
{
    int m,n;
    cin>>m>>n;
    int x;
    cin>>x;
    int *arr[m];

    for(int i=0;i<m;i++){
        arr[i]=new int[n];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    searchEle1(arr,m,n,x);
    return 0;
}
