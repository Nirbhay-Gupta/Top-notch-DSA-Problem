#include <iostream>

using namespace std;


int firstOcc(int a[],int n){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(1 >a[mid])
            low=mid+1;
        else if(1<a[mid])
            high=mid-1;


        else{
            if(mid==0 || a[mid-1]!=a[mid] )
                return mid;
            else
                high=mid-1;

        }
    }
    return -1;


}


int lastOcc(int a[],int n){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(1>a[mid])
            low=mid+1;
        else if(1<a[mid])
            high=mid-1;


        else{
            if(mid==high || a[mid]!=a[mid+1] )
                return mid;
            else
                low=mid+1;
        }
    }
    return -1;

}

int Count1s(int a[],int n){
    int first=firstOcc(a,n);
    if(first==-1)
        return 0;

    else
        return (lastOcc(a,n)-first + 1);

}



int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int val=Count1s(a,n);
    cout<<val;

    return 0;
}
