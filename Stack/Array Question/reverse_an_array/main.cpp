#include <iostream>

using namespace std;
void printArr(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


}


void reverse(int a[],int n){
    int low=0;
    int high=n-1;

    while(high>=low){
        swap(a[low],a[high]);
        low++;
        high--;

    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    printArr(a,n);
    reverse(a,n);
    cout<<endl;
    printArr(a,n);
    return 0;
}
