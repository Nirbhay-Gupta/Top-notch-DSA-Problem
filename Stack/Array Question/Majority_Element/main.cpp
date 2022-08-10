#include <iostream>

using namespace std;

//NAIVE SOLUTION TAKE O(N^2) TIME

int majorityEle(int a[],int n){
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>n/2)
                return i;
    }
    return -1;

}

//OPTIMISED SOLUTION TAKE O(N) TIME

int majorityEle1(int a[],int n){
    int count=1,res=0;
    for(int i=1;i<n;i++){
        if(a[res]==a[i])
                count++;
        else
            count--;

        if(count==0){
            count=1;
            res=i;
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(a[res]==a[i]){
            count++;
        }
    }
    if(count<=n/2){
        return -1;
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
    int val=majorityEle1(a,n);
    cout<<val;
    return 0;
}
