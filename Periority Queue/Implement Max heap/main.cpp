#include <bits/stdc++.h>

using namespace std;

struct periorityQueue{
    vector<int>pq;
    periorityQueue(){}

    bool isEmpty(){
        if(pq.size()==0)
                return true;
        else
            return false;
    }
    int Size(){
        return pq.size();

    }

    int getMax(){
        return pq[0];
    }

    void insert(int x){
        pq.push_back(x);
        int cIndex=pq.size()-1;


        while(cIndex>0){
            int pIndex=(cIndex-1)/2;
            if(pq[pIndex]<pq[cIndex]){
                int temp=pq[pIndex];
                pq[pIndex]=pq[cIndex];
                pq[cIndex]=temp;
            }
            else
                break;

            cIndex=pIndex;

        }

    }

    int removeMax(){
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        int PIndex=0;
        int Lchild=2*PIndex+1;
        int Rchild=2*PIndex+2;
        while(Lchild<pq.size()){
            int maxIndex=PIndex;
            if(pq[maxIndex]<pq[Lchild])
                maxIndex=Lchild;
            if(Rchild<pq.size() && pq[maxIndex]<pq[Rchild])
                maxIndex=Rchild;

            if(maxIndex==PIndex)
                break;

            int temp=pq[maxIndex];
            pq[maxIndex]=pq[PIndex];
            pq[PIndex]=temp;

            PIndex=maxIndex;
            Lchild=2*PIndex+1;
            Rchild=2*PIndex+2;
        }
        return ans;
    }
};

int main()
{
    periorityQueue p;
    p.insert(5);
    p.insert(4);
    p.insert(3);
    p.insert(2);
    p.insert(1);
    cout<<p.Size()<<endl;
    cout<<p.getMax()<<endl;
    while(!p.isEmpty()){
        cout<<p.removeMax()<<" ";
    }
    return 0;
}
