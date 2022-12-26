#include<iostream>
using namespace std;
int main(){
    int temp;
    cin>>temp;
    if(temp<=0){
        printf("freezing temperature");
    }
    else if(temp>=0 && temp <=10){
        cout<<"Vey Cold";
    }
    else if (temp>=10 && temp<=20)
    {
        cout<<"Cold";
    }
    else if (temp>=20 && temp <=30)
    {
        cout<<"Normal";
    }
    else if (temp>=30 && temp<=40)
    {
        cout<<"Hot";
    }
    else{
        cout<<"Very Hot";
    }

    return 0;
}