#include <bits/stdc++.h>

using namespace std;

bool isSubarr(int a[],int n){
    for(int i=0;i<n;i++){
        int curr_sum=0;
        for(int j=i;j<n;j++){
            curr_sum+=a[j];
            if(curr_sum==0){
                return true;
            }
        }
    }
    return false;
}

bool isSub(int a[],int n){
    unordered_set<int>h;
    int pre_sum=0;
    for(int i=0;i<n;i++){
        pre_sum+=a[i];
        if(h.find(pre_sum)!=h.end())
            return true;
        if(pre_sum==0)
            return true;
        h.insert(pre_sum);
    }
    return false;
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=isSub(a,n);
    cout<<ans;
    return 0;
}
