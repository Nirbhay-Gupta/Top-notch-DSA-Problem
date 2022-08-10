#include <iostream>

using namespace std;
 void printArr(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
 }


//NAIVE sOLUTION tAKING {o(n^2} TIME

void moveZero(int a[],int n){

    for(int i=0;i<n;i++){
        if(a[i]==0){
            for(int j=i+1;j<n;j++){
                if(a[j]!=0){
                    swap(a[i],a[j]);
                    break;
                }
            }
        }
    }
}


//OPTIMISED SOLUTION TAKING {O(N)} TIME

void moveZero2(int a[],int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){

            swap(a[count],a[i]);
            count++;
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

    moveZero2(a,n);
    printArr(a,n);

    return 0;
}
