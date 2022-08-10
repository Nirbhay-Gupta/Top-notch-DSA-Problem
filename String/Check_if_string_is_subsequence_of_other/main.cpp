#include <bits/stdc++.h>

using namespace std;

//ITERATIVE SOLUTION

bool isSubSeq(string &s1,string &s2,int n,int m){
    if(m==0)
        return true;
    if(n==0)
        return false;

    if(s1[n-1]==s2[m-1]){
        return isSubSeq(s1,s2,n-1,m-1);


    }
    else{
        return isSubSeq(s1,s2,n-1,m);
    }
}

int main()
{
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    int n=s1.length();
    int m=s2.length();
    cout<<isSubSeq(s1,s2,n,m);

    return 0;
}
