#include<iostream>
using namespace std;

int ways(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }

    int ans=ways(n-2)+ways(n-1);

    return ans; 
}

int main(){
    int n;
    cout<<"Enter the no. of stairs";
    cin>>n;
    int ans=ways(n);
    cout<<ans;

    return 0;
}