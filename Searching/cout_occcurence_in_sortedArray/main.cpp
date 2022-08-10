#include <iostream>

using namespace std;

//Naive Approach

/*int countOcc(int a[],int n,int x){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==x)
            count++;

    }
    return count;

}
*/

//first occ code

int firstOcc(int a[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(x>a[mid])
            low=mid+1;
        else if(x<a[mid])
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

// last occ code

int lastOcc(int a[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(x>a[mid])
            low=mid+1;
        else if(x<a[mid])
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

//Efficient solution

int countOcc1(int a[],int n,int x){
    int first=firstOcc(a,n,x);
    if(first==-1) return 0;

    else
        return (lastOcc(a,n,x)- first+1);

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
    int val=countOcc1(a,n,x);
    cout<<val;
    return 0;
}
