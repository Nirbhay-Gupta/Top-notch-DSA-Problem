#include <bits/stdc++.h>

using namespace std;

//Naive approach O(N^2) and Space O(1)

int countDist(int a[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                flag=true;
                break;
            }
        }
        if(flag==false){
            count++;
        }
    }
    return count;
}

int countDist1(int a[],int n){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    return s.size();
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=countDist1(arr,n);
    cout<<res;
    return 0;
}
