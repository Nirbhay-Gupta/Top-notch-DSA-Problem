
#include <bits/stdc++.h>

using namespace std;

bool isRotata(string &s1,string &s2){s
    if(s1.length()!=s2.length())
        return false;

    return ((s1+s1).find(s2)!=string::npos);

}

int main()
{
    string txt;
    cin>>txt;
    string pat;
    cin>>pat;

    bool ans=isRotata(txt,pat);
    cout<<ans;



    return 0;
}
