#include<iostream>
using namespace std;

int gcd(int a, int b){
    
        if(a==0){
            return b;
        }
        if(b==0)
        {
            return a;
        }
    

    if(a>b){
        gcd(a,b-a);
    }
    else{
        gcd(a-b,b);
    }

}

int main(){
    int a;
    int b;
    cin>>a>>b;
    int ans = gcd(a,b);
    cout<<a;
    return 0;
}