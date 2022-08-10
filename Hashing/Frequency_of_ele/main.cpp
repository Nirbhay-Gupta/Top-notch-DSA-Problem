#include <bits/stdc++.h>

using namespace std;

void printFrq(int arr[],int n){
    unordered_map<int,int>h;
    for(auto x:arr){
        h[x]++;
    }


    for(auto e:h){
        cout<<e.first<<" "<<e.second<<endl;
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printFrq(arr,n);
    return 0;
}
