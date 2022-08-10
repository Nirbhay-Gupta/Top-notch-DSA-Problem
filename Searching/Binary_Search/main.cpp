#include <iostream>

using namespace std;

//NAIVE APPRAOCH IS LINEAR SEARCH WHICH IS WORK ON
//SORTED AS WELL AS UNSORTED ARRAY

int linearSearch(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }

    }
    return -1;

}



//OPTIMISED APPROACH ONLY WORK ON SORTED ARRAY
int binarySearch(int a[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==x)
            return mid;
        else if(a[mid]>x)
            high=mid-1;
        else if(a[mid]<x)
            low=mid+1;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //int val=binarySearch(arr,n,x);
    int res=linearSearch(arr,n,x);

    cout<<res;
    return 0;
}
