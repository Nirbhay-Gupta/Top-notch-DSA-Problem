#include <bits/stdc++.h>

using namespace std;

void kSmallest(int a[],int n,int k){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++)
        pq.push(a[i]);
    int c=1;
    while(c<k+1){
        cout<<pq.top()<<endl;
        pq.pop();
        c++;
    }

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    kSmallest(a,n,4);
    return 0;
}
