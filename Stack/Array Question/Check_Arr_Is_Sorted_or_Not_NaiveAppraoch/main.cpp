#include <iostream>

using namespace std;

bool isSorted(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;i<n;j++){
            if(a[i]>a[j]){
                return false;
            }
            return true;
        }
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
    int res=isSorted(a,n);
    if(res==1){
        cout<<"sorted";
    }
    else
        cout<<"not sorted";
    return 0;
}
