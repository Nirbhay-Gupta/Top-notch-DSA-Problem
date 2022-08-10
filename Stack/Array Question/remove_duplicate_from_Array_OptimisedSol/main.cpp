#include <iostream>

using namespace std;

int removeDup(int a[],int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(a[res-1]!=a[i]){
            a[res]=a[i];
            res++;
        }
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




    cout<<removeDup(a,n);


    return 0;
}
