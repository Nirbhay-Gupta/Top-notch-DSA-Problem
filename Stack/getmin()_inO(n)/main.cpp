#include <bits/stdc++.h>

using namespace std;

stack<int>s;
stack<int>ss;

void push(int a){
    s.push(a);
    if(ss.empty()==true || ss.top()>=a){
        ss.push(a);
    }


}
void pop(){
    if(s.top()==ss.top())
        ss.pop();
    s.pop();


}

int getMin(){
    if(s.empty()==true)
            return -1;
    return (ss.top());

}

int main()
{
    push(5);push(4);push(3);cout<<getMin()<<" ";pop();cout<<getMin()<<" ";push(2);cout<<getMin()<<" ";
    return 0;
}
