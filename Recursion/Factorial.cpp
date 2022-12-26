#include<iostream>
using namespace std;
long long int fact(int n){
    if(n==0){
        return 1;
    }
    long long ans=0;

    
    ans=n*fact(n-1);
    return ans; 

    
}
int main(){
    cout<<"Enter the no.";
    int n=0;
    cin>>n;
    long long int  ans=fact(n);
    cout<<ans<<endl;

    return 0;
}