#include <iostream>

using namespace std;

bool isPair(int a[],int n,int x){
    int left=0,right=n-1;
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
    cout<<isPair(a,n,x);
    return 0;
}
