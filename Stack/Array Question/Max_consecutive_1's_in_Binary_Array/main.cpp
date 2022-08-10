#include <iostream>

using namespace std;

//NAIVE SOLUTIONAL TAKE O(N^2) TIME

int maxCons(int a[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
            if(a[j]==1){
                curr++;
            }
            else
                break;
        }
        res=max(res,curr);
    }
    return res;
}


//OPTIMISED SOLUTION TAKE O(N) TIME

int maxCons1(int a[],int n){
    int res=0,curr=0;
    for(int i=0;i<n;i++){

        if(a[i]==0){
            curr=0;
        }
        else{
            curr++;
            res=max(res,curr);
        }
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
    int val=maxCons1(a,n);
    cout<<val;
    return 0;
}
