#include <bits/stdc++.h>

using namespace std;
const int CHAR=256;

//Naive Approach

int leftMost(string &str){
    for(int i=0;i<str.length();i++){
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j])
                return i;
        }

    }
    return -1;

}

//Better Solution O(N + char) and Aux Space O(char) but using two traversal

int leftMost1(string & str){
    int res[CHAR]={0};
    for(int i=0;i<str.length();i++){
        res[str[i]]++;
    }
    for(int i=0;i<str.length();i++){
        if(res[str[i]]>0)
            return i;
    }
    return -1;

}

// Efficient Solution 1 O(N + char) and Aux Space is O(char) But using only one traversal

int leftMost2(string & ){
    int fIndex[CHAR];
    fill(fIndex,fIndex+CHAR,-1);
    int res=INT_MAX;
    for(int i=0;i<str.length();i++){
        int fi=fIndex[str[i]];
        if(fi==-1){
            fIndex[str[i]]=i;

        }
        else{
            res=min(res,fi);
        }
    }
    return (res==INT_MAX)?-1:res;

}

int leftMost3(string & str){
    bool visited[CHAR];
    fill(visited,visited+CHAR,false);
    int res=-1;

    for(int i=str.length();i>=0;i--){
        if(visited[str[i]])
            res=i;

        else
            visited[str[i]]=true;
    }
    return res;
}

int main()
{
    string str;
    cin>>str;
    int ans=leftMost1(str);
    cout<<ans;
    return 0;
}
