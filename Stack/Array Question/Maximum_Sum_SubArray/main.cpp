#include <iostream>

using namespace std;

//NAIVE SOLUTION TAKE O(N^2) TIME
int maxSumSubarr(int a[],int n){
    int res=a[0];
    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
            curr=curr+a[j];
            res=max(res,curr);
        }
    }
    return res;

}

// OPTIMISED SOLUTION TAKE O(N) TIME

int maxSumSubarr1(int a[],int n){
    int res=a[0],maxEnding=a[0];

    for(int i=1;i<n;i++){
        maxEnding=max(maxEnding+a[i],a[i]);
        res=max(res,maxEnding);
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
    int val=maxSumSubarr1(a,n);
    cout<<val;
    return 0;
}
