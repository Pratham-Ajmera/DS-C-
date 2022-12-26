#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,k;
    cin>>a>>b>>k;
    long long int ans=pow(a,b);
   long long int temp = ans;
   int count=0;
   while(temp >0){
    count++;
    temp=temp/10;
   }
   int div= pow(10,count-k);
   ans=ans/div;
   int p=ans%10;
   cout<<p;
   return 0;

   
}