#include <iostream>

using namespace std;


//NAIVE SOLUTION TAKE O(N^2) TIME AND O(1) SPACE

int maxProf(int a[],int start,int end){

    if(start>=end){
        return 0;
    }
    int profit=0;
    for(int i=start;i<end;i++){
        for(int j=i+1;j<=end;j++){
            if(a[j]>a[i]){
                int curr_prof=(a[j]-a[i])+maxProf(a,start,i-1)+maxProf(a,j+1,end);
                profit=max(profit,curr_prof);
            }

        }

    }
    return profit;

}


//EFFICIENT SOLUTION TAKE ONLY O(N) TIME

int maxProf1(int a[],int n){
    int profit=0;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            profit+=(a[i]-a[i-1]);
        }
    }
    return profit;
}





int main()
{
    int n;
    cin>>n;
    int price[n];
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    int start=0;
    int end=n-1;
    cout<<"output using Naive solution: ";
    int val=maxProf(price,start,end);
    cout<<val<<endl;

    cout<<"output using efficient solution: ";
    int val1=maxProf1(price,n);
    cout<<val1;

    return 0;
}
