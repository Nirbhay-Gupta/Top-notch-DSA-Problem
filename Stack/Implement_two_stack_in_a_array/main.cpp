#include <bits/stdc++.h>

using namespace std;

struct twoStack{
    int* arr,cap,top1,top2;

    twoStack(int n){
        arr=new int[n];
        cap=n;
        top1=-1;
        top2=cap;
    }
    void push1(int x){
        if(top1<top2-1){
            top1++;
            arr[top1]=x;
        }
    }
    void push2(int x){
        if(top1<top2-1){
            top2--;
            arr[top2]=x;
        }
    }
    int pop1(){
        if(top1>=0){
            int x=arr[top1];
            top1--;
            return x;
        }
        else
            exit(1);
    }
    int pop2(){
        if(top2<cap){
            int x=arr[top2];
            top2++;
            return x;
        }
        else
            exit(1);
    }
};



int main()
{
    twoStack st(10);
    st.push1(1);
    st.push1(2);
    st.push1(3);
    st.push2(11);
    st.push2(22);
    st.push2(33);
    cout<<"stack 1 pop "<<st.pop1()<<endl;
    cout<<"stack 2 pop "<<st.pop2()<<endl;

    return 0;
}
