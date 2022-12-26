]#include<iostream>
using namespace std;

int sum_(int n, int sum){
    if(n==1){
        return 1;
    }

    sum=sum+sum_(n-1);
    return sum;

}

int main(){
    int n;
    cin>>n;
    int sum=0;
    int a=sum_(n,sum);
    cout<<a;
}