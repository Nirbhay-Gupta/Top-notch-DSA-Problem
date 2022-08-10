#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    int res=q.empty();
    if(res==1)
        cout<<"Empty"<<endl;
    else
        cout<<"NOt Empty"<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;




    return 0;

}
