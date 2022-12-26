#include<iostream>
using namespace std;

void series(int  n){
    cout<<"hy ";
    if(n<0){
        return ;
    }
    n--;
    series(n);
    cout<<n;


}

int main(){
    int n;
    cin>>n;
    series(n);
    return 0;
}