#include<iostream>
using namespace std;
void th(int n, char src, char helper, char dest){
    if(n==1){
        cout<<"disk"<<n<<"transfered from"<<src<<"to"<<dest<<endl;
        return ;
    }
    th(n-1,src,dest,helper);
    cout<<"disk"<<n<<"transfered from"<<src<<"to"<<dest<<endl;
    th(n-1,helper,src,dest);
}
int main(){
    int n=3;
    char a = "A";
    char b = "B";
    char c = "C";
    th(n,a,b,c);
    return 0;
}