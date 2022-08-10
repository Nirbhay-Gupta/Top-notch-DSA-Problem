#include <iostream>

using namespace std;

//using Recursion

/*int lastOcc(int a[],int n,int x){
    if(n==0)
        return -1;

    int i=lastOcc(a+1,n-1,x);
    if(i==-1){
        if(a[0]==x)
            return 0;
        else
            return -1;

    }
    return i+1;

}*/

//Recursive Binary Search

/*int lastOcc(int a[],int low,int high,int x){
    if(low>high) return -1;

    int mid=(low+high)/2;

    if(x>a[mid])
        return lastOcc(a,mid+1,high,x);
    else if(x<a[mid])
        return lastOcc(a,low,mid-1,x);

    else{
        if(mid==high || a[mid]!=a[mid+1])
            return mid;

        else
            return lastOcc(a,mid+1,high,x);
    }

}*/

//Iterative Binary Search

int lastOcc(int a[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(x>a[mid])
            low=mid+1;

        else if(x<a[mid])
            high=mid-1;

        else{
            if(mid==high || a[mid]!=a[mid+1])
                return mid;
            else
                low=mid+1;
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
    int val=lastOcc(a,n,x);
    cout<<val;
    return 0;
}
