#include <iostream>

using namespace std;

//NAIVE SOLUTION TAKE O(N^2) TIME

int maxCircularSum(int a[],int n){
    int res=a[0];
    for(int i=0;i<n;i++){
        int curr_max=a[i];
        int curr_sum=a[i];

        for(int j=1;j<n;j++){
            int index=(i+j)%n;
            curr_sum+=a[index];
            curr_max=max(curr_max,curr_sum);
        }
        res=max(res,curr_max);
    }
    return res;


}


int SubarraySum(int a[],int n){
    int res=a[0],maxEnding=a[0];
    for(int i=1;i<n;i++){
        maxEnding=max(a[i],maxEnding+a[i]);
        res=max(res,maxEnding);
    }
    return res;

}

//OPTIMISED SOLUTION O(N) TIME COMPLEX


int maxCircularSum1(int a[],int n){
    int max_normal=SubarraySum(a,n);

    int arr_sum=0;

    for(int i=0;i<n;i++){
        arr_sum+=a[i];
        a[i]= -a[i];

    }
    int max_circular=arr_sum+SubarraySum(a,n);
    return max(max_normal,max_circular);

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int val=maxCircularSum1(a,n);
    cout<<val;
    return 0;
}
