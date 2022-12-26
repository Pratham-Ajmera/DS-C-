#include<iostream>
using namespace std;

unsigned long long int power(int a, int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    unsigned long long int ans=power(a,b/2);

    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}

int main(){
    int a,b;
    cin>>a>>b;

    unsigned long long int ans=power(a,b);
    cout<<ans;

    return 0;
}
