#include <bits/stdc++.h>

using namespace std;
const int CHAR=256;


//Naive SOLUTION O(N^2)
int leftMost(string & str){
    for(int i=0;i<str.length();i++){
        bool flag=false;
        for(int j=0;j<str.length();j++){
            if(i!=j && str[i]==str[j]){
                flag=true;
                break;
            }
        }
        if(flag==false)
            return i;
    }
    return -1;
}

//BETTER SOLUTION O(n) BUT TWO TRAVERSAL

int leftMost1(string & str){
    int res[CHAR]={0};
    for(int i=0;i<str.length();i++){
        res[str[i]]++;
    }
    for(int i=0;i<str.length();i++){
        if(res[str[i]]==1){
            return i;
        }
    }
    return -1;

}

//Efficient Solution

int leftMost2(string & str){
    int fI[CHAR];
    fill(fI,fI+CHAR,-1);
    for(int i=0;i<str.length();i++){
        if(fI[str[i]]==-1)
            fI[str[i]]=i;

        else
            fI[str[i]]=-2;
    }
    int res=INT_MAX;
    for(int i=0;i<CHAR;i++){
        if(fI[i]>0){
            res=min(res,fI[i]);
        }
    }
    return (res==INT_MAX)?-1:res;


}
int main()
{
    string str;
    cin>>str;
    int ans=leftMost2(str);
    cout<<ans;
    return 0;
}
