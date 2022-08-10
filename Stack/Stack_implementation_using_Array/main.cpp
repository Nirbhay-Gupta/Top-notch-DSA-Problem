#include <bits/stdc++.h>

using namespace std;

struct myStack{
    int *arr;
    int cap;
    int top;

    myStack(int c){
        cap=c;
        arr=new int[cap];
        top=-1;

    }
    void push(int x){
        top++;
        arr[top]=x;
    }
    int pop(){
        int res=arr[top];
        top--;
        return res;
    }
    int peek(){
        return arr[top];
    }
    int size(){
        return (top+1);
    }
    bool isEmpty(){
        return (top==-1);
    }
};

int main()
{
    myStack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Peek"<<s.peek()<<endl;
    s.pop();
    cout<<"Peek after pop"<<s.peek()<<endl;
    cout<<"Size"<<s.size()<<endl;
    cout<<s.isEmpty();


    return 0;
}
