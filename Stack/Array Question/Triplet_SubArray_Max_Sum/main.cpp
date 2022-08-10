#include <bits/stdc++.h>

using namespace std;

//NAIVE SOLUTION

int triplet_sum(int a[],int n,int k){
    int max_sum=INT_MIN;
    for(int i=0;i+k-1<n;i++){
        int sum=0;
        for(int j=0;j<k;j++){
            sum+=a[i+j];
        }
        max_sum=max(max_sum,sum);
    }
    return max_sum;

}
//OPTIMISED SOLUTION
//NOTE:- USES WINDOW SLIDING TECHNIQUE IN WHICH COMPUTE THE SUM OF WINDOW,AFTRE THAT NEXT ELEMENT ADDED AND
//FIRST ELEMENT DELETED FROM WINDOW

int triplet_sum1(int a[],int n,int k){
    int curr_sum=0;
    for(int i=0;i<k;i++){
        curr_sum+=a[i];
    }
    int max_sum=curr_sum;
    for(int i=k;i<n;i++){
        curr_sum+=(a[i]-a[i-k]);
        max_sum=max(curr_sum,max_sum);
    }
    return max_sum;


}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int val=triplet_sum(a,n,k);
    cout<<val;
    return 0;
}
