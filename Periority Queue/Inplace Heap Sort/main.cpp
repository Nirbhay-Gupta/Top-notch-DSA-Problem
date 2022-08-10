#include <iostream>

using namespace std;

void heapSort(int pq[],int n){
    for(int i=1;i<n;i++){
        int cIndex=i;


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

        int size=n;
        while(size>1){

            int temp=pq[0];
        pq[0]=pq[n-1];
        pq[n-1]=pq[0];




        int parentIndex=0;
        int Lchild=2*parentIndex+1;
        int Rchild=2*parentIndex+2;
        while(Lchild<size){

            int midIndex=parentIndex;

        if(pq[midIndex]>pq[Lchild])
                midIndex=Lchild;

        if( Rchild<size && pq[midIndex]>pq[Rchild])
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

        }




}

int main()
{
    int pq[]={5,1,2,0,8};
    heapSort(pq,5);
    for(int i=0;i<5;i++)
        cout<<pq[i]<<" ";
    return 0;
}
