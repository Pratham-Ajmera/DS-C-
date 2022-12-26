#include<iostream>
using namespace std;
void say(int n, string arr[]){
    if(n==0){
        return ;
    }
    int digit=n%10;
    n=n/10;
    say(n,arr);
    cout<<arr[digit]<<" ";
}
int main(){
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cout<<"Enter the number";
    cin>>n;
    say(n,arr);
    return 0;
}