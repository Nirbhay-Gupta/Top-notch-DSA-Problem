#include <iostream>

using namespace std;

bool isPair(int a[],int left,int right,int x){

    while(left<right){
        if(a[left]+a[right]==x)
            return true;
        else if(a[left]+a[right]>x)
            right--;
        else
            left++;
    }
    return false;

}

bool isTriplet(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if(isPair(a,i+1,n-1,x-a[i]))
            return true;
    }
    return false;

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
    int left=0,right=n-1;
    cout<<isTriplet(a,n,x);
    return 0;
}
