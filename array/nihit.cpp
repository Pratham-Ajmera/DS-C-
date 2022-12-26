#include<iostream>
#include<vector>
using namespace std;
bool is_possible(vector<int>arr,int n,int k,int mid)
{
    int count=1;
    int sum=0;
    for(int i=0;i<n;i++)
    {

        if(sum+arr[i]<=mid)
        {
            sum+=arr[i];
        }
        else{
            count++;
            if(count>k||arr[i]>mid)
            {
                return false;
            }
            else{
                sum=0;
                sum+=arr[i];
            }
        }
    }
    return true;
}

int books(vector<int>arr,int n,int k)
{
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(is_possible(arr,n,k,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
     return ans;
}
int main()
{
    int n;
    cout<<"SIZE"<<endl;
    cin>>n;
    int k;
    cout<<"STUDENTS"<<endl;
    cin>>k;
    cout<<"ENTER BOOKS"<<endl;
    
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=books(a,n,k);

    cout<<ans<<endl;
}
