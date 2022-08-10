vector<int> nextgreater(int a[],int n){
    stack<int>s;
    vector<int>v;
    for(int i=n-1;i>=0;i--){
        if(s.empty()==true){
            v.push_back(-1);

        }
        else if(s.empty()==false && s.top()<=a[i]){
            v.push_back(s.top());
        }
        else if(s.empty()==false && s.top()>=a[i]){
            while(s.empty()==false && s.top()>=a[i]){
                s.pop();

            }
            if(s.empty()==true)
                v.push_back(-1);
            else
                v.push_back(s.top());
        }
        s.push(a[i]);
    }
    reverse(v.begin(),v.end());

    return v;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>v1;
    v1=nextgreater(a,n);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }



    return 0;
}
