//STL STACK operation push(),pop(),top(),empty(),size()

#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Size "<<s.size()<<endl;
    s.pop();
    //cout<<"pop "<<res<<endl;
    cout<<"peek "<<s.top()<<endl;
    cout<<"isEmpty "<<s.empty();

    return 0;
}
