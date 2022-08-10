#include <bits/stdc++.h>

using namespace std;

bool isMaxheap(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[2*i+1]>a[i])
            return false;
        else if(a[2*i+2]>a[i])
            return false;

    }
    return true;



}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<isMaxheap(a,n);
    return 0;
}
