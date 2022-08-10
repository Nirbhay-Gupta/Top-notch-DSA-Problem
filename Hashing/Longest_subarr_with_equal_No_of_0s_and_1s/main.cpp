#include <iostream>

using namespace std;

int longSub(bool arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        int c0=0,c1=0;
        for(int j=i;j<n;j++){
            if(arr[j]==0)
                c0++;
            else
                c1++;
            if(c0==c1)
                res=max(res,j-i+1);
        }
    }
    return res;

}

int main()
{
    int n;
    cin>>n;

    bool a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=longSub(a,n);
    cout<<ans;
    return 0;
}
