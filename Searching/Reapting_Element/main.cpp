#include <bits/stdc++.h>

using namespace std;

//Super Naive app take O(n^2)
int repEle(int a[],int n){
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j])
                return a[i];
    }
    return -1;

}

//Naive app take O(nlogn)

int repEle1(int a[],int n){
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i-1]==a[i])
            return a[i];
    }

}


int repEle2(int a[],int n){
    bool visited[n]={false};
    for(int i=0;i<n;i++){

        if(visited[a[i]])
            return a[i];

        visited[a[i]]=true;
    }
}

int repEle3(int a[],int n){
    int slow=a[0],fast=a[0];
    do{
        slow=a[slow];
        fast=a[a[fast]];
    } while(slow!=fast);
    slow=a[0];
    while(slow!=fast){
        slow=a[slow];
        fast=a[fast];
    }
    return slow;

}

int main()
{
     int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<repEle3(a,n);
    return 0;
}
