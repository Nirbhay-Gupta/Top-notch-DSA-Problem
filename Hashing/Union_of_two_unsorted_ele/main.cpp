#include <bits/stdc++.h>

using namespace std;

//Naive solution T(n)=O(m+n * m+n) space O(m+n

/*int unionEle(int a[],int b[],int m,int n){
    int c[m+n];
    for(int i=0;i<m;i++){
        c[i]=a[i];
    }
    for(int i=0;i<n;i++){
        c[m+i]=b[i];
    }
    int res=0;
    for(int i=0;i<m+n;i++){
        bool flag=false;
        for(int j=0;j<i;j++){
            if(c[i]==c[j]){flag=true;break;}

        }
        if(flag==false){res++;}

    }
    return res;

}
*/

//Efficient approach using hashing

int unionele(int a[],int b[],int m,int n){
    unordered_set<int>s;

    for(int i=0;i<m;i++){
        s.insert(a[i]);
    }
    for(int j=0;j<n;j++){
        s.insert(b[j]);
    }


    return s.size();
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
    int ans=unionele(a,b,m,n);
    cout<<ans;
    return 0;
}
