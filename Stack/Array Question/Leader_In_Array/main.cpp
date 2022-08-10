#include <iostream>

using namespace std;

//NAIVE SOLUTION TAKING O(N^2) TIME AND O(1) SPACE

void leaderEle(int a[],int n){
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
            if(a[i]<=a[j]){
                flag =true;
                break;
            }
        }
        if(flag==false){
            cout<<a[i]<<" ";
        }
    }

}

//OPTIMISED SOLUTION TAKING O(N) TIME O(1) SPACE , DISCLAIMER IS THAT IT WILL TRAVERSE THE ARRAY FROM END

void leaderEle1(int a[],int n){
    int curr_leader=a[n-1];
    cout<<curr_leader<<" ";
    for(int i=n-2;i>=0;i--){
        if(curr_leader<a[i]){
            curr_leader=a[i];
            cout<<a[i]<<" ";
        }
    }


}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    leaderEle1(a,n );
    return 0;
}
