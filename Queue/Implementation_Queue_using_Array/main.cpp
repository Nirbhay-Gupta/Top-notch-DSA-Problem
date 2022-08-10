#include <iostream>

using namespace std;

struct Queue{
    int *arr;
    int size,cap;

    Queue(int c){
        arr=new int[c];
        cap=c;
        size=0;
    }

    bool isFull(){return (size==cap);}
    bool isEmpty(){return (size==0);}
    void enque(int x){
        if(isFull()){
            return ;
        }
        arr[size]=x;
        size++;
    }
    void deque(){
        if(isEmpty()) return;
        for(int i=0;i<size-1;i++)
            arr[i]=arr[i+1];
    }
    int getFront(){
        if(isEmpty()) return -1;
        return arr[0];
    }
    int getRear(){
        if(isEmpty()) return -1;
        return arr[size-1];
    }
};

int main()
{
    Queue q(5);
    q.enque(5);
    q.enque(10);
    q.enque(15);
    q.deque();
    q.enque(50);
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;

    return 0;
}
