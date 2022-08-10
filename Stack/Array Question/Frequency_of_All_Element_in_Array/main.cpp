#include <iostream>

using namespace std;

void freqEle(int arr[],int n){
    int freq=1;
    int i=1;
    while(i<n){
        while(i<n && arr[i-1]==arr[i]){
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        i++;
        freq=1;


    }

    if(n==1 || arr[n-2]!=arr[n-1]){
        cout<<arr[n-1]<<" "<<1<<endl;
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
    freqEle(arr,n);
    return 0;
}
