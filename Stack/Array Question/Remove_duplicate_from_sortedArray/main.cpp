#include <iostream>

using namespace std;



void removeDup(int a[],int n){
    int temp[n];
    temp[0]=a[0];
    int res=1;

    for(int i=1;i<n;i++){
        if(temp[res-1]!=a[i]){
            temp[res]=a[i];
            res++;
        }
    }
    for(int i=0;i<n;i++){
        a[i]=temp[i];
    }
    for(int i=0;i<res;i++){
        cout<<a[i]<<" ";
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




    removeDup(a,n);



    return 0;
}
