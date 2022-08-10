#include <bits/stdc++.h>

using namespace std;

//Naive Solution o(N^2)

bool isPairSum(int a[],int n,int sum){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==sum)
                return true;
        }
    }
    return false;
}

//Efficient Solution o(N) space=O(n)

bool isPair(int a[],int n,int sum){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        if(s.find(sum-a[i])!=s.end())
            return true;

        s.insert(a[i]);
    }
    return false;
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
    int ans=isPair(a,n,sum);
    if(ans==1)
        cout<<"yes";

    else
        cout<<"No";

    return 0;
}
