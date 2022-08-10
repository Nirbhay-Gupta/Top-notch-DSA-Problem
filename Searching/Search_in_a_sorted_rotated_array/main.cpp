#include <iostream>

using namespace std;


//OPTIMISED SOLUTION

int search_rot(int a[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==x) return mid;

        if(a[low]<a[mid]){
            if(x>=a[low] && x<a[mid]){
                high=mid-1;
            }
            else
                low=mid+1;
        }
        else{
            if(x>a[mid] && x<=a[high])
                low=mid+1;
            else
                high=mid-1;
        }
    }
    return -1;

}

int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int val=search_rot(a,n,x);
    cout<<val;
    return 0;
}
