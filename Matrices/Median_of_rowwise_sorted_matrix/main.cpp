#include <bits/stdc++.h>

using namespace std;

//Naive Approach O(mnlogmn) time and O(mn) space

int medianEle(int *arr[],int m,int n){
    vector<int>v;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            v.push_back(arr[i][j]);
        }
    }
    sort(v.begin(),v.end());
    return v[(v.size()-1)/2];
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

    cout<<medianEle(arr,m,n);
    return 0;
}
