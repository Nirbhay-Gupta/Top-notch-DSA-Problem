#include <iostream>

using namespace std;

//NAIVE SOLUTION TALE O(N^2) TIME

int maxLenSubarr(int a[],int n){
    int res=1;
    for(int i=0;i<n;i++){
        int curr=1;
        for(int j=i+1;j<n;j++){
            if((a[j]%2==0 && a[j-1]%2!=0) || (a[j]%2!=0 && a[j-1]%2==0)){
                curr++;

            }
            else
                break;
        }
        res=max(res,curr);
    }
    return res;

}

//OPTIMISED SOLUTION TAKE o(N) TIME

int maxLenSubarr1(int a[],int n){
    int res=1;
    int curr=1;
    for(int i=1;i<n;i++){
        if((a[i]%2==0 && a[i-1]%2!=0) || (a[i]%2!=0 && a[i-1]%2==0)){
            curr++;
            res=max(curr,res);
        }
        else
            curr=1;
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
    int val=maxLenSubarr1(a,n);
    cout<<val;
    return 0;
}
