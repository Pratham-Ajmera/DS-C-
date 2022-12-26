#include<string.h>
#include<iostream>
#include<map>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<int,int> m;
    int i=0;
    while(s[i] !='\0'){

        m[int(s[i])]++;
        i++;
    }
    

}