#include <iostream>

using namespace std;

//NAIVE SOLUTION TAKE O(N^2) TIME

int maxDiff(int a[],int n){
    int maxdiff=a[1]-a[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            maxdiff=max(maxdiff,(a[j])-a[i]);
            }
        }

    return maxdiff;

}

//OPTIMISED SOLUTION TAKE O(N) TIME AND O(1) SPACE

int maxDiff1(int a[],int n){
    int maxdiff1=a[1]-a[0];
    int minVal=a[0];
    for(int j=1;j<n;j++){
        maxdiff1=max(maxdiff1,(a[j]-minVal));
        minVal=min(minVal,a[j]);
    }
    return maxdiff1;

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }


    int res=maxDiff1(a,n);
    cout<<res;

    return 0;
}
