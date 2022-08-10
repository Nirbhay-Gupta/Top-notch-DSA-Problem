#include <bits/stdc++.h>

using namespace std;

double sortedMedian(int a1[],int a2[],int n,int m){

    int res[n+m];
    for(int i=0;i<n;i++){
        res[i]=a1[i];
    }
    for(int i=n;i<m+n+1;i++){
        res[i]=a2[i];
    }

    sort(res,res+(n+m));
    int low=0,high=n+m-1;
    if((n+m)%2!=0)

        return res[(low+high)/2];

    else{
        int mid=(low+high)/2;
        int val=(res[mid]+res[mid+1])/2;
        return val;
    }




}

int main()
{
    int n,m;
    cin>>n>>m;
    int a1[n],a2[m];
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    for(int i=0;i<n;i++){
        cin>>a2[m];
    }
    cout<<sortedMedian(a1,a2,n,m);
    return 0;
}
