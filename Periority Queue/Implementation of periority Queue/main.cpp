#include <bits/stdc++.h>

using namespace std;

struct pQueue{
    vector<int>pq;

    pQueue(){}

    bool isEmpty(){
        if(pq.size()==0)
                return true;
        return false;
    }
    int Size(){
        return pq.size();
    }
    int getMin(){
        if(isEmpty())
                return -1;
        return pq[0];
    }

    void Insert(int x){
        pq.push_back(x);
        int childIndex=pq.size()-1;
        while(childIndex>0){
            int parentIndex=(childIndex-1)/2;

            if(pq[parentIndex]>pq[childIndex]){
            int temp=pq[childIndex];
            pq[childIndex]=pq[parentIndex];
            pq[parentIndex]=temp;
            }
            else
                break;
            childIndex=parentIndex;
        }

    }

    int removeMin(){
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();

        int parentIndex=0;
        int Lchild=2*parentIndex+1;
        int Rchild=2*parentIndex+2;
        while(Lchild<pq.size()){

            int midIndex=parentIndex;

        if(pq[midIndex]>pq[Lchild])
                midIndex=Lchild;

        if( Rchild<pq.size() && pq[midIndex]>pq[Rchild])
                midIndex=Rchild;

        if(midIndex==parentIndex)
                break;
        int temp=pq[midIndex];
        pq[midIndex]=pq[parentIndex];
        pq[parentIndex]=temp;

        parentIndex=midIndex;
        Lchild=2*parentIndex+1;
        Rchild=2*parentIndex+2;
        }
        return ans;


    }


};

int main()
{
    pQueue p;
    p.Insert(100);
    p.Insert(10);
    p.Insert(15);
    p.Insert(4);
    p.Insert(17);
    p.Insert(21);
    p.Insert(67);
    cout<<p.Size()<<endl;
    cout<<p.getMin()<<endl;

    while(!p.isEmpty()){
        cout<<p.removeMin()<<" ";
    }

    return 0;
}
