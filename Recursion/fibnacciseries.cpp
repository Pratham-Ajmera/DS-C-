#include<iostream>
using namespace std;

int fib(int n){
    if(n==1){
        cout<<"0";
        return 0;
    }
    if(n==2){
        return 1;
    }

    int ans=fib(n-2)+fib(n-1);

    return ans;
}

int main(){
    int n=0;
    cout<<"Enter the no.";
    cin>>n;
    for(int i=1; i<=n; i++){
        int ans=fib(n);
        cout<<ans<<" ";
    }

    return 0;
}