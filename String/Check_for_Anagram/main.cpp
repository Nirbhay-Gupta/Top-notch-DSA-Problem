#include <bits/stdc++.h>

using namespace std;

const int CHAR =256;


//Naive Approach using sorting

bool isAnagram(string &s1,string &s2){
    if(s1.length()!=s2.length())
        return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    return (s1==s2);
}

// Efficient Solution

bool areAnagram(string &s1,string &s2){
    if(s1.length()!=s2.length())
        return false;
    int res[CHAR]={0};
    for(int i=0;i<s1.length();i++){
        res[s1[i]]++;
        res[s2[i]]--;
    }
    for(int i=0;i<CHAR;i++){
        if(res[i]!=0)
            return false;
    }
    return true;

}

int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;

    cout<<areAnagram(s1,s2);
    return 0;
}
