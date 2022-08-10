#include <iostream>

using namespace std;

void printArr(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}

void left_rotate_byOne(int a[],int n){

    int temp=a[0];
    for(int i=1;i<n;i++){
        a[i-1]=a[i];
    }

    a[n-1]=temp;



}


// NAIVE SOLUTION TAKE {O(N*d} TIME AND O(1) AUXILIARY SPACE

void leftRotate_dTimes(int a[],int n,int d){
    for(int i=0;i<d;i++){
        left_rotate_byOne(a,n);
    }

}

// BETTER SOLUTION THAN ABOVE IT TAKE O(N) TIME AND O(D) AUXILIARY SPACE

void leftRotate_dTimes1(int a[],int n,int d){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=a[i];
    }
    for(int i=d;i<n;i++){
        a[i-d]=a[i];
    }
    for(int i=0;i<d;i++){
        a[n-d+i]=temp[i];
    }

}

void reversed(int a[],int low,int high){
    while(low<high){
        swap(a[low],a[high]);
        low++;
        high--;
    }
}


//OPTIMISED SOLUTION IT TAKE O(N) TIME AND O(1) SPACE

void leftRotate_dTimes2(int a[],int n,int d){
    reversed(a,0,d-1);
    reversed(a,d,n-1);
    reversed(a,0,n-1);

}


int main()
{
    int a[5]={1,2,3,4,5};
    leftRotate_dTimes2(a,5,3);
    printArr(a,5);
    return 0;
}
