#include <iostream>

using namespace std;

//Naive sol

int peakEle(int a[],int n){
  if(n==1) return a[0];
  if(a[0]>=a[1]) return a[0];
  if(a[n-1]>=a[n-2]) return a[n-1];

  for(int i=1;i<n-1;i++){
    if(a[i]>=a[i-1]  && a[i]>=a[i+1]) return a[i];
  }

}

// Optimised solution

int getPeak(int a[],int n){
    int low=0,high=n-1;
    while(low<=high){

        int mid=(low+high)/2;
        if((mid==0 || a[mid-1]<=a[mid])  && (mid==n-1 || a[mid+1]<=a[mid]) )  return a[mid];
        if(mid>0 && a[mid-1]>a[mid])
            high=mid-1;
        else
            low=mid+1;
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
    cout<<getPeak(a,n);
    return 0;
}
