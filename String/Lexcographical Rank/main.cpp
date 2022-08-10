#include <bits/stdc++.h>

using namespace std;

int fact(int n){
    if(n==0)
        return 1;

    return n*fact(n-1);
}
const int CHAR=256;
int lexoRank(string & s){
    int res=1;
    int n=s.length();
    int mul=fact(n);
    int count1[CHAR]={0};
    for(int i=0;i<n;i++){
        count1[s[i]]++;

    }
    for(int i=1;i<CHAR;i++)
        count1[i]+=count1[i-1];

    for(int i=0;i<n-1;i++){
        mul=mul/(n-i);
        res=res+count1[s[i]-1]*mul;
        for(int j=s[i];j<CHAR;j++)
            count1[j]--;
    }
    return res;

}



int main()
{
    string s;
    cin>>s;

    int ans=lexoRank(s);
    cout<<ans;

    return 0;
}
