#include <bits/stdc++.h>

using namespace std;

vector<int>nextLSamller(int arr[],int n){
    int pseudoIndex=-1;
    stack<pair<int,int>>s;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s.empty()==true){
            v.push_back(-1);
        }
        else if(s.empty()==false && s.top().first<=arr[i])
            v.push_back(s.top().second);

        else if(s.empty()==false && s.top().first>=arr[i]){
            while(s.empty()==false && s.top().first>=arr[i]){
                s.pop();
            }
            if(s.empty()==true)
                v.push_back(pseudoIndex);
            else
                v.push_back(s.top().second);
        }
        s.push({arr[i],i});
    }
    return v;
}
vector<int>nextRsmaller(int arr[],int n){

    stack<pair<int,int>>st;
    vector<int>v1;
    for(int i=n-1;i>=0;i--){
        if(st.empty()==true){
            v1.push_back(-1);
        }
        else if(st.empty()==false && st.top().first<=arr[i])
            v1.push_back(st.top().second);

        else if(st.empty()==false && st.top().first>=arr[i]){
            while(st.empty()==false && st.top().first>=arr[i]){
                st.pop();
            }
            if(st.empty()==true)
                v1.push_back(-1);

            else
                v1.push_back(st.top().second);
        }
        st.push({arr[i],i});
    }
    reverse(v1.begin(),v1.end());

    return v1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>vLeft;
    vLeft=nextLSamller(a,n);
    vector<int>vRight;
    vRight=nextRsmaller(a,n);
    vector<int>area;

    for(int i=0;i<n;i++){
        area.push_back(a[i]*((vRight[i]-vLeft[i])-1));
    }


    cout<<endl;
    sort(area.begin(),area.end());
    cout<<area[n-1];



    return 0;
}
