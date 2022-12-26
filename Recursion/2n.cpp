#include<iostream>
using namespace std;

int power(int n){
    if(n==0){
        return 1;
    }
    int ans=2*power(n-1);
    return ans;
}

int main(){
    int n=0;
    cout<<"Enter the value of the n";
    cin>>n;
    int ans=power(n);
    cout<<ans;
    return 0;
}