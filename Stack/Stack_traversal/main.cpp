//STL STACK operation push(),pop(),top(),empty(),size()

#include <bits/stdc++.h>

using namespace std;

bool matching(char a,char b){
    return ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
}
bool parath(string &s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
            st.push(s[i]);
        else{
            if(st.empty()==true)
                return false;

            else if(matching(st.top(),s[i])==false)
                return false;
            else
                st.pop();
        }
    }
    return (st.empty());
}

int main()
{
    string s;
    cin>>s;
    int res=parath(s);
    if(res==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO";


    return 0;
}
