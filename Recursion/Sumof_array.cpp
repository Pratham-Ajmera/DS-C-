#include<iostream>
using namespace std;

int s(int *arr, int n, int sum){
    if (n==0){
        return 0;
    }

    if(n==1){
        return arr[0];
    }

    else{
        int rem=s(arr+1, n-1);
        int ans=arr[0]+rem;
        return ans;

    }
}

int main(){

    int arr[]={1,2,3,4,5,6,7,8};
    int n=8;
    int sum=0;
    int ans=ss(arr,n,sum);
    cout<<"the ans is"<<ans<<endl;

    return 0;
}