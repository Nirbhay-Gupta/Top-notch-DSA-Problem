#include <iostream>

using namespace std;

//EFFICIENT SOLUTION TAKE O(N) TIME AND O(1) SPACE

bool Eqpoint(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    int l_sum=0;
    for(int i=0;i<n;i++){
        if(l_sum==sum-a[i])
            return true;
        l_sum+=a[i];
        sum-=a[i];
    }
    return false;
}

//NAIVE SOLUTION TAKE O(N^2) TIME

bool Eqpoint1(int a[],int n){

    for(int i=0;i<n;i++){
        int l_sum=0,r_sum=0;
        for(int j=0;j<i;j++){
            l_sum+=a[i];
        }
        for(int j=i+1;i<n;i++){
            r_sum+=a[i];
        }
        if(l_sum==r_sum){
            return true;
        }
        else
            return false;

   }

}



int main()
{



    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val=Eqpoint(arr,n);
    if(val==1){
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}
