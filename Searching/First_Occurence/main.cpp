#include <iostream>

using namespace std;

//using Recursive Binary Search

/*int first_occ(int a[],int low,int high,int x){
      if(low>high) return -1;
      int mid=(low+high)/2;

       if(a[mid]>x)
         return first_occ(a,low,mid-1,x);

       else if(a[mid]<x)
            return first_occ(a,mid+1,high,x);

       else{
        if(mid==0 || a[mid-1]!=a[mid]){
            return mid;
        }
        else{
            return first_occ(a,low,mid-1,x);
        }
       }

   }
   */



   //using Iterative Binary Search

int first_occ1(int a[],int low,int high,int x){
        if(low>high) return -1;

        int mid=(low+high)/2;

        if(x>a[mid])
            low=mid+1;

        else if(x<a[mid])
            high=mid-1;


        else{
            if(mid==0 || a[mid-1]!=a[mid])
                return mid;
            else
                high=mid-1;
        }

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
    int low=0;
    int high=n-1;
    int val=first_occ1(a,low,high,x);
    cout<<val;
    return 0;
}
