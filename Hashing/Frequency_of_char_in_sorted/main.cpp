#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str="geeksforgeeks";
    int a[26]={0};
    for(int i=0;i<str.length();i++){
        a[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(a[i]>0){
            cout<<(char)(i+'a')<<" "<<a[i]<<endl;
        }
    }

    return 0;
}