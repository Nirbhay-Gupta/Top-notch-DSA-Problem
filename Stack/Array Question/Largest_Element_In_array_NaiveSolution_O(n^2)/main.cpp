#include<bits/stdc++.h>
using namespace std;

int largestEle(int a[],int n){

    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<n;j++){
            if(a[j]>a[i]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            return a[i];
        }
    }
    return -1;
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


















