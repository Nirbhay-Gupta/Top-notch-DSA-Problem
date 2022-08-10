
#include <bits/stdc++.h>

using namespace std;
struct myDs{
    deque<int>dq;
    void insertMin(int x){
        dq.push_front(x);
    }
    void insertMax(int x){
        dq.push_back(x);
    }
    int getMin(){
        return dq.front();
    }
    int getMax(){
        return dq.back();
    }
    void extract_Min(){
         dq.pop_front();
    }
    void extract_Max(){
         dq.pop_back();
    }

};


int main()
{
    myDs d;
    d.insertMin(5);
    d.insertMax(10);
    d.insertMin(3);
    d.insertMax(15);
    d.insertMin(2);
    cout<<d.getMin()<<endl;
    cout<<d.getMax()<<endl;
    d.insertMin(1);
    cout<<d.getMin()<<endl;
    d.insertMax(20);
    cout<<d.getMax()<<endl;


    return 0;
}
