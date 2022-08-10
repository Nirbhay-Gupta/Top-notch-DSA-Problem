#include <bits/stdc++.h>

using namespace std;

bool isPal(string str){
    string rev=str;
    reverse(rev.begin(),rev.end());
    return (rev==str);

}

//Efficient Solution

bool isPal1(string str){
    int start=0;
    int high=str.length()-1;

    while(start<high){
        if(str[start]!=str[high]){
            return false;
        }
        start++;
        high--;
    }
    return true;

}


int main()
{
    string str;
    getline(cin,str);
    int ans=isPal1(str);
    if(ans==1){
        cout<<"Yes";
    }
    else
        cout<<"No";
    return 0;
}
