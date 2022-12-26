#include<iostream>
using namespace std;

void series(int data){
    cout<<data<<" ";

    // base_case; 
    if(data>0){
        return ;
    }

    series(data-5);
    cout<<data<<" ";

}

int main(){
    int data;
    cin>>data;
    series(data);
    return 0;
}