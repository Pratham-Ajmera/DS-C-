// #include<iostream>

// int power(int a, int n){
//     if(n==0){
//         return 1;
//     }

//     int ans= a*power(a,n-1);
//     return ans;

// }

// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int n;
//     cin>>n;
//     int ans=power(a,n);
//     cout<<ans;
//     return 0;
// }



#include<iostream>
using namespace std;

int power(int a, int n){
    
    if(n==0){
        return 1;
    }

    if(n%2==0){
        return (power(a,n/2)*power(a,n/2));
    }

    else{
        return (a*power(a,n/2)*power(a,n/2));
    }

}

int main(){
    int n;
    cin>>n;
    int a;
    cin>>a;
    int ans =power(a,n);
    cout<<ans;
}