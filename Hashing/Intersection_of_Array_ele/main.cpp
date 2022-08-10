#include <bits/stdc++.h>

using namespace std;

//Efficient approach using hashing take o(m+n) time and O(m) aux space

int intersection(int a[],int b[],int m,int n){
   unordered_set<int>s;
   for(int i=0;i<m;i++){
        s.insert(a[i]);
   }
   int res=0;
   for(int j=0;j<n;j++){
        if(s.find(b[j])!=s.end()){
            res++;
            s.erase(b[j]);
        }
   }
   return res;

}

int main()
{
    int m,n;
    cin>>m>>n;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int ans=intersection(a,b,m,n);
    cout<<ans;
    return 0;
}
