#include <iostream>

using namespace std;

int binarySearch(int a[],int low,int high,int x){

    if(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==x)
            return mid;
        else if(a[mid]>x)
            return binarySearch(a,0,mid-1,x);
        else if(a[mid]<x)
            return binarySearch(a,mid+1,high,x);



    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    int low=0;
    int high=n-1;

    int val=binarySearch(a,low,high,x);
    cout<<val;
    return 0;
}
