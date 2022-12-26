#include<iostream>
using namespace std;

void reverse(int n, int &rev){
    if (n<=0){
        return ;
    }

        int rem;
        rem=n%10;
        rev=(rev*10)+rem;

        reverse(n/10,rev);

}

int main(){
    int n;
    cin>>n;
    int rev=0;
    reverse(n,rev);

    cout<<rev;

    return 0;
}