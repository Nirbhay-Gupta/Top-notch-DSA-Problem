#include <iostream>

using namespace std;

//NAIVE SOLUTION TAKE O(N^2) TIME

int getWater(int a[],int n){
    int res=0;
    for(int i=1;i<n-1;i++){
        int Lmax=a[i];
        for(int j=0;j<i;j++){
            Lmax=max(Lmax,a[j]);
        }

        int Rmax=a[i];
        for(int j=i+1;j<n;j++){
            Rmax=max(Rmax,a[j]);
        }

        res=res+min(Lmax,Rmax)-a[i];
    }


    return res;


}


//OPTIMISED SOLUTION TAKE O(N)
//WE PRECALCULARE THE LEFT MAX AND RIGHT MAX RATHER THAN CALCULATING FOR EACH ITEM


int getWater1(int a[],int n){
    int res=0;
    int Lmax[n];
    int Rmax[n];

    Lmax[0]=a[0];
    for(int i=1;i<n-1;i++){
        Lmax[i]=max(a[i],Lmax[i-1]);
    }
    Rmax[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        Rmax[i]=max(a[i],Rmax[i+1]);

    }
    for(int i=1;i<n-1;i++){
        res=res+min(Lmax[i],Rmax[i])-a[i];
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
    int val=getWater1(a,n);
    cout<<val;

    return 0;
}
