#include<bits/stdc++.h>
using namespace std;

int largestEle(int a[],int n){

    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[max]){
            max=i;
        }
    }
    return a[max];
}

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int val=largestEle(a,n);
    cout<<val;







    return 0;


}


















