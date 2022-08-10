#include <bits/stdc++.h>

using namespace std;

int maxSubseq(int a[],int n){
    sort(a,a+n);

    int maxRes=1,currCount=1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]+1){
            currCount++;

        }
        else{
            maxRes=max(maxRes,currCount);
            currCount=1;
        }

    }
    maxRes=max(maxRes,currCount);
    return maxRes;
}


int maxSubseq1(int a[],int n){
    unordered_set<int>s;
    int res=0,curr=0;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    for(int i=0;i<n;i++){
        if(s.find(a[i]-1)==s.end())
        curr=1;

        while(s.find(a[i]+curr)!=s.end())
        curr++;
        res=max(res,curr);
    }



    return res;
}


int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=maxSubseq1(a,n);
    cout<<ans;
    return 0;
}
