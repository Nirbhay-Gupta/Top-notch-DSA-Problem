#include <bits/stdc++.h>

using namespace std;

void patSearch(string & txt,string & pat){
    int m=txt.length();
    int n=pat.length();

    for(int i=0;i<=m-n;i++){
        int j;
        for(j=0;j<m;j++)
            if(pat[i]!=txt[i+j])
                break;


        if(j==m)
            cout<<i<<" ";
    }

}


void search(string pat, string txt)
{
    int M = pat.length();
    int N = txt.length();

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M;) {
        int j;

        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;

        if (j == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
            cout<<i<<" ";

        if(j==0)
            i++;

        else
            i=i+j;
    }
}

int main()
{
    string txt;
    cin>>txt;
    string pat;
    cin>>pat;
    patSearch(txt,pat);
    return 0;
}
