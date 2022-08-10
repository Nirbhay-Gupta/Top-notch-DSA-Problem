#include <iostream>
#include<algorithm>
#include<queue>

using namespace std;

int main()
{
    priority_queue<int>pq;
    pq.push(100);
     pq.push(15);
      pq.push(20);
       pq.push(80);
        pq.push(55);

        cout<<"Size "<<pq.size()<<endl;
        cout<<"Top "<<pq.top()<<endl;


        while(!pq.empty()){
            cout<<pq.top()<<" ";
            pq.pop();
        }


    return 0;
}
