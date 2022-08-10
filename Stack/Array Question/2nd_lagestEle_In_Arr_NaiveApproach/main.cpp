#include <iostream>

using namespace std;

//CODE IS NOT GIVING CORRECT OUTPUT


int largest(int a[],int n){
    int max=0;
    for(int i=1;i<n;i++){
        if(a[i]>a[max]){
            max=i;
        }
    }
    return max;


}

int secLarge(int a[],int n){
    int large=largest(a,n);
    int res=-1;

    for(int i=0;i<n;i++){
            if(a[i]!=a[large]){
                if(res==-1){
                    res=i;
                }
            }
            else if(a[i]>a[res]){
                    res=i;

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
    cout<<"LArgest element"<<endl;
    int large1=largest(a,n);
    cout<<a[large1];

    cout<<endl;
    cout<<"Second"<<endl;


    int rest=secLarge(a,n);
    cout<<a[rest];
    return 0;
}
