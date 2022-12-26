#include<iostream>
using namespace std;

void rev(string *str, int i, int e);

int main(){
    string s="pratham";
    int i=0;
    int j=6;
    rev(s,i,j);
    cout<<s;

    return 0;

}
rev(s,i,e){
    if(i>e){
        return ;
    }
    swap(str[i ],str[e]);
    i++;
    e--;
     rev(string *str,int i,int e);
}