#include <bits/stdc++.h>

using namespace std;

//Naive solution take O(n^2)
int longsub(int a[],int n,int sum){
    int res=0;
    for(int i=0;i<n;i++){
        int curr_sum=0;
        for(int j=i;j<n;j++){
            curr_sum+=a[j];
            if(curr_sum==sum){
                res=max(res,j-i+1);
            }
        }
    }
    return res;
}

int longsub1(int a[],int n,int sum){
    int res=0;
    unordered_map<int,int>m;
    int pre_sum=0;
    for(int i=0;i<n;i++){
        pre_sum+=a[i];
        if(pre_sum==sum){res=i+1;}
        if(m.find(pre_sum)==m.end()){m.insert({pre_sum,i});}
        if(m.find(pre_sum-sum)!=m.end()){res=max(res,i-m[pre_sum-sum]);}
    }
    return res;

}

int main()
{
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=longsub1(a,n,sum);
    cout<<ans;
    return 0;
}
