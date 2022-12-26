#include<iostream>
using namespace std;

int fact(int n){

    // base case
    int (n==0){
        return 1;
    }

    // recursive call
    int a=n*fact(n-1)
    return(a);

}

int main(){
    int n;
    cin>>n;
    int a=fact(n);
    cout<<a;
    return 0;
}