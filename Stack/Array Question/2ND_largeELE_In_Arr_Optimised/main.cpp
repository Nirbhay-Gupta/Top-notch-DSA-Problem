#include <iostream>

using namespace std;

int Second_Largest(int a[],int n){
    int largest=0;int res=-1;

    for(int i=0;i<n;i++){
        if(a[i]>a[largest]){
            res=largest;
            largest=i;
        }
        else if(a[i]!=a[largest]){
            if(res==-1 || a[i]>a[res]){
                res=i;
            }
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

    int result=Second_Largest(a,n);
    cout<<result;

    return 0;
}
